#include <stdio.h>
// This Code Generate a New file with input Table in it.
//In LocalHost Local Directory
int main()
{
    FILE *ptr;

    int num;
    printf ("Enter the integer you need the Table  :");
    scanf ("%d",&num);
    ptr = fopen("table.txt"   , "w");
    for(int i=0;i<10;i++){
        fprintf(ptr, "%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose (ptr);
    printf ("Successful Generated table of %d to table.txt file. ",num);
    return  0;
}