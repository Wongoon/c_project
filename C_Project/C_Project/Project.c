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
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%lf", &num1);
	result = num1;
	printf("\n��ȣ�� �Է��ϼ���\n");
	printf("+ : ���ϱ�\n- : ����\n* : ���ϱ�\n/ : ������\n^ : ����\n");
	while (1) {
		scanf("%*c%c", &symbol);
		printf("���ڸ� �Է��ϼ���\n");
		scanf("%lf", &num2);
		if (symbol == '/' && num2 == 0) {
			printf("0���� ���� �� �����ϴ�");
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
		printf("��ȣ�� �Է��ϼ���\n");
	}
}

void Notice() {
	printf("���ڿ� ��ȣ�� �Է��� �� �ݵ�� ���͸� �ľ� �մϴ�.\n");
	printf("������ ��ȣ ���� �� ���� ���ڰ� 0�̸� ������ ���ϴ�.\n\n");
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
