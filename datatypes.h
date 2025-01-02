#include <stdbool.h>
//kieu du lieu
struct Student{
	int id;
	char name[20];
	
};
void chooseStudent(int *choiceStudent,Student students[], int *length) {
	do{
		system("cls");
		menuStudent();
		scanf("%d",choiceStudent);
		getchar();
		system("cls");
		switch(*choiceStudent){
			case 1:
				system("cls");
                addStudent(students,length);
                saveToFile(students, *length);
                askToGoBack();
                break;
			case 2:	
				system("cls");
				printfStudent(students,length);
				askToGoBack();
				break;
			case 3:
				system("cls");
				searchStudentByName(students, length);
				askToGoBack();
				break;
			case 4: 
				system("cls");
				editStudent(students, length);
				saveToFile(students, *length);
				askToGoBack();
				break;
			case 5: 
				system("cls");
				deleteStudent(students, length);
				saveToFile(students, *length);
				askToGoBack();
				break;
			case 6:
				system("cls");
				sortStudentsByName(students, length);
				askToGoBack();
				break; 
			case 0: 
				break;
			default:
				printf("Lua chon khong hop le. Vui long chon lai.\n");
				break;
		}	
	}while(*choiceStudent!=0);
}
void chooseAdmin(int *choiceStudent,Student students[], int *length,int *choiceAdmin,int *choiceTeacher) {
	do{
		system("cls");
		menuAdmin();
		scanf("%d",choiceAdmin);
		getchar();
		system("cls");
		switch(*choiceAdmin){
			case 1:
			//	chooseStudent(choiceStudent,students,length);
                break;
			case 2:				
				break;
			case 3:
				chooseTeacher(choiceTeacher,teacher,length);		
				break;
			case 4: 			
				break;
			case 5:
				break; 
			case 0:  
				break;
			default:
				printf("Lua chon khong hop le. Vui long chon lai.\n");
				break;
		}	
	}while(*choiceAdmin!=0);
}
//Admin 
void chooseAdmin(int *choiceStudent,Student students[], int *length,int *choiceAdmin,int *choiceTeacher);
//Quan ly sinh vien 
void chooseStudent(int *choiceStudent,Student students[], int *length);

void chooseTeacher(int *choiceTeacher,Teacher teacher[], int *length);
	do{
		displayMenu();
		scanf("%d",&choiceMenu);
		getchar();
		switch(choiceMenu){
			case 1:
				system("cls");
				loginAdmin();
				system("cls");
				chooseAdmin(&choiceStudent,students,&length,&choiceAdmin,&choiceTeacher);
				break;
			case 2: 
				system("cls");
				printfStudent(students,&length);
				askToGoBack();
				system("cls");			
    			break;
    		case 3:
				break; 
    		case 0:
    			system("cls");
    			end();
    			break;
			default:
				printf("Lua chon khong hop le. Vui long chon lai.\n");
				break;
		}
	}while(choiceMenu!=0);
	return 0;
}
