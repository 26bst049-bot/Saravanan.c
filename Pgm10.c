#include <stdio.h>

/* No Argument, No Return */
void NANR()
{
    printf("Hello from NANR\n");
}

/* Argument, No Return */
void ANR(int a)
{
    printf("Number = %d\n", a);
}

/* No Argument, With Return */
int NAWR()
{
    return 100;
}

/* Argument, With Return */
int AWR(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    NANR();

    ANR(10);

    result = NAWR();
    printf("NAWR Return = %d\n", result);

    result = AWR(20, 30);
    printf("AWR Sum = %d\n", result);

    return 0;
}
