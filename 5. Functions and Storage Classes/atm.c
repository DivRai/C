#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void aval_bal(int b)
{
  printf("Available balance: %d",b);
}
int wd_cash(int b)
{
  int wd;
  printf("Enter the amount you want to withdraw: ");
  scanf("%d",&wd);
  if(b>wd)
  {
    b-=wd;
    printf("\nAmount of %d withdrawn successfully!!",wd);
    printf("\nNew balance: %d\n",b);
  }    
  else
    printf("Insufficient balance\n");
  return b;
}
int dp_cash(int b)
{
  int dp;
  printf("Enter the amount you want to deposit: ");
  scanf("%d",&dp);
  printf("\nAmount of %d deposited successfully!!",dp);
  b+=dp;
  printf("\nNew balance: %d\n",b);
  return b;
}
void check_pin(int pin, int ch)
{
  l:printf("Enter pin: ");
  scanf("%d",&pin);
  
  if(pin==1546)
  {
    printf("Welcome to ATM");
  }
  else
  {
    if(ch>0)
    { 
      ch--;
      printf("Incorrect pin!!\n");
      goto l;
    }
    else
    {
      printf("Card blocked!!\n");
      exit(0);
    }
  }
}
void main()
{
  int pin,ch=2;
  srand(time(0));
  int bal=rand()%10000+1000;
  
  check_pin(pin,ch);

  int c,choice=1;

  while(1)
  {
    m:printf("\n\nEnter choice:\n1. Check Balance \n2. Withdraw Cash \n3. Deposit Cash \n4.Quit\n");
    scanf("%d",&c);
 
    if(c==1)
    {
      aval_bal(bal);
    }
    else if(c==2)
    {
      bal=wd_cash(bal);
    }
    else if(c==3)
    {
      bal=dp_cash(bal);
    }
    else if(c==4)
    {
      exit(0);
    }
    else
    {
      printf("Invalid choice");
    }
  }
}
  
