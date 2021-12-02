#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void Notice();
double Add(double x, double y);
double Sub(double x, double y);
double Multi(double x, double y);
double Div(double x, double y);
double Square(double x, double y);
double Sqrt(double x);

int main() {
	char symbol;
	double num1, num2, result;
	Notice();
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%lf", &num1);
	result = num1;
	printf("\n+ : ���ϱ� - : ����\n* : ���ϱ� / : ������\n^ : ���� r : ��Ʈ\n");
	while (1) {
		printf("��ȣ�� �Է��ϼ��� : ");
		scanf("%*c%c", &symbol);
		if (symbol == 'r') {
			result = Sqrt(result);
			printf("\n��� �� : %.4lf\n\n", result);
			continue;
		}
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%lf", &num2);
		if (symbol == '/' && num2 == 0) {
			printf("0���� ���� �� �����ϴ�.\n");
			printf("���⸦ �����մϴ�.");
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
			result = Div(result, num2);
			break;
		case '^':
			result = Square(result, num2);
			break;
		defalut:
			printf("��ȣ�� �� �� �Է��ϼ̽��ϴ�.\n");
		}
		printf("\n��� �� : %.4lf\n\n", result);
	}
}

void Notice() {
	int num;
	printf("\n=============== ���� ===============\n\n");
	printf("��� ����� ���� �����ôٸ� 1, ���� ���� �����ôٸ� 0�� �Է����ֽʽÿ�.\n");
	while (1) {
		scanf("%d", &num);
		if (num == 1) {
			printf("\nù ���ڸ� �Է��� �� ���͸� �����ֽʽÿ�.\n");
			printf("���� ������ ��ȣ�� ���ڴ� �ϳ��� ���޾� �Է� �����մϴ�.\n");
			printf("��, ��Ʈ�� �Է����� �� �� ���ڴ� ���� �˴ϴ�.\n");
			printf("�Է� ���� ���͸� �ݵ�� �����ֽʽÿ�.\n");
			printf("������ ��ȣ ���� �� ���� ���ڰ� 0�̸� ������ ���ϴ�.\n\n");
			break;
		}
		else if (num == 0) {
			break;
		}
		else {
			printf("���ڸ� �� �� �Է��ϼ̽��ϴ�.\n");
		}
	}
	return;
}
double Add(double x, double y) {
	return x + y;
}
double Sub(double x, double y) {
	return x - y;
}
double Multi(double x, double y) {
	return x * y;
}
double Div(double x, double y) {
	return x / y;
}
double Square(double x, double y) {
	int i;
	double num = 1;
	for (i = 1; i <= y; i++) {
		num = num * x;
	}
	return num;
}
double Sqrt(double num) {
	unsigned int NUM_REPEAT = 16;
	unsigned int k;
	double res;
	double tmp = (double)num;
	for (k = 0, res = tmp; k < NUM_REPEAT; k++) {
		if (res < 1.0)
			break;
		res = (res * res + tmp) / (2.0 * res);
	}
	return res;
}