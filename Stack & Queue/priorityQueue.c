//Code by Nishant0073(Nishant Shingate)

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
        int data;
        int pri;
        Node *next;
};

Node *start = NULL;
Node *end = NULL;

Node *getNode()
{
        int data, pri;
        printf("Enter the data:\n");
        scanf("%d", &data);

        printf("Enter the priority:\n");
        scanf("%d", &pri);

        Node *p = (Node *)malloc(sizeof(Node));
        p->data = data;
        p->pri = pri;
        p->next = NULL;

        return p;
}

void push()
{
        Node *p = getNode();
        if (start == NULL)
        {
                start = p;
                end = p;
        }
        else
        {
                Node *q = start;
                Node *pNode = NULL;
                while (q->pri > p->pri && q->next != NULL)
                {
                        pNode = q;
                        q = q->next;
                }
                if (q->next == NULL)
                {
                        if (q->pri < p->pri)
                        {
                                if (pNode == NULL)
                                {
                                        start = p;
                                        p->next = q;
                                }
                                else
                                {
                                        pNode->next = p;
                                        p->next = q;
                                }
                                end = q;
                        }
                        else
                        {
                                q->next = p;
                        }
                }
                else
                {
                        if (pNode == NULL)
                        {
                                p->next = start;
                                start = p;
                        }
                        else
                        {
                                pNode->next = p;
                                p->next = q;
                        }
                }
        }
}

void pop()
{
        if (start == NULL)
        {
                printf("Queue is empty");
        }
        else
        {
                Node *q = start;
                start = start->next;
                free(q);
                if(start==NULL)
                {
                        end=NULL;
                }
        }
}

void top()
{
        if (start == NULL)
                printf("Queue is empty");
        else
                printf("top: %d\n", start->data);
}

void buttom()
{
        if (end == NULL)
                printf("Queue is empty");
        else
                printf("buttom: %d\n", end->data);
}

void print()
{
        if (start == NULL)
                printf("Queue is empty.\n");
        else
        {
                Node *q = start;
                while (q != NULL)
                {
                        printf("%d %d\n", q->data, q->pri);
                        q = q->next;
                }
        }
}

int main()
{
        while (1)
        {
                bool flag = false;
                int n;
                printf(
                    "Enter the "
                    "options:\n1)Push\n2)Pop\n3)Top\n4)buttom\n5)print\n6)"
                    "break\n");
                scanf("%d", &n);
                switch (n)
                {
                        case 1:
                                push();
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                top();
                                break;
                        case 4:
                                buttom();
                                break;
                        case 5:
                                print();
                                break;
                        case 6:
                                flag = true;
                                break;
                        default:
                                printf("Invalid option\n");
                }
                if (flag) break;
        }
}
