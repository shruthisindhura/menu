#include<stdio.h>
void main()
{
	int choice;
	printf("Here's the menu!!:\n 1.Pizza,Rs239\n 2.Burger,Rs129 \n 3.Pasta,Rs179 \n 4.French Fries,Rs99 \n 5.Sandwich,Rs149 ");
	printf("\n ENTER THE CORRESPONDING NUMBER OF ITEM YOU WANT \n");
	scanf("%d",&choice);
	switch(choice)
	{case 1:
		printf("\n Food item-Pizza \n Price-Rs 239");
		break;
	case 2:
		printf("\n Food item-Burger \n Price-Rs 129");
		break;
	case 3:
		printf("\n Food item-Pasta \n Price-Rs 179");
		break;
	case 4:
		printf("\n Food item-French Fries \n Price-Rs 99");
		break;
	case 5:
		printf("\n Food item-Sandwich \n Price-Rs 149");
		break;
	default:
		printf("invalid choice!!");
		break;
	}
}
