/* C Program to Create Simple Calculator using Switch Case */

#include <stdio.h>
#include "CalcHistory.c"

void PrintCalculation(struct Calculation calc)
{
	printf(" %lf %c %lf = %lf", calc.number1, calc.op, calc.number2, calc.result);
}


int main()
{
	char Operator='\0';
	float num1, num2, result = 0;
	struct Calculation History[10];
	int currentIndex = 0;

	while (1)
	{

		

		printf("\n Please Enter an Operator (+, -, *, /) , Q to quit, H for History: ");
		scanf("%c", &Operator);

		if (Operator == 'Q' || Operator == 'q')//exit before prompt
			break;
		else if (!Operator == 'H' || Operator == 'h')//show history
		{
			int i = 0;
			printf("\n---History:---\n");
			for (i = 0; i < (currentIndex>9 ? 9 : currentIndex); i++)
			{
				printf("%d: ", i);
				PrintCalculation(History[i]);
				printf("\n");
			}
		}
		else
		{
			printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
			scanf("%f%f", &num1, &num2);

			History[currentIndex % 10].number1 = num1;
			History[currentIndex % 10].number2 = num2;

			switch (Operator)
			{
			case '+':
				result = num1 + num2;

				History[currentIndex % 10].op = '+';
				History[currentIndex % 10].result = result;
				currentIndex++;
				break;
			case '-':
				result = num1 - num2;

				History[currentIndex % 10].op = '-';
				History[currentIndex % 10].result = result;
				currentIndex++;
				break;
			case '*':
				result = num1 * num2;

				History[currentIndex % 10].op = '*';
				History[currentIndex % 10].result = result;
				currentIndex++;
				break;
			case '/':
				result = num1 / num2;

				History[currentIndex % 10].op = '/';
				History[currentIndex % 10].result = result;
				currentIndex++;
				break;
			default:
				printf("\n You have enetered an Invalid Operator ");
			}

			printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF) {}//clear scanf
	}

	return 0;
}