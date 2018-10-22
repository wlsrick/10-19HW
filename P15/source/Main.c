#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1, number2, number3,Maximum;
	printf("Enter three integers:");
	scanf_s("%d%d%d", &number1, &number2, &number3);
	Maximum = number1;
	if (number2 > number1) {
		Maximum = number2;
	}
	if (number3 > number1) {
		Maximum = number3;
	}
	printf("Maximum is:%d\n", Maximum);
	system("pause");
	return 0;
}