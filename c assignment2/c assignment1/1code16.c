#include<stdio.h>
main()
{
	int choice,pin,k,amount=1500,deposit,withdraw;
	while(pin!=4120)
	{
		printf("ENTER PIN NUMBER");
		scanf("%d",&pin);
		if(pin!=4120)
		{
			printf("ENTER VALID NUMBER");
		}
	}
		
			printf("WELCOME");
			printf("1.CHECK BALANCE\n");
			printf("2.WITHDRAW\n");
			printf("3.DEPOSIT\n");
			printf("4.QUIT\n");
			printf("ENTER CHOICE");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("\n BALANCE:%d",amount);
					break;
					case 2:
						printf("ENTER AMOUNT TO WITHDRAW");
						scanf("%d",&withdraw);
						if(withdraw%100!=0)
						{
							printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
						}
						else if(withdraw>(amount-500))
						{
							printf("\nINSUFFICIENT BALANCE");
						}
						else
						{
							amount=amount-withdraw;
							printf("\nPLEASE COLLECT CASH");
							printf("\nYOUR CUURENT BALANCE IS %d",amount);
						}
						break;
						case 3:
							printf("\nENTER THE AMOUNT TO DEPOSIT");
							scanf("%d",&deposit);
							amount=amount+deposit;
							printf("YOUR BALANCE IS %d",amount);
							break;
							case 4:
								printf("\nTHANK U USING ATM");
								break;
								default:
									printf("\nINVALID CHOICE");
			}
	printf("\nTHANK U");
	
}
		
	
	


