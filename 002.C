#include<stdio.h>
#include<conio.h>
int a[20];
int n,val,i,pos;
/*Function Prototype*/
void display();
void insert();
void delet();
void create();

void main()
{
	int choice;
	while(choice)
	{
		clrscr();
		printf("\n\n--------MENU-----------\n");
		printf("1.CREATE A ARRAY ELEMENTS\n");
		printf("2.INSERT AN ELEMENT AT GIVEN VALID POSITION\n");
		printf("3.DELETE AN ELEMENT AT GIVEN VALID POSITION\n");
		printf("4.DISPLAY OF ARRAY ELEMENTS\n");
		printf("5.EXIT\n");
		printf("-----------------------");
		printf("\nENTER YOUR CHOICE:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create();
				break;
			case 2: insert();
				break;
			case 3: delet();
				break;
			case 4: display();
				break;
			case 5: exit(0);
				break;
			default:printf("\nInvalid choice:\n");
				getch();
				break;
		}
	}
getch();
}
//create a array elements
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
//inserting an element into an array
void insert()
{
	printf("\nEnter the position for the new element:\t");
	scanf("%d",&pos);
	printf("\nEnter the element to be inserted :\t");
	scanf("%d",&val);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n=n+1;
}
//deleting an array element
void delet()
{
	printf("\nEnter the position of the element to be deleted:\t");
	scanf("%d",&pos);
	val=a[pos];
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("\nThe deleted element is =%d",val);
	getch();
}





