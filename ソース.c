#include <stdio.h>
#include <ctype.h>

//�啶���@-> �������ւ̕ϊ��֐�
char toLower(char c) {
	if (isupper(c)) {
		return tolower(c);
	}
	return c;
}

// ������ -> �啶���ւ̕ϊ��֐�
char toUpper(char c) {
	if (islower(c)) {
		return toupper(c);
	}
	return c;
}

int main() {
	char input[100];

	printf("���������͂��Ă�������:");
	fgets(input, sizeof(input), stdin);

int option;
	printf("�����̃I�v�V������I�����Ă�������:\n1.���ׂĂ̕������������ɕϊ�\n2.���ׂĂ̕�����啶���ɕϊ�\n�I�v�V����:");
	scanf_s("%d", &option);

	printf("\n�ϊ���̕�����:");
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
			printf("�����ȃI�v�V�������I������܂����B\n");
			return 0;
		}
		printf("%c", convertedChar);
		i++;
	}

	return 0;
}