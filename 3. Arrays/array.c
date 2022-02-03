#include<stdio.h>
void main()
{
  int id,newMarks;
  int marks[5]={21,45,36,78,39};
  printf("Enter id of student: ");
  scanf("%d",&id);
  printf("Current marks: %d",marks[id]);
  printf("\nEnter updated marks: ");
  scanf("%d",&newMarks);
  marks[id]=newMarks;
  printf("Updated marks is %d: \n",marks[id]);
}
