#include<stdio.h>

int num,i,j,k;

main(){

int choose;
void choose1(),choose2(),choose3(),choose4();


for(;;)
{
	char a;
	clrscr();

	printf("\n");
	printf("         1          2           3            4        \n");

	printf("      *          * * * *     * * * *            *     \n");
	printf("      * *        * * *         * * *          * *     \n");
	printf("      * * *      * *             * *        * * *     \n");
	printf("      * * * *    *                 *      * * * *     \n");

	printf("\nChoose a number: ");
	scanf("%d",&choose);

	if(choose==0)
	{break;}
	
	switch(choose)
	{
		case 1: choose1();
			break;
		case 2: choose2();
			break;
		case 3: choose3();
			break;
		case 4: choose4();
			break;
		default: printf("Not in the choices!");
			break;
	}

	getch();
}
}

void choose1()
{
    printf("\n\nYou chose 1\nEnter a Number: ");
    scanf("%d",&num);
    printf("Output: \n\n");

    for(i=0;i<num;i++)
    {
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
    }
}

void choose2()
{
    printf("\n\nYou chose 2\nEnter a Number: ");
    scanf("%d",&num);
    printf("Output: \n\n");

    for(i=0;i<num;i++)
    {
		for(j=i;j<num;j++)
		{
			printf("* ");
		}
		printf("\n");
    }
}

void choose3()
{
	printf("\n\nYou chose 3\nEnter a Number: ");
    scanf("%d",&num);
    printf("Output: \n\n");

	for(i=0;i<num;i++)
	{
		for(k=0;k<i;k++)
		{
			printf("  ");
		}
		for(j=i;j<num;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void choose4()
{
	printf("\n\nYou chose 4\nEnter a Number: ");
    scanf("%d",&num);
    printf("Output: \n\n");

	for(i=0;i<num;i++)
	{
		for(k=i+1;k<num;k++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
} 