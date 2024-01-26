#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LIMIT 1000
/*
CVim stands for C styled Vim which is inspired directly from the highly popular Vim text editor available on MacOS and Linux Distros.
CVim as the name suggests is also a simple text editor but with only 5 modes/commands : Create, Read, Write, Delete and Help. 
*/

void help();
void createfile(char* filename);
void readfile(char* filename);
void writefile(char* filename);
void delcharsfromfile(char* filename, long int pos, long int ncharsdelete);
void insert(char* filename, long int peeklocation);
void deletefile(char* filename);

// Arguments  : Mode Filename/Mode
int main(int argc, char **argv){
    if(strcmp(argv[1],"r") == 0)readfile(argv[2]);            // read mode
    else if(strcmp(argv[1],"c") == 0)createfile(argv[2]);     // create mode
    else if(strcmp(argv[1],"w") == 0)writefile(argv[2]);      // write mode
    else if(strcmp(argv[1], "d") == 0)delcharsfromfile(argv[2], strtol(argv[3], NULL,10), strtol(argv[4], NULL,10) ); // delete characters mode
    else if(strcmp(argv[1], "i") == 0)insert(argv[2] , strtol(argv[3], NULL, 10) );    // insert mode from a certain index
    else if(strcmp(argv[1],"del") == 0)deletefile(argv[2]);       // delete file mode
    else if(strcmp(argv[1], "help") == 0 || strcmp(argv[1], "h") == 0 || strcmp(argv[1] ,"-help") == 0) help();   // help mode
    else printf("%s <- No such option.\n./cvim help <- for how to use CVim \n", argv[1]);
    return 0;
}

// help mode : h
void help(){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~ Thanks for choosing CVim !!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("./cvim c <filename> <- used for creating a file. \n\targs = <filename> : name of the file\n");
    printf("./cvim r <filename> <- used for reading a file\n\targs = <filename> : name of the file\n");
    printf("./cvim w <filename> <- used for writing  a file\n\targs = <filename> : name of the file\n");
    printf("./cvim i <filename> <position> <- used for inserting characters from index = position\n\targs = <filename> : name of the file\n\t <position>: index of insertion\n");
    printf("./cvim d <filename> <position> <n> <- used for deleting n characters from index = position\n\t<position> : index of insertion\n\t<n> : number of characters to be deleted \n");
    printf("./cvim del <filename> <- used for deleting a file\n\targs = <filename> : name of the file\n");
    printf("./cvim h <mode> | .vimc help <mode> <- used for creating a file \n\targs = <mode> = name of the mode about which you want some brief info");
}


// create mode : c
void createfile(char* filename){ 
    /*
     creates a file if not present, if present it ignores creation and allows reading 
    */
    FILE* fileptr;
    fileptr = fopen(filename, "w");
    fclose(fileptr);
}

// read mode : r
void readfile(char* filename){
    /*
        Reads a file from top to bottom
    */
    FILE* fileptr;
    if(fopen(filename, "r") == NULL)printf("%s <- has not been created. \n./cvim c %s <- to create the file.", filename, filename);
    else{
    fileptr = fopen(filename, "r");

    // Read the first character from the file
    int ch = getc(fileptr);

    // Loop until the end of the file is reached
    while (ch != EOF) {
        /* display contents of file on screen */
        putchar(ch);
        // Read the next character from the file
        ch = getc(fileptr);
    }
    //if file pointer at End of Line
    if(feof(fileptr)){
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ END of %s ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nPress Enter / Return to continue ...", filename);
    }else{
        printf("!! Something went wrong.\nPress Enter or Return to continue ...");
    }

    fclose(fileptr);

    // wait for a keypress
    getchar();
    }
}

// write mode : w
void writefile(char* filename){
    /*
        Writes onto the file
    */
    FILE* fileptr;
    fileptr = fopen(filename, "a");

    char line[MAX_LIMIT];
    fgets(line, MAX_LIMIT, stdin);
    fprintf(fileptr, "%s",line); 
    fclose(fileptr);
}

// delete characters mode : d
void delcharsfromfile(char* filename, long int pos, long int ncharsdelete){
    /* 
    Deletes the no of characters from the file from end location.,. if ncharsdelete exceeds the file size then error is displayed
    */
    FILE* fileptr;
    fileptr = fopen(filename, "a+");

    fseek(fileptr, 0, SEEK_END);
    // stores the file size
    int filesize = ftell(fileptr);

    //stores the length of the new file after deletion
    int newlength = filesize - ncharsdelete;
    // terminate program if no of characters to be deleted is greater then file sizes
    if(newlength < 0){
        printf("Invalid Delete Operation ... Trying to delete characters from file more than what file contains. \nTry Setting positive value less than file size for ncharsdelete param\n");
        exit(0);
    }

    char content[filesize-ncharsdelete];

    //copying all line till pos and skipping next ncharsdelete characters and then copying the remaining lines.
    rewind(fileptr);
    char ch;
    for(int i =0; i<= newlength; i++){
        if(i == pos-1){
            fseek(fileptr, 0, pos + ncharsdelete-1);
        }
        ch = getc(fileptr);
        content[i] = ch;
    }
    fclose(fileptr);

    //putting only wanted characters into the file by overwriting onto the file
    FILE* newfileptr;
    newfileptr = fopen("demo.txt", "w");
    
    fprintf(newfileptr, "%s", content);
    fclose(newfileptr);

}

// insert character mode : i
void insert(char* filename, long int peeklocation){
    FILE* fileptr;
    fileptr = fopen(filename, "a+");
    // stores the file size
    long int filesize = ftell(fileptr);

    if(peeklocation > filesize){
        printf("Invalid Peek location : %li, filesize : %li", peeklocation, filesize);
        exit(0);
    }
    char content[filesize - peeklocation];
    char prevcontent[peeklocation];

    rewind(fileptr);
    char ch;

    // storing the content before the index peeklocation
    for(int i =0; i< peeklocation; i++){
        ch = getc(fileptr);
        prevcontent[i] = ch;
    }
    // storing the content after the index peeklocation
    for(int i =0; i< filesize-peeklocation; i++){
        ch = getc(fileptr);
        content[i] = ch;
    }
    fclose(fileptr);

    FILE* newfileptr = fopen(filename, "w");

    for(int i = 0; i<peeklocation; i++){
        fputc(prevcontent[i], newfileptr);
    }
    // inserting the line to be inserted
    char line[MAX_LIMIT];
    fgets(line, MAX_LIMIT, stdin);
    line[strlen(line)] = ' ';
    for(int i = 0; i < strlen(line)-2; i++){
        fputc(line[i], newfileptr);
    }

    for(int i = 0; i < filesize - peeklocation; i++){
        fputc(content[i],newfileptr);
    }
    fclose(newfileptr);

}

// delete mode : del
void deletefile(char* filename){
    /*
    Deletes the file with the filename/ filepath
    */
    if(remove(filename) == 0)printf("%s <- Successfully deleted", filename);
    else printf("%s <- either not found or this action requires higher moderation", filename);
}