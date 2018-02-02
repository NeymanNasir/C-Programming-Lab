#include<stdio.h>
///suppose the problem is about weather advice(Quantity of coolness)
int main()
{
    FILE *fp;
    char *filename = "my_file.txt";

    fp = fopen(filename, "w");

    double temp;
    printf("Enter Today's Temperature in celsius: ");
    scanf("%lf", &temp);

    printf("\nfor getting today's weather advice, check the file my_file.txt.\n ");
    if(temp <= 15) fprintf(fp, "It's a Very cool day! keep distance from taking shower!");
    else if(temp <= 25) fprintf(fp, "Today's weather is not so comfortable! U have to wear warm cloth.");
    else fprintf(fp, "Today The sun shines for U. So, Don't delay to taking shower!");

    fclose(fp);
    return 0;
}
