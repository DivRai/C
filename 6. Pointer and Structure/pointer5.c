// Program to add elements of an array using pointer
#include<stdio.h>
void main()
{
   int n;
   printf("Enter size of array: ");
   scanf("%d",&n);
   int a[n];
   int i,sum=0;
   int *ptr;

   printf("Enter array elements:\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   ptr = a;

   for(i=0;i<5;i++) 
   {
      sum = sum + *ptr;
      ptr++;
   }

   printf("\nThe sum is: %d\n",sum);
}
