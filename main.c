#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	do{
	printf("CHOOSE YOUR ROLE");
	printf("=================");
	printf("[1] Admin.");
	printf("[2] Student.");
	printf("[3] Teacher.");
	printf("[0] Exit the Program.");
	printf("==================");
	printf("Enter The Choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		case 2:
		case 3:
		
	}
	void searchStudentByName(Student students[], int *length) {
    if (*length == 0) {
        printf("Danh sach sinh vien hien dang trong. Khong co gi de tim kiem.\n");
        return;
    }
    char searchName[50];
    clearInputBuffer();

    printf("\t **** Search A Student ****\n");
    printf("Nhap ten sinh vien muon tim kiem: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; 

    
    if (strlen(searchName) == 0) {
        printf("Ten sinh vien khong duoc de trong. Vui long nhap lai.\n");
        return searchStudentByName(students, length);
    }

    printf("\nKet qua tim kiem cho chuoi: \"%s\"\n", searchName);
    int found = 0;
    int i; 
    for (i = 0; i < *length; i++) {
        if (strstr(students[i].name, searchName) == 0) {
//            if (!found) {
//                found = 1;
                printf("\t----------***All Students***----------\n");
                printf("|==========|====================|========================|====================|============|\n");
                printf("|    ID    |        Name        |          Email         |        Phone       |  NO.Course |\n");
                printf("|==========|====================|========================|====================|============|\n");
//            }
			found=1;
            printf("| %-8d | %-18s | %-22s | %-18s | %-10d |\n", 
                   students[i].studentId, 
                   students[i].name, 
                   students[i].email, 
                   students[i].phone, 
                   students[i].courses);
        }
    }

    if (found!=1) {
        printf("|==========|====================|========================|====================|============|\n");
    } else {
        printf("Khong tim thay sinh vien nao voi ten chua chuoi: \"%s\"\n", searchName);
    }
    printf("\t \t---------------------\n");
}

	

		
}while(choice != 0);
	return 0;
}
