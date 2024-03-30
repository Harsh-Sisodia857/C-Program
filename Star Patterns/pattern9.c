// 1
// 01
// 101
// 0101
// 10101
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                if ((i + j) % 2 == 0)
                    printf("%d", 1);
                else
                    printf("%d", 0);
            }
        }
        printf("\n");
    }
    return 0;
}
