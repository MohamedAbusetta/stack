#include <stdio.h>
#include <stdlib.h>

typedef struct _Node
{   // elements of linked list
    int data;
    struct _Node* next;
}NODE;

NODE* SP = NULL;

int main ()
{
    push(7);
    push(3);
    push(3);
    print();
    printf("---------\n");
    pop();
    print();
    return 0;
}

void push (int x)
{
    NODE* temp = (NODE*) malloc(sizeof(NODE));

        temp->next = SP;
        temp->data = x;
        SP = temp ;

}

void pop ()
{
    NODE* temp = (NODE*) malloc(sizeof(NODE));
        temp = SP;

        if (temp != NULL)
        {
        SP = temp->next ;
        free(temp);
        }
}

void print()
{
    NODE* temp = (NODE*) malloc(sizeof(NODE));
    temp = SP;
    while (temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }

}
