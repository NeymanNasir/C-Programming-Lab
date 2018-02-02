#include<stdio.h>

double check_class_time(int n)
{
    if(n % 2 == 0) return 10.30;
    else return 9.00;
}
int main()
{
    int n;
    double x;
    printf("Enter Your Roll no(such as 30 or 31): ");
    scanf("%d", &n);

    x = check_class_time(n);

    printf("\nYour C Lab Class will Start at %.2lfAM.\n", x);

    return 0;
}
