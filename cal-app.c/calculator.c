#include <stdio.h>
/**
 * main - [+. -, *, /]
 *
 * Return: Always return 0
 */

int main()

{
	char operator;
	printf("choose operator ['+', '-', '/', '*',]:");
	scanf("%c", &operator);
	
	double num1;
	printf("enter num1: ");
	scanf("%lf", &num1);

	double num2;
	printf("enter num2: ");
	scanf("%lf", &num2);
	double result;
	
	switch(operator)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		default:
			printf("error");

	}
	printf("\nRESULT:%.2lf" ,result);
	return(0);
}
