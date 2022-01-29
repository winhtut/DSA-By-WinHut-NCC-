#include <stdio.h>
#include <stdlib.h>
#define RogueValue -9999
#define MaxStack 5
typedef struct {
    int top;
    int ST[MaxStack];
} StackType, *Stack;

int main() {
    Stack initStack();
    int empty(Stack);
    void push(Stack, int);
    int pop(Stack);
    int n;
    Stack S = initStack();
    setbuf(stdout, 0);
    printf("Enter some integers, ending with 0\n");
    scanf("%d", &n);
    while (n != 0) {
        push(S, n);
        setbuf(stdout, 0);
        scanf("%d", &n);
    }
    setbuf(stdout, 0);
    printf("Numbers in reverse order\n");
    while (!empty(S))
        //setbuf(stdout, 0);
        printf(" data are : %d ", pop(S));
    printf("\n");
} //end main
Stack initStack() {
    Stack sp = (Stack) malloc(sizeof(StackType));
    sp -> top = -1;
    return sp;
} //end initStack
int empty(Stack S) {
    return (S -> top == -1);
} //end empty
void push(Stack S, int n) {
    if (S -> top == MaxStack - 1) {
        setbuf(stdout,0);
        printf("\nStack Overflow\n");
        exit(1);
    }
    ++(S -> top);
    S -> ST[S -> top]= n;
} //end push
int pop(Stack S) {
    if (empty(S)) return RogueValue;
    int hold = S -> ST[S -> top];
    --(S -> top);
    return hold;
} //end pop
