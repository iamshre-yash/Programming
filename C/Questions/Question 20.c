#include <stdio.h>

int main(){
  int a ;
  int *ptr; //creating a integer pointer "*ptr"
  printf("Enter Value for a:");
  scanf("%d",&a);
  ptr = &a; //passing the Address of a to integer variable ''ptr'
  
  printf("Value of integer a :%d\n",a); //int a print value of a
  printf("Value of integer ptr  :%d\n",ptr); //int ptr print address of a
  printf("Value of Pointer *ptr :%d\n",*ptr); //int *ptr print value of 'a' pointing to *ptr
  return 0;
}
