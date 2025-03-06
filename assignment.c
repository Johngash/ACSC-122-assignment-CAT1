#include <stdio.h>


typedef struct{
char name[10];
int marks;
char grade;

}Student;//student structure for storing name and marks


int main(){
const int MAX_SIZE = 10; //declares constant size which we'll use for the array

int i;

Student students[MAX_SIZE];//declares an array of structures

printf("Enter names and marks of 10 students\n(SEPARATED BY A WHITESPACE eg: 'James 50',Marks between 1-100)\n");


for(i=0;i<10;i++){

printf("Enter student's %d's NAME and MARKS; \n",i+1);
scanf("%s %d",&students[i].name,&students[i].marks);

while(students[i].marks <= 0 || students[i].marks >= 101){
  printf("Enter correct MARKS for student %d;\n",i+1);
  scanf("%d",&students[i].marks);

}


}
int grading(grading_score){

  //if statements that grades students according to marks
if(grading_score >= 80 && grading_score <= 100){
  students[i].grade = 'A';
}
else if(grading_score >= 60 && grading_score < 80){
  students[i].grade = 'B';
}
else if(grading_score >= 40 && grading_score < 60){
  students[i].grade = 'C';
}
else if(grading_score >= 30 && grading_score< 40){
  students[i].grade = 'D';
}
else{
  students[i].grade = 'E';
}
}
for(i=0;i<10;i++){
  grading(students[i].marks);
 }

for(i=0;i<10;i++){ //Lists out the students names
  printf("%d student: name; %s marks; %d grade; %c\n",
         i+1,students[i].name,students[i].marks,students[i].grade);
}

return 0;
}
