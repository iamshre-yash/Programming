#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void insert(struct Node *t,int key,int index){
    struct Node *temp;
    int i;
    temp=(struct Node *)malloc(sizeof(struct Node));
    if(temp==NULL){
        printf("memory full");
        return;
    }
    temp->data=key;
    if(index==0){
        temp->next=t;
        first=temp;
    }else{
        for (int i=0;i<index-1;i++) {
            if(t->next==NULL){
                printf("out of range.");
                return;
            }
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;
    }
    
}

void Delete(struct Node *t,int index){
        struct Node *p = NULL;
        p=first;
        if(index==0){
            first=p->next;
            free(p);
        }else{
            for(int i=0;i<index-1;i++){
                if(p->next==NUll){
                    printf("out of range");
                    return;
                }
                t=p;
                p=p->next;
            } 
            t->next=p->next;
            printf("\nRemoved Value: %d\n",p->data);
            free(p);
        }
       
        
}

void Display(struct Node *p){
    if(p!=NULL){
         printf("%d",p->data);
        Display(p->next);
    }
}


int main()
{
    insert(first,1,0);
    insert(first,2,0);
    insert(first,3,0);
    
    Display(first);
    printf("\n");
    Delete(first,2);
    Display(first);
    printf("\n");
    return 0;
}
