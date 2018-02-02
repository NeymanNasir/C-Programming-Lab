#include<stdio.h>

int main()
{
    FILE *fp;
    char *filename = "my_file.txt"; ///this file must contain your program folder
    char str[100];

    fp = fopen(filename, "r"); ///reading from the file
    fscanf(fp, "%[^\n]", str);

    printf("we get from the file:\n\n");
    printf("%s\n", str);

    fclose(fp);
    return 0;
}
