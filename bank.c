#include<stdio.h>
#include<stdlib.h>
int pin,choice,amount=1000,withdraw,deposit,opin,npin;
char transaction;
int temp;
int main()
{
	int tpin=1234;
	while(pin!=tpin)
	{
		printf("Enter pin\n");
		scanf("%d",&pin);
		if(pin!=1234)
		{
			printf("Invalid pin\n");
		}
	}
	do
	{
		system("cls");
		printf("***Welcome to SBI Bank***\n");
		printf("1.Balance enquiry\n");
		printf("2.Withdrawal\n");
		printf("3.Deposit\n");
		printf("4.Exit\n");
		printf("5.Change pin\n");
		scanf("%d",&choice);
		switch(choice)
		{
		  case 1:
		  	system("cls");
		   printf("Your account balance is: %d \n",amount);
		   break;
		  case 2:
		  	system("cls");
		  	printf("Enter the amount to withdraw\n");
		  	scanf("%d",&withdraw);
		  	if(withdraw>(amount-500))
		  	  printf("Insufficient balance\n");
		  	else
		  	  {
		  	  	amount=amount-withdraw;
		  	  	printf("Collect your cash...\n");
		  	  	printf("Remaining balance is %d\n",amount);
			  }
			  break;
			case 3:
				system("cls");
				printf("Enter amount to deposit\n");
				scanf("%d",&deposit);
				amount=amount+deposit;
		        printf("Your account balance is %d\n",amount);
		        break;
		    case 4:
		    	system("cls");
		    	printf("Thanks for visiting\n");
		    	printf("Visit Again\n");
		        return 0;
		    case 5:
		    		printf("enter your old pin\n");
		    		scanf("%d",&opin);
		    		if(opin==tpin)
		    		{
		    			printf("enter ur new pin\n");
		    			scanf("%d",&npin);
		    			tpin=npin;
					}
					else
					{
						printf("wrong pin\nenter right pin");
					}
				break;
		    default:
		    	system("cls");
		    	printf("Invalid choice\n");
		    	
	}
	printf("Do you wish to make another transaction\n");
	printf("Y/N\n");
	fflush(stdin);
	scanf("%c",&transaction);
	if(transaction=='N')
	{
	 temp=1;	
	} }while(!temp);
    system("cls");
    
	printf("Thanks for visiting\n");
	printf("Visit Again\n");
	return 0;
}






