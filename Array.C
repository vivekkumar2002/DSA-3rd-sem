#include<stdio.h>
#include<conio.h>
int a[20];
int n,val,i,pos;
/*Function Prototype*/
void create();
void display();

void main()
{
	int choice;
	while(choice)
	{
		clrscr();
		printf("\n\n--------MENU-----------\n");
		printf("1.CREATE AN ARRAY OF N INTEGERS\n");
		printf("2.DISPLAY AN ARRAY WITH HEADINGS\n");
		printf("3.EXIT\n");
		printf("-----------------------");
		printf("\nENTER YOUR CHOICE:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create();
				break;
			case 2:
				display();
				break;
			case 3:	exit(0);
				break;
				default:
				printf("\nInvalid choice:\n");
				getch();
				break;
		}
	}
getch();
}
//creating an array
void create()
{
	printf("\nEnter the size of the array elements:\t");
	scanf("%d",&n);
	printf("\nEnter the elements for the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
//displaying an array elements
void display()
{
	int i;
	if(n==0)
	{
	   printf("No elements in array to display\n");
	   getch();
	   return;
	}
	printf("\nThe array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}



