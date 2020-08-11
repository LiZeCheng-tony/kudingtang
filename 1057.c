#include <stdio.h>
int main(void)
{
    int x; //总人数
    float a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &x);
    getchar;
    for (int i = 0; i <= x - 1; i++)
    {
        int e;
        scanf("%d", &e);
        if (e >= 90)
        {
            a + 1;
        }
        else if (e >= 75)
        {
            b + 1;
        }
        else if (e >= 60)
        {
            c + 1;
        }
        else
        {
            d + 1;
        }
    }
    printf("%d%d%d%d", a, b, c, d);
    printf("%.2f%\n", x / a * 100);
    printf("%.2f%\n", x / b * 100);
    printf("%.2f", x / c);
    printf("%.2f", x / d);
}