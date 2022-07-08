#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1 = 20;
    int number2 = 30;
    int number3 = number1 + number2;
    char characterName [] = "Emmanuel";
    printf("Hello %s!, today is your %dth Birthday.\n", characterName, number1);
    printf("%d\n", number3);
    scanf("%s\n", characterName);
    printf(" Your name is %s\n", characterName);
    return 0;
}
