#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void Notice();
int Add(double x, double y);
int Sub(double x, double y);
int Multi(double x, double y);
int div(double x, double y);
int square(double x, double y);

int main() {
	char symbol;
	double num1, num2, result;
	Notice();
	printf("숫자를 입력하세요\n");
	scanf("%lf", &num1);
	result = num1;
	printf("\n기호를 입력하세요\n");
	printf("+ : 더하기\n- : 빼기\n* : 곱하기\n/ : 나누기\n^ : 제곱\n");
	while (1) {
		scanf("%*c%c", &symbol);
		printf("숫자를 입력하세요\n");
		scanf("%lf", &num2);
		if (symbol == '/' && num2 == 0) {
			printf("0으로 나눌 수 없습니다");
			break;
		}
		switch (symbol) {
			case '+':
				result = Add(result, num2);
				break;
			case '-':
				result = Sub(result, num2);
				break;
			case '*':
				result = Multi(result, num2);
				break;
			case '/':
				result = div(result, num2);
				break;
			case '^':
				result = square(result, num2);
		}
		printf("%lf\n", result);
		printf("기호를 입력하세요\n");
	}
}

void Notice() {
	printf("숫자와 기호를 입력한 뒤 반드시 엔터를 쳐야 합니다.\n");
	printf("나눗셈 기호 선택 후 다음 숫자가 0이면 오류가 납니다.\n\n");
}
int Add(double x, double y) {
	return x + y;
}
int Sub(double x, double y) {
	return x - y;
}
int Multi(double x, double y) {
	return x * y;
}
int div(double x, double y) {
	return x / y;
}
int square(double x, double y) {
	int i;
	double num = 1;
	for (i = 1; i <= y; i++) {
		num = num * x;
	}
	return num;
}
