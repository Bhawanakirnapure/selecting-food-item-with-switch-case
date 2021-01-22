#include<stdio.h>
int main()
{
	//display menu item
	printf("The available food items are:\n1.Pizza \n2.Burger \n3.Pasta \n4.French fries \n5.Sandwich");
	//taking choice of user
	int choice=0;
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	//display the choosing item with price
	switch(choice)
	{
		case 1:
				printf("Food item - Pizza\n",&choice);
				printf("Price- Rs.239\n");
			break;
		case 2:
				printf("Food item - Burger\n",&choice);
				printf("Price- Rs.129\n");
			break;
		case 3:
				printf("Food item - Pasta\n",&choice);
				printf("Price- Rs.179\n");
			break;
		case 4:
				printf("Food item - French Fries\n",&choice);
				printf("Price- Rs.99\n");
			break;
		case 5:
				printf("Food item - Sandwich\n",&choice);
				printf("Price- Rs.149\n");
			break;				
		default:
				printf("Invalid Choice\n");	
	}
  return 0;
}
