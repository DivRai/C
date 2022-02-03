#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
void main()
{ 
  int a,b,result,i=10,chance=5; 
  printf("Game Started!!\n"); 
  while(chance>0)
  { 
    srand(time(0)); 
    a=rand()%i; 
    while(a<(i/10))
    { 
      a=rand()%i; 
    } 
    b=rand()%i; 
    while(b<(i/10))
    { 
      b=rand()%i; 
    } 
    
    printf("%d + %d = ",a,b); 
    scanf("%d",&result); 
    if(result!=a+b)
    { 
      printf("Oops wrong answer!!\n");
      chance-=1; 
      printf("You have %d more chances \n",chance); 
      i/=10; 
    }
    else
    {
      printf("Level Up!!\n"); 
    } 
    i*=10;
  } 
  printf("Better luck next time\n"); 
}
