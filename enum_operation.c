#include<stdio.h>

enum operations {Add = 1, sub, mul, div} operation;

int main()
{
    int a, b, res;
    char oper;
    
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b); 

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &oper); 

    switch(oper)
    {
        case '+':
            res = a + b;
            printf("Result: %d\n", res);
            break;
        
        case '-':
            res = a - b;
            printf("Result: %d\n", res);
            break;
        
        case '*':
            res = a * b;
            printf("Result: %d\n", res);
            break;
        
        case '/':
            if (b != 0) {
                res = a / b;
                printf("Result: %d\n", res);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}

