#include <stdio.h>
#include <stdlib.h>

int stack[100];
int num;

void push(int);
int pop(void);


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
        pop();
        break;
    case 3:
        for (count = 1; count<num+1; count++)
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
    stack[++num] = element;
}

int pop(void)
{
    if (num>0){
        printf("ELEMENT DELETED: NUM(%d), ELEMENT:(%d)\n\n", num, stack[num]);
        return stack[--num];
    }
    else{
        printf("Error, stack is empty\n");
        return stack[num];
    }
}




