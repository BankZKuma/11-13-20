#include<stdio.h>
#include<stdlib.h>
const char* True();
const char* False();
bool evenodd(int);
int main() {
	const char *Even = True();
	const char* Odd = False();
	int matrixA[10][10], matrixB[10][10];
	int sum[10][10] = { 0 };
	int row, col;
	printf("Enter row :");
	scanf_s("%d", &row);
	printf("Enter col :");
	scanf_s("%d", &col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf_s("%d", &matrixA[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf_s("%d", &matrixB[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum[i][j] += matrixA[i][j] + matrixB[i][j];
		}
	}
	system("cls");
	int findsum=0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			findsum += sum[i][j];
		}
	}
	if (evenodd(findsum) == true|| evenodd(findsum) == 1) {
		printf("This is--->%s Matrix", Even);
	}
	else {
		printf("This is--->%s Matrix", Odd);
	}
}
const char* True() {
	return "Even";
}
const char* False() {
	return "False";
}
bool evenodd(int n) {//true=even odd=false
	if (n % 2 == 0)
		return true;
	return false;
}