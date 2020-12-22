#include<stdio.h>
#include<stdlib.h>

typedef struct node1 Node1;
typedef struct node2 Node2;

struct node1
{
    int stock_code;   
    float price;      
    int amount_invested;
    int Shares_held;
    Node1 *next;
    Node1 *prev;
};


struct node2
{
    int gain_value; 
    int stock_c;
    Node2 *next;
    Node2 *prev;
};

Node1 *start=NULL;
Node2 *stockg=NULL;
Node1 *end=NULL;
Node2 *endg=NULL;

void CreateAtStartGain(int Shares_held,float price,int amount_invested,int stock_c)
{

 int gain;
    
 Node2 *r = (Node2*) malloc(sizeof(Node2));

 gain=(((Shares_held) * (price)) - (amount_invested));
 r->gain_value=gain;
 r->stock_c=stock_c;

  if(stockg==NULL)
  {
    r->next=NULL;
    r->prev=NULL;
    stockg=r;
    endg = stockg;
    
  }
  else
  {

    r->next=stockg;
    stockg->prev=r;
    r->prev=NULL;
    stockg=r;
    
  }
    
    
}

void stockforword()
{
    Node1 *q=NULL;
    if (start == NULL)
    {
        printf("\n [$] !! No Stocks present In LL :-( ");
    }
    else
    {
        q = start;
        
        printf("\nIN\tstock code\tprice\tAmount Invested\tShares Held\n");
        
        for(int i=1;i<100000 && q!=NULL ;i++)
        {
            
          printf("%d\t%d\t\t%2.f\t%d\t\t%d\t\n",i,q->stock_code,q->price,q->amount_invested,q->Shares_held );
            q = q->next;
        }
        
    }
}



void gainforword()
{
    Node2 *k=NULL;
    if (stockg == NULL)
    {
        printf("\n [$] !! No Stocks Gain present In LL :-( ");
    }
    else
    {
        k = stockg;
        printf("\nIN\tstock code\tGain\n");
        for(int i=1;i<10000 && k != NULL ;i++)
        {
            printf("%d\t%d\t\t%d\n",i,k->stock_c,k->gain_value);
            k = k->next;
        }
        
    }
}



void CreateAtStartStock()
{

    FILE *users_file = fopen("file.txt", "r");

    while (!feof(users_file))
    {
    Node1 *p = malloc(sizeof(Node1));
    p->next==NULL;
    p->prev=NULL;
   
    
    // printf("\n[$] Enter Stock Code :");
    fscanf(users_file,"%d", &p->stock_code);
    // printf("\n[$] Enter Stock Price :");
    fscanf(users_file,"%f", &p->price);
    // printf("\n[$] Enter Stock Amount Invested :");
    fscanf(users_file,"%d", &p->amount_invested);
    // printf("\n[$] Enter Stock Shares Held :");
    fscanf(users_file,"%d", &p->Shares_held);

   
    if (start == NULL)
    {
        p->next == NULL;
        p->prev == NULL;
        start = p;
        end=start;

    }
    else 
    {
        p->next = start;
        start->prev = p;
        p->prev = NULL;
        start = p;
    }
     CreateAtStartGain(p->Shares_held,p->price,p->amount_invested,p->stock_code);
    }

}

void gainbackword()
{
    Node2 *k=NULL;
    if (endg== NULL)
    {
        printf("\n [$] !! No Stocks Gain present In LL :-( ");
    }
    else
    {
        k = endg;
        printf("\nIN\tstock code\tGain\n");
        for(int i=1;i<10000 && k != NULL ;i++)
        {
            printf("%d\t%d\t\t%d\n",i,k->stock_c,k->gain_value);
            k = k->prev;
        }
        
    }
}


void stockbackword()
{
     Node1 *q=NULL;
    if (end == NULL)
    {
        printf("\n [$] !! No Stocks present In LL :-( ");
    }
    else
    {
        q = end;
        
        printf("\nIN\tstock code\tprice\tAmount Invested\tShares Held\n");
        
        for(int i=1;i<100000 && q!=NULL ;i++)
        {
            
          printf("%d\t%d\t\t%2.f\t%d\t\t%d\t\n",i,q->stock_code,q->price,q->amount_invested,q->Shares_held );
            q = q->prev;
        }
        
    }

}


int main()
{

    int choice;

    printf("\n --------------------------------------------------------------------------------------------");
    printf("\n|                                                                                            |");
    printf("\n|                                                                                            |");
    printf("\n|                           [  WELCOM TO STOCK DOUBLY LINKED-LIST  ]                         |");
    printf("\n|                                                                                            |");
    printf("\n --------------------------------------------------------------------------------------------");

   

    do
    {
    printf("\n\n\n[1] Display Stock List(Forword)");
    printf("\n\n[2] Display Stock List(Backword)");
    printf("\n\n[3] Display Gain/Profit Stock List (Forword)");
    printf("\n\n[4] Display Gain/Profit Stock List (Backword)");
    printf("\n\n[5] ADD STOCk To Linked List");
    printf("\n\n[6] EXIT FROM PROGRAMME :-) !! ");
        printf("\n\n[$] Choose From Following Menu Driven Programme ---> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            stockforword();
            break;

        case 2:
           stockbackword();
            break;

        case 3:
            gainforword();
            break;

        case 4:
            gainbackword();
            break;

        case 5:
         	CreateAtStartStock();
            break;
        case 6:
            break;

        default:
        printf("Enter valid option.\n");
            break;
        }
    } while (choice != 6);
    

    return 0;
}


/*input file*/

/*
73
20.5
40
2
75
30.5
60 
3
99
43.5
438
98*/
