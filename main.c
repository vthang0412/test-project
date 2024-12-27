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
	
	

		
}while(choice != 0);
	return 0;
}
