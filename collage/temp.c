#include<stdio.h>
#include<stdlib.h>
typedef struct NODE Node;


struct NODE
{
    int data;
    Node *next;
};

Node *start = NULL;
Node *rev=NULL;

void insertAtEnd()
{
    Node *p = (Node*) malloc(sizeof(Node));
    p->next = NULL;
    scanf("%d", &p->data);

    if (!start)
    {
        start = p;
    }
    else
    {
        Node *q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
}

Node* reverse(Node *root)
{
    Node *current = root;
    Node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void solve(int k)
{

   Node *p = reverse(start);
   int n=1;
   int ans=-1;
    while(p!=NULL)
    {
        if(n%k == 0)
        {
            ans=p->data;
            break;
        }
        p=p->next;
        n++;
    }

    printf("The output is : %d\n",n );
   
}


int main()
{
   int n;
   printf("Enter the number of nodes in List:\n");
   scanf("%d",&n);
   printf("Enter the nodes in linkedList:\n");
   while(n--)
   {
    insertAtEnd();
   }
   int k;
   printf("Enter the value of k:\n");
   scanf("%d",&k);
   solve(k);
    return 0;
}
