#ifndef CVIM_H
#define CVIM_H

void help();
void createfile(char* filename);
void readfile(char* filename);
void writefile(char* filename);
void delcharsfromfile(char* filename, long int pos, long int ncharsdelete);
void insert(char* filename, long int peeklocation);
void deletefile(char* filename);

#endif