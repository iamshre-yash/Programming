#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

int Create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    //first=(struct Node *)malloc(sizeof(struct Node));
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        //t=(struct Node *)malloc(sizeof(struct Node));
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << endl;
        Display(p->next);
    }
}

int Count(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return Count(p->next) + 1;
    }
}

int Sum(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return Sum(p->next) + p->data;
    }
}

int Max(struct Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return INT32_MIN;
    }
    x = Max(p->next);
    return x > p->data ? x : p->data;
}

int Search(struct Node *p, int key)
{
    if (p == 0)
    {
        return 0;
    }
    else if (key == p->data)
    {
        return p->data;
    }
    return Search(p->next, key);
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > Count(p))
        return;
    t = new Node;
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;
    if (index < 1 || index > Count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int isSorted(struct Node *p)
{
    int x = -65536;
    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void Reverse1(struct Node *p)
{
    int *A, i = 0;
    struct Node *q = p;
    A = (int *)malloc(sizeof(int) * Count(p));

    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse3(struct Node *q, struct Node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    if (q)
        last->next = q;
}

int isLoop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    int arr[] = {5, 10, 15, 20, 25};
    Create(arr, 5);

    /*struct Node *t1, *t2;
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    //Reverse3(NULL, first);
    (isLoop(first) ? cout << "loop" << endl : cout << "Not a Loop" << endl);*/
    Display(first);
}