#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
struct customer  
{ 
    char name[50];
    int id;  
    int pin;
    int bal;  
};  
void main()  
{  
    int n,i;
    printf("Enter number of customers: ");
    scanf("%d",&n);
    struct customer cus[n];
    for(i=0;i<n;i++)
    {  
        cus[i].bal = 10000;
        printf("Enter the name, id and pin of customer %d: ",i+1);  
        scanf("%s%d%d",cus[i].name,&cus[i].id,&cus[i].pin);  
    }
    for(i=0;i<n;i++)
    {    
        puts(cus[i].name);
	printf("\t");
	printf("%d\t",cus[i].id);
	printf("%d\t",cus[i].pin);
	printf("%d\n",cus[i].bal);  
    }

    int ID,p,found,t=3;
	l1:printf("\nEnter customer id: ");
	scanf("%d",&ID);
	printf("\nEnter customer pin: ");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(cus[i].id==ID)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		if(cus[i].pin==p)
		{
			printf("\nHello %s\n",cus[i].name);
			printf("Welcome to ATM\n");
			goto l2;
		}
		else if(t>1)
		{
			t--;
			//printf("t is %d\n",t);
			printf("%d chances left\n",t);
			printf("Invalid id or pin\n");
			goto l1;
		}
		else
		{
			printf("Card blocked!!\n");
			exit(0);
		}
	}
	else if(t>1)
	{
		t--;
		//printf("T is %d\n",t);
		printf("%d chances left\n",t);
		printf("Invalid id or pin\n");
		goto l1;
	}
	else
	{
		printf("Card blocked!!\n");
		exit(0);
	}

    int ch;

    l2:while(1)
    {
        int wd,dp;
	printf("\n*********** MENU ***********\n");
        printf("\n1. Current Balance \n2. Withdraw Cash \n3. Deposit Cash \n4. Quit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Available balance: %d\n",cus[i].bal); 
                    break;
            
            case 2: printf("Enter amount you want to withdraw: ");
                    scanf("%d",&wd); 
                    if(wd<=cus[i].bal)
                    {
                        cus[i].bal-=wd;
                        printf("\nAmount of %d has been withdrawn successfully\n",wd);
                        printf("Available balance: %d\n",cus[i].bal);
                    }
                    else
                        printf("\nInsufficient balance\n");
                    break;
            
            case 3: printf("Enter amount you want to deposit: ");
                    scanf("%d",&dp);
                    cus[i].bal+=dp;
		    printf("\nAmount of %d has been deposited successfully\n",wd);
                    printf("Available balance: %d\n",cus[i].bal);
                    break;
            
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
