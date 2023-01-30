#include<stdio.h>

int main(){
  
  int marks [5]; // allocate space in array for 5 integer for store student marks..
  printf("enter the value of marks of student1 : ");
  scanf("%d",&marks[0]); 
  printf("enter the value of marks of student2 : ");
  scanf("%d",&marks[1]);
  printf("enter the value of marks of student3 : ");
  scanf("%d",&marks[2]); 
  printf("enter the value of marks of student4 : ");
  scanf("%d",&marks[3]); 
  printf("enter the value of marks of student5 : ");
  scanf("%d",&marks[4]); 
 
//  printf("marks of students are : %d %d %d %d %d " , marks[0],marks[1],marks[2],marks[3],marks[4]);
 printf("marks of the students are : \n ");

 for(int i = 0  ; i<=4 ; i++){

  printf("%d ",marks[i]);

 }

  return 0;
}