#include <stdio.h>
void math(unsigned int a, unsigned int b) {
    fprintf(stdout, "a b? >");
    scanf("%d %d", &a, &b);
    fprintf(stdout, "%d + %d = %d\n", a, b, a + b);
    fprintf(stdout, "%d - %d = %d\n", a, b, a - b);
    fprintf(stdout, "%d * %d = %d\n", a, b, a * b);
    fprintf(stdout, "%d / %d = %d...%d\n", a, b, a / b, a % b);
}
int main(void)
{
    math(NULL,NULL);
    return 0;
}
