#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	printf("숫자를 입력하세요 : ");
	scanf("%lf", &num1);
	result = num1;
	printf("\n+ : 더하기 - : 빼기\n* : 곱하기 / : 나누기\n^ : 제곱 r : 루트\n");
	while (1) {
		printf("기호를 입력하세요 : ");
		scanf("%*c%c", &symbol);
		if (symbol == 'r') {
			result = Sqrt(result);
			printf("\n결과 값 : %.4lf\n\n", result);
			continue;
		}
		printf("숫자를 입력하세요 : ");
		scanf("%lf", &num2);
		if (symbol == '/' && num2 == 0) {
			printf("0으로 나눌 수 없습니다.\n");
			printf("계산기를 종료합니다.");
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
			printf("기호를 잘 못 입력하셨습니다.\n");
		}
		printf("\n결과 값 : %.4lf\n\n", result);
	}
}

void Notice() {
	int num;
	printf("\n=============== 계산기 ===============\n\n");
	printf("사용 방법을 보고 싶으시다면 1, 보고 싶지 않으시다면 0을 입력해주십시오.\n");
	while (1) {
		scanf("%d", &num);
		if (num == 1) {
			printf("\n첫 숫자를 입력한 후 엔터를 눌러주십시오.\n");
			printf("이후 나오는 기호와 숫자는 하나씩 연달아 입력 가능합니다.\n");
			printf("단, 루트를 입력했을 시 뒤 숫자는 무시 됩니다.\n");
			printf("입력 이후 엔터를 반드시 눌러주십시오.\n");
			printf("나눗셈 기호 선택 후 다음 숫자가 0이면 오류가 납니다.\n\n");
			break;
		}
		else if (num == 0) {
			break;
		}
		else {
			printf("숫자를 잘 못 입력하셨습니다.\n");
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
