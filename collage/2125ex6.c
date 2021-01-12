//Course  : Data Structure
//Div     : B (SYCSE)
//Batch   : B2
//Roll No.  : 2125 (19131083)
//Experiment No.: 6

/* Que. : Given two linked lists, the task is to check whether the first list is present in 2nd list or not.*/

#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
typedef struct Node NODE;

struct Node
{
    int data;
    NODE *next;
};
Node* insert(NODE *root)
{
    int data;
    printf("Enter the data:\n");
    scanf("%d", &data);
    NODE *q = (NODE*) malloc(sizeof(NODE));
    q->data = data;
    q->next = NULL;

    if (root == NULL)
    {
        root = q;
        return root;
    }
    else
    {
        NODE *p = root;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
    return root;
}
bool search(NODE *FirstL, NODE *SecondL )
{
    if (FirstL == NULL || SecondL == NULL)
    {
        return 0;
    }
    else
    {
        bool flag = false;
        while (SecondL)
        {
            if (SecondL->data == FirstL->data)
            {
                flag = true;
                NODE *q = SecondL;
                while (FirstL)
                {
                    if (!q)
                        return 0;
                    else if (q->data != FirstL->data)
                    {
                        flag = false;
                        break;
                    }
                    q = q->next;
                    FirstL = FirstL->next;
                }
                if (flag)
                {
                    return 1;
                }
            }
            SecondL = SecondL->next;
        }
    }
    return 0;

}
void transeverse(NODE *root)
{
    if (root == NULL)
    {
        printf("The Linked List is empty.\n");
    }
    else
    {
        while (root != NULL)
        {
            printf("%d\n", root->data );
            root = root->next;
        }
    }
}


int main()
{
    NODE *FirstList = (NODE*) malloc(sizeof(NODE));
    NODE *SecondList = (NODE*) malloc(sizeof(NODE));
    FirstList = NULL;
    SecondList = NULL;
    while (1)
    {
        bool flag = false;
        int n;
        printf("Enter option:\n1)insert Element in First List\n2)Insert Element in Second List\n3)Search second List in First List.\n4)Traverse First list\n5)Traverse Second List\n6)Exit\n::");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            FirstList = insert(FirstList);
            break;
        case 2:
            SecondList = insert(SecondList);
            break;
        case 3:
            if (search(FirstList, SecondList))
            {
                printf("FIRST LIST IS PRESENT IN SECOND  LIST\n");
            }
            else
            {
                printf("FIRST LIST IS \"NOT\" PRESENT IN SECOND  LIST\n");
            }

            break;
        case 4:
            transeverse(FirstList);
            break;
        case 5:
            transeverse(SecondList);
            break;
        case 6:
            flag = true;
            break;
        default:
            printf("Enter valid option.\n");
        }
        if (flag)
            break;
    }
}
