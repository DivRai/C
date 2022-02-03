// C program for guessing a number between 1 and 100
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void main()
{
  int number,guess;
  int ch=1;
  srand(time(0));
  l:number = rand() % 100 + 1;
  printf("Number is: %d",number);

  do
  {
    printf("\nGuess a number between 1 and 100: ");
    scanf("%d", &guess);
    if (guess > number)
      printf("\nToo high. Try again.");
    else if (number > guess)
      printf("\nToo low. try again.");
    else
    {  
       printf("\nExcellent!You guessed the number!");
       printf("\nWould you like to play again(1 or 0)?\n");
       scanf("%d",&ch);
       if(ch==1)
	 goto l;
       else
         break;
    }
  }while(1);

}

