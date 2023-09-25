
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	double a,b;
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"exit  x: ");
		scanf(" %c", &ch);
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf", &a, &b);
		switch (ch) {
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

		default:
			printf(
				"Error\n");
		}

		printf("\n");
	}
}
