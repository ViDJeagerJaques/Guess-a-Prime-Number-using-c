#include <stdio.h>
int main () {
    int pr;
    char op, A, B;
    char ch;
    printf("+++Guess a prime number game!+++\n");
    printf("y = play again, x =  quit.\n");
    printf("Type the option (A = 1-10, B = 11-50):\n");
    
    while (1){
        scanf(" %c", &op);
        
        printf("You chose A option, now guess a prime number between 1-10 :\n");
        scanf(" %d", &pr);
        if (pr == 2 || pr == 3 || pr == 5 || pr == 7){
            printf("%d is correct answer (is a prime number)y/x?\n", pr);
        }
        else {
            printf("%d is uncorrect answer (is not a prime number)y/x?\n", pr);
            scanf(" %c", &ch);
        }
        if (ch == 'y'){
            printf("Guess a prime number between 1-10:\n");
            scanf(" %d", &pr);
            if (pr == 2 || pr == 3 || pr == 5 || pr == 7){
                printf("%d is correct answer (is a prime number)y/x?", pr);
            }
        
            else {
                printf("%d is uncorrect answer (is not a prime number)y/x?", pr);
                scanf(" %c", &ch);
            }
        }
        if (ch == 'x' || ch == 'X'){
            printf("Thank you for playing this game\n");
            break;
        }
        else if (ch == 'x' || ch == 'X'){
            printf("Thank you for playing this game\n");
            break;
        }
        
    return 0;  
}
}



/* not completly on general suck this off*/