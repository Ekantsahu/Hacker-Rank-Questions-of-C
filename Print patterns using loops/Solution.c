#include <stdio.h>

int main()
{
    int n=7;
    
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            int min_dist;

            if (i < j)
            {
                if (i < size - 1 - j)
                {
                    min_dist = i;
                }
                else
                {
                    min_dist = size - 1 - j;
                }
            }
            else
            {
                if (j < size - 1 - i)
                {
                    min_dist = j;
                }
                else
                {
                    min_dist = size - 1 - i;
                }
            }

            int value = n - min_dist;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
/*
 can anyone do it with less number of lines in code and can use arrays too
*/