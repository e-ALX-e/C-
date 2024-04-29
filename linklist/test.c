// #include <stdio.h>

// typedef struct linklist
// {
//     int data;
//     struct linklist *next;

// }link,*linklist;

// //前插法创建链表
// void makelist(linklist L,int n)
// {
//     int op=0;
//     linklist r = (link*)malloc(sizeof(link));//申请空间
//     L = (link*)malloc(sizeof(link));
//     r=L;
//     r->next=NULL;
//     for(int i=0;i<n;i++)
//     {
//         linklist p = (link*)malloc(sizeof(link));
//         scanf("%d",&op);
//         p->data=op;
//         p->next=r->next;
//         r->next=p;
//     }
// }

// int main()
// {
//     linklist LC;
//     makelist(LC,5);
//     printf("%d",LC->next->data);
//     return 0;
// }



#include <stdio.h>

typedef struct linklist
{
    int data;
    struct linklist *next;

} link, *linklist;

//前插法创建链表
void makelist(linklist L, int n)
{
    int op = 0;
    linklist r = (link *)malloc(sizeof(link)); //申请空间
    L = (link *)malloc(sizeof(link));
    r = L;
    r->next = NULL;
    for (int i = 0; i < n; i++)
    {
        linklist p = (link *)malloc(sizeof(link));
        scanf("%d", &op);
        p->data = op;
        p->next = r->next;
        r->next = p;
    }
}

int main()
{
    linklist LC = (link *)malloc(sizeof(link)); //修正内存分配
    LC->next = NULL; //修正初始化
    makelist(LC, 5);
    printf("%d", LC->next->data);
    return 0;
}