#include <stdio.h>
void writefile();
void readfile();
void readfullfile();

int main()
{
    // writefile ();
    //readfile ();
    readfullfile();

    return 0;
}
//fgetc fputc
//function description
void readfullfile()
{
    FILE *ptr;
    char c;
    ptr = fopen("sample.txt", "r");
    c = fgetc(ptr);
    while (c != EOF) //EOF Not Working in my compiler
    {
        printf("%c", c);
        c = fgetc(ptr);
        
    }
    fclose(ptr);
}

void readfile()
{
    FILE *ptr; //create pointer to file
    int num, num2;
    //open file in read format
    ptr = fopen("sample.txt", "r");
    //inside sample.txt >[22 23]
    if (ptr == NULL)
    {
        printf("File Does Not exist\n"); //FILE NOT EXIST
    }
    else
    {                                              //read file
        fscanf(ptr, "%d", &num);                   //inside file first value
        fscanf(ptr, "%d", &num2);                  //inside file second value
        fclose(ptr);                               //close the file
        printf("The Value of Num is %d\n", num);   //22
        printf("The Value of Num2 is %d\n", num2); //23
    }
}

void writefile()
{
    FILE *ptr;
    int num = 20;
    ptr = fopen("sample.txt", "w");
    fprintf(ptr, "Inside File number is %d", num);
    fclose(ptr);
}