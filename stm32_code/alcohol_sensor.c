#include <stdio.h>

int main()
{
    int alcohol_level;

    printf("Enter alcohol sensor value: ");
    scanf("%d", &alcohol_level);

    if(alcohol_level > 400)
    {
        printf("WARNING: Alcohol detected! Vehicle cannot start.\n");
    }
    else
    {
        printf("Driver is safe. Vehicle can start.\n");
    }

    return 0;
}