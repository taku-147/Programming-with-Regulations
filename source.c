
#include <stdio.h>
void math(unsigned int a, unsigned int b) {
    fprintf(stdout, "����(a)�����:");
    scanf("%d", &a);
    fprintf(stdout, "����(b)�����:");
    scanf("%d", &b);
    getchar();
    fprintf(stdout, "�l�����Z�L��(+|-|*|/)�����:");
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
        fprintf(stdout, "+|-|*|/����I�����Ă��������B\n");
    }
}
int main(void)
{
    math(NULL,NULL);
    return 0;
}