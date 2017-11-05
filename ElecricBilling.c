#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int ch;
	printf("\t\t\t\tELECTRIC BILLING CALCULATOR\n");
	printf("\nPress 1 for Home & Commercial Use:");
	printf("\nPress 2 for Industrial Use:");
	printf("\npress 0 to Exit:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				int prev,pres,ut,sc=0,x;
				p1:
				printf("Enter Previous Meter Reading:");
				scanf("%d",&prev);
				printf("Enter Present Meter Reading:");
				scanf("%d",&pres);
				ut=pres-prev;
				if(ut<=0)
				{
					printf("\nError!Invalid meter Reading.Try Again.\n");
					goto p1;
				}
				else
				{
					if(ut<=100)
				    {
						x=7*ut;
					}
					else if(ut>100 && ut<=300)
					{
						x=8*ut;
					}
					else if(ut>300 && ut<=500)
					{
						x=9*ut;
					}
					else
					{
						x=10*ut;
						sc=1000;
					}
					printf("\nUnit Consumed: %d Units",ut);
					printf("\nSUR CHARGES: Rs.%d",sc);
					printf("\nAmount(Without SUR Charge): Rs.%d",x);
					printf("\nTotal Amount(With SUR Charge): Rs.%d",x+sc);
				}
				break;
			}
		case 2:
			{
				int prev1,pres1,ut1,x1,sc1=0;
				p2:
				printf("Enter Previous Meter Reading:");
				scanf("%d",&prev1);
				printf("Enter Present Meter Reading:");
				scanf("%d",&pres1);
				ut1=pres1-prev1;
				if(ut1<=0)
				{
					printf("\nError!Invalid meter Reading.Try Again.\n");
					goto p2;
				}
				else
				{
				if(ut1<=1000)
				    {
						x1=8*ut1;
					}
					else if(ut1>1000 && ut1<=5000)
					{
						x1=10*ut1;
					}
					else if(ut1>5000 && ut1<=10000)
					{
						x1=12*ut1;
					}
					else
					{
						x1=15*ut1;
						sc1=10000;
					}
					printf("\nUnit Consumed: %d Units",ut1);
					printf("\nSUR CHARGES: Rs.%d",sc1);
					printf("\nAmount(Without SUR Charge): Rs.%d",x1);
					printf("\nTotal Amount(With SUR Charge): Rs.%d",x1+sc1);
				}
				break;
			}
		case 0:
			{
				printf("EXIT");
				exit(0);
			}
		default:
				printf("Wrong Choice");
	}
}
