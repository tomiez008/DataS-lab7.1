#include <stdio.h>
#include <stdlib.h>

typedef struct Node {int Info;  
    struct Node *Left;
    struct Node *Right;
    struct Node *Mother;
    }TYPE_NODE;
typedef struct Node *TYPE_NODEPTR;
TYPE_NODEPTR Maket(TYPE_NODEPTR T, int Data);
void DisplayC(TYPE_NODEPTR P);
int main(void) 
{     TYPE_NODEPTR T,P;
       int ch,data;
       while (1){ 
      printf("M e n u\n");
      printf("1.Create Root Node   6.Go to Root Node\n");
      printf("2.Insert Left Node   7.Display Current Node\n");
      printf("3.Insert Right Node  8.Pre-Order Traversal\n");
      printf("4.Go to Left         9.In-Order Traversal\n");
      printf("5.Go to Right        10. Post-Order Traversal\n");

      printf("Please Enter Choice : ");
      scanf("%d",&ch);  

      switch(ch) 
      {
        case 1: printf("Enter Info : ");
                scanf("%d",&data);
                T = Maket(T,data);
                P = T;
              break;
        case 7: DisplayC(P);
        case 0: return 0;
      }   


  }
  
  return 0;
 }



TYPE_NODEPTR Maket(TYPE_NODEPTR T, int Data)
{
    T = (TYPE_NODEPTR) malloc(sizeof(TYPE_NODE));
    T->Info = Data;
    T->Left = NULL;
    T->Right = NULL;
    T->Mother = NULL;
    return T;
}

void DisplayC(TYPE_NODEPTR P)
{
  printf("Node Data = %d\n",P->Info);
  
}






