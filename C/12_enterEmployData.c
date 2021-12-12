#include <stdio.h>
#include <string.h>
typedef struct employ {
    char name[10];
    int id;
    char gender[1];
}e;
int main()
{
    int a;
    printf("Enter Total Number of Employ : ");
    scanf("%d",&a);
    e emp[a];
    for (int i=0;i<a;i++)
    {
        printf("Enter employ %d id:  ", i+1);
        scanf("%6d", &emp[i].id);
        printf("Enter employ %d Gender (M / F) : ",i+1);
        scanf("%s", emp[i].gender);
        printf("Enter employ %d name: ",i+1);
        scanf("%s",emp[i].name);
        putchar('\n');
    }
       printf ("| • | ID     | Gender | Name \n" );
    for(int i=0; i<a;i++)
    {
        printf ("| %d | %d | %s      | %s \n",i+1,emp[i].id, emp[i].gender, emp[i].name);
    }
 //  strcpy
    return  0;
}