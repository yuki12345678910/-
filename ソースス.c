#include<stdio.h>

int isUpperCase(char c) {
	//大文字かどうか判定する関数
	if (c >= 'A' && c <= 'Z') {
		return 1;//大文字の場合、1を返す
	}
	else {
		return 0;//大文字でない場合、0を返す
	}
}

int main() {
	char str[100];
	int i, flag;

	printf("文字列を入力してください:");
	fgets(str, sizeof(str), stdin);//文字列を入力

	flag = 0;//大文字が含まれているかどうかのフラグ

	for (i = 0; str[i] != '\0'; i++) {
		if (isUpperCase(str[i])) {
			flag = 1;//大文字が含まれている場合、フラグを立てる
			break;
		}
	}

	if (flag) {
		printf("大文字が含まれています。\n");
	}
	else {
		printf("大文字が含まれていません。\n");
	}

	return 0;
}