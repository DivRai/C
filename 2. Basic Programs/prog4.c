#include<stdio.h>
int main()
{
   int m1,m2,m3,m4;
   float avg;
   char grade;

   printf("Enter marks m1 m2 m3 m4: ");
   scanf("%d %d %d %d",&m1,&m2,&m3,&m4);

   avg=(m1+m2+m3+m4)/4;

   if(avg>90)
     grade = 'A';

   else if(avg>75 && avg<=90)
     grade = 'B';

   else if(avg>60 && avg<=75)
     grade = 'C';

   else if(avg>35 && avg<=60)
     grade = 'D';

   else
     grade = 'F';

   printf("Grade: %c\n", grade);

   if(grade=='A' || grade=='B')
   {
      printf("Congratulations you have scored %c\n",grade);
   }
   else if(grade=='C' || grade=='D')
   {
      printf("Good you have scored %c\n",grade);
   }
   else
   {
      printf("You have scored %c. Better luck next time!!\n",grade);
   }
}
