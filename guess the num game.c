#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, nguess = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("%d\n", num);

    do
    {
        printf("Guess the num between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Lower num please!\n");
        }
        else if (guess < num)
        {
            printf("Higher num please!\n");
        }
        else
            printf("You guess in %d attempts\n", nguess);
        nguess++;

    } while (guess != num);

    return 0;
}