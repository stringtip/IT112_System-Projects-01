#include<stdio.h>
#include<conio.h>
#define p
#define c
  struct Student {
   char name [50];
   int rollNumber;
   char className[20];
   float fees;
 };
  void addStudent(){
   struct Student
   newStudent;
   FILE*file= fopen("student.txt","a");

    printf("Enter student name:");
    scanf("%s", newStudent.name);
    printf("Enter roll number:");
    scanf("%d", &newStudent.rollNumber);
    printf("Enter class name:");
    scanf("%s", newStudent.className);
    printf("Enter fees:");
    scanf("%f", &newStudent.fees);
    fprintf(file,"%s %d %s %.2f\n",newStudent.name, newStudent.rollNumber,newStudent.className,newStudent.fees);

     fclose(file);
  }
    void generateBill(int rollNumber){
    struct Student student;
    FILE*file= fopen("students.txt","r");

      while (fscanf(file," %s %d %s %f ",student.name,&student.rollNumber,student.className,&student.fees)!=EOF){
	 if(student.rollNumber==rollNumber){



	  printf("Bill for student:%s\n",student.name);
	  printf("Roll Number :%d\n",student.rollNumber);
	  printf("Class:%s\n", student.className);
	  printf("Fees:%.2f\n", student.fees);

	   break;
	}
     }

      fclose(file);
 }

      float calculateTotalFees(){
      struct Student student;
      FILE*file= fopen("student.txt","r");
      float totalFees =0.0;

      while (fscanf(file, "%s %d %s %f", student.name,&student.rollNumber,student.className,&student.fees)!=EOF){
	  totalFees+= student.fees;

	}
	  fclose(file);

	  return totalFees;

     }
      int main(){
	int choice,rollNumber;
	float totalFees;

      do{
	 printf("Billing System Menu:\n");
	 printf("1.Add new student\n");
	 printf("2.Generate bill for a student\n");
	 printf("3.Calculate total fees\n");
	 printf("4.Exit\n");
	 printf("Enter your choice:");
	 scanf("%d",&choice);

     switch(choice){
       case 1:
	    addStudent();
	    break;
	case 2:
	    printf("Enter roll number of the student:");
	    scanf("%d", &rollNumber);

     generateBill(rollNumber);
	    break;
	  case 3:
	       totalFees=calculateTotalFees();
	       printf("Total fees:%.2f\n",totalFees);
	    break;
	  case 4:
	       printf("Exiting...\n");
	       break;
	     default:
	       printf("Invalid choice!Please try again.\n");
	    }
	 }while(choice!=4);

	 return 0;
 }

