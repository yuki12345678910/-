#include<stdio.h>

int isUpperCase(char c) {
	//�啶�����ǂ������肷��֐�
	if (c >= 'A' && c <= 'Z') {
		return 1;//�啶���̏ꍇ�A1��Ԃ�
	}
	else {
		return 0;//�啶���łȂ��ꍇ�A0��Ԃ�
	}
}

int main() {
	char str[100];
	int i, flag;

	printf("���������͂��Ă�������:");
	fgets(str, sizeof(str), stdin);//����������

	flag = 0;//�啶�����܂܂�Ă��邩�ǂ����̃t���O

	for (i = 0; str[i] != '\0'; i++) {
		if (isUpperCase(str[i])) {
			flag = 1;//�啶�����܂܂�Ă���ꍇ�A�t���O�𗧂Ă�
			break;
		}
	}

	if (flag) {
		printf("�啶�����܂܂�Ă��܂��B\n");
	}
	else {
		printf("�啶�����܂܂�Ă��܂���B\n");
	}

	return 0;
}