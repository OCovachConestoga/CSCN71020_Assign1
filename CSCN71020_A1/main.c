#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract(); //defining the function here


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1: 
		add();
		break; //adding break statement

	case 2:  //adding the call to the function here
		subtract();
		break; //adding break statement
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}//adding break statement

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() { //using the same code as the add function
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 - num2; //changing the + sign to a - sign for function to work properly
	printf("%lf - %lf = %lf\n", num1, num2, result); // changing the + sign to a - sign to display properly
}