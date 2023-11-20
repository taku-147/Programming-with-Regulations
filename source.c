
#include <stdio.h>
void math(unsigned int a, unsigned int b) {
    fprintf(stdout, "数字(a)を入力:");
    scanf("%d", &a);
    fprintf(stdout, "数字(b)を入力:");
    scanf("%d", &b);
    getchar();
    fprintf(stdout, "四則演算記号(+|-|*|/)を入力:");
    switch (getchar()) {
    case '+':
        fprintf(stdout, "%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        fprintf(stdout, "%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        fprintf(stdout, "%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        fprintf(stdout, "%d / %d = %d...%d\n", a, b, a / b, a % b);
        break;
    default:
        fprintf(stdout, "+|-|*|/から選択してください。\n");
    }
}
int main(void)
{
    math(NULL,NULL);
    return 0;
}