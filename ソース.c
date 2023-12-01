#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char str[100];
    int aaa = 0, bbb = 0, ccc = 0;
    printf("文字列を入力してください:");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);

    //改行文字を除去
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
        printf("8文字以上16文字以下にしてください\n");
        return 1;
    }

    if (aaa >= 1 && bbb >= 1 && ccc >= 1)
    printf("パスワードを設定しました\n");
    else {
        if (aaa == 0)printf("小文字を含んでください\n");
        if (bbb == 0)printf("大文字を含んでください\n");
        if (ccc == 0)printf("その他の文字を含んでください\n");
    }
    return 0;
}