#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char str[100];
    int aaa = 0, bbb = 0, ccc = 0;
    printf("���������͂��Ă�������:");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);

    //���s����������
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    if (8 <= length && 16 >= length) {
        for (int i = 0; i < length; i++) {
            if ('a' <= str[i] && 'z' >= str[i])aaa++;
            if ('A' <= str[i] && 'Z' >= str[i])bbb++;
            if (!isalpha((unsigned char)str[i]))ccc++;
            }
    }
    else {
        printf("8�����ȏ�16�����ȉ��ɂ��Ă�������\n");
        return 1;
    }

    if (aaa >= 1 && bbb >= 1 && ccc >= 1)
    printf("�p�X���[�h��ݒ肵�܂���\n");
    else {
        if (aaa == 0)printf("���������܂�ł�������\n");
        if (bbb == 0)printf("�啶�����܂�ł�������\n");
        if (ccc == 0)printf("���̑��̕������܂�ł�������\n");
    }
    return 0;
}