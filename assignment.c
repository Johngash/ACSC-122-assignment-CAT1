#include <stdio.h>


typedef struct{
char name[10];
int marks;
char grade;
}Student;//student structure for storing name and marks

int main(){
const int MAX_SIZE = sizeof(Student)*10; //declares constant size which we'll use for the array

int i;

Student students[MAX_SIZE];//declares an array of structures

printf("Enter names and marks of 10 students\n(SEPARATED BY A WHITESPACE eg: 'James 50',Marks between 1-100)\n");


for(i=0;i<10;i++){

printf("Enter student's %d's NAME and MARKS; \n",i+1);
scanf("%s %d",&students[i].name,&students[i].marks);

}
int grading(student_score){
int grading_score = students[i].marks/10;

switch(grading_score){
case 9:
case 8:
  students[i].grade = 'A';
  break;
case 7:
case 6:
  students[i].grade = 'B';
  break;
case 5:
  students[i].grade = 'C';
  break;
case 4:
  students[i].grade = 'D';
  break;
default:
  students[i].grade = 'E';
  break;
}
}

for(i=0;i<10;i++){
  grading(students[i].marks);
}

for(i=0;i<10;i++){
  printf("%d student: name; %s marks; %d grade; %c\n",
         i,students[i].name,students[i].marks,students[i].grade);
}

return 0;
}
