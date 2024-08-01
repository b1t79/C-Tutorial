#include <stdio.h>

int main()
{
    //  countinue = skips rest of code & forces the next iteraation of the loop
    //  break = exits out of the loop
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}