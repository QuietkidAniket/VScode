#include <stdio.h>
#include <stdlib.h>

// Define a structure for a record
struct Record {
    int id;
    char* name;
    int age;
};

// Function to add a new record to the database
void addRecord(FILE *file, struct Record *record) {
    fprintf(file, "%d %s %d\n", record->id, record->name, record->age);
}

// Function to display all records in the database
void displayRecords(FILE *file) {
    struct Record record;
    
    rewind(file); // Move the file pointer to the beginning of the file
    
    printf("Records in the database:\n");
    while (fscanf(file, "%d %s %d", &record.id, record.name, &record.age) != EOF) {
        printf("ID: %d, Name: %s, Age: %d\n", record.id, record.name, record.age);
    }
}

// Function to update a record in the database
void updateRecord(FILE *file, int targetId, struct Record *newRecord) {
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        perror("Error opening temporary file");
        exit(EXIT_FAILURE);
    }

    struct Record record;
    int found = 0;

    rewind(file);

    while (fscanf(file, "%d %s %d", &record.id, record.name, &record.age) != EOF) {
        if (record.id == targetId) {
            // Update the record
            fprintf(tempFile, "%d %s %d\n", newRecord->id, newRecord->name, newRecord->age);
            found = 1;
        } else {
            // Copy unchanged records to the temporary file
            fprintf(tempFile, "%d %s %d\n", record.id, record.name, record.age);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("database.txt");
    rename("temp.txt", "database.txt");

    if (!found) {
        printf("Record with ID %d not found\n", targetId);
    } else {
        printf("Record updated successfully\n");
    }
}

// Function to delete a record from the database
void deleteRecord(FILE *file, int targetId) {
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        perror("Error opening temporary file");
        exit(EXIT_FAILURE);
    }

    struct Record record;
    int found = 0;

    rewind(file);

    while (fscanf(file, "%d %s %d", &record.id, record.name, &record.age) != EOF) {
        if (record.id == targetId) {
            // Skip the record to delete it
            found = 1;
        } else {
            // Copy unchanged records to the temporary file
            fprintf(tempFile, "%d %s %d\n", record.id, record.name, record.age);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("database.txt");
    rename("temp.txt", "database.txt");

    if (!found) {
        printf("Record with ID %d not found\n", targetId);
    } else {
        printf("Record deleted successfully\n");
    }
}

int main() {
    FILE *file;
    file = fopen("database.txt", "a+"); // Open or create the database file

    if(file == NULL){
        perror("Error opening database file");
        exit(EXIT_FAILURE);
    }

    int choice;
    struct Record record;

        printf("\n1. Add Record\n2. Display Records\n3. Update Record\n4. Delete Record\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

            switch (choice){
            case 1:
                scanf("%d %s %d", &(record.id), record.name, &(record.age));
                addRecord(file, &record);
                break;
            case 2:
                displayRecords(file);
                break;
            case 3:
                printf("Enter the ID of the record to update: ");
                int updateId;
                scanf("%d", &updateId);
                printf("Enter the new ID, Name, and Age separated by space: ");
                scanf("%d %s %d", &record.id, record.name, &record.age);
                updateRecord(file, updateId, &record);
                break;
            case 4:
                printf("Enter the ID of the record to delete: ");
                int deleteId;
                scanf("%d", &deleteId);
                deleteRecord(file, deleteId);
                break;
            case 0:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid Choice, anyways Exiting program :( \n");
    } 
    fclose(file);
    return 0;
}