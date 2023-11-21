#include <stdio.h>
#include <ctype.h>

//大文字　-> 小文字への変換関数
char toLower(char c) {
	if (isupper(c)) {
		return tolower(c);
	}
	return c;
}

// 小文字 -> 大文字への変換関数
char toUpper(char c) {
	if (islower(c)) {
		return toupper(c);
	}
	return c;
}

int main() {
	char input[100];

	printf("文字列を入力してください:");
	fgets(input, sizeof(input), stdin);

int option;
	printf("処理のオプションを選択してください:\n1.すべての文字を小文字に変換\n2.すべての文字を大文字に変換\nオプション:");
	scanf_s("%d", &option);

	printf("\n変換後の文字列:");
	int i = 0;
	char convertedChar;
	while (input[i] != '\0') {
		switch (option) {
		case 1:
			convertedChar =
				toLower(input[i]);
			break;
		case2:
			convertedChar =
				toUpper(input[i]);
			break;
		  default:
			printf("無効なオプションが選択されました。\n");
			return 0;
		}
		printf("%c", convertedChar);
		i++;
	}

	return 0;
}