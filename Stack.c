#include <stdio.h>
#include <stdlib.h>

int stack[100];
int nomer = 0;

void push(int);
int pop(int);


int main()
{
    int action, k, count;

    while(1>0){
    printf("1. Push\n2. Pop\n3. Print\n\n");
    scanf("%d", &action);
    switch(action)
    {
    case 1:
        scanf("%d", &k);
        push(k);
        printf("\n");
        break;
    case 2:
        pop(--nomer);
        break;
    case 3:
        for (count = 0; count<nomer; count++)
        printf("ZNACH: %d\n", stack[count]);
        printf("\n");
        break;

    }
    }

    return 0;
}

void push(int k)
{
    int element = k;
    stack[nomer++] = element;
}

int pop(int nomer)
{
    printf("ELEMENT DELETED: NOMER(%d), CHISLO:(%d)\n\n", nomer, stack[nomer]);
    return stack[--nomer];
}




