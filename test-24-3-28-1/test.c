#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// 前插法创建链表
void makeList(Node **L, int n)
{
    *L = (Node*)malloc(sizeof(Node));
    (*L)->next = NULL;
    Node *r = *L;

    for (int i = 0; i < n; i++)
    {
        Node *p = (Node*)malloc(sizeof(Node));
        scanf("%d", &(p->data));
        p->next = r->next;
        r->next = p;
    }
}

int main()
{
    Node *LC = NULL;
    makeList(&LC, 5);
    if (LC && LC->next && LC->next->next)
    {
        printf("%d",LC->next->data);
    }
    
    return 0;
}