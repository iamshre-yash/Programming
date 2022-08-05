#include <stdio.h>
#include <stdlib.h>

struct Node {
    int size;
    int top;
    int *S;
};

void Create(struct Node *st){
    printf("Enter the size:");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int));
}

void Display(struct Node st){
    int i;
    for(i=st.top;i>=0;i--){
        printf("%d ",st.S[i]);
    }
}

void push(struct Node *st,int key){
    if(st->top==st->size-1){
        printf("Stack overflow");
    }else{
        st->top++;
        st->S[st->top]=key;
    }
}

int pop(struct Node *st){
    int x=-1;
    if(st->top==-1){
        printf("Stack Underflow");
    }else{
        x=st->S[st->top--];
    }
    return x;
}

int peek(struct Node st,int index){
    int x=-1;
    if(st.top-index+1<0){
       printf("Index Out of range");
    }
    x=st.S[st.top-index+1];
    return x;
}
int isEmpty(struct Node st){
    return (st.top==-1?1:0);
}


struct node{
    int data;
    struct node *next;
}*top=NULL;

void LLpush(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Stack if FULL");
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void LLpop(){
    int x=-1;
    struct node *t;
    if(top==NULL){
        printf("Stack is Empty");
    }else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
        printf("\n%d\n",x);
    }
}

void LLDisplay(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
}


int main()
{
    // struct Node st;
    // Create(&st);
    // push(&st,5);
    // push(&st,6);push(&st,7);push(&st,8);push(&st,9);
    // pop(&st);
    // Display(st);
    LLpush(10);
    LLpush(9);
    LLpush(8);
    LLpush(7);
    LLpop();
    LLDisplay();
    

    return 0;
}
