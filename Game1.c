#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int cho;
    int numb,guessnumb; 
    do{
        
        printf("-----MENU-----\n");
        printf("1. Let's Play\n");
        printf("2. Exit\n");
        printf("Enter Your Choice Here :");
        scanf("%d",&cho);
         int countguess=1;
        switch(cho){
            case 1:
            
            printf("\n");
            srand(time(0));
            numb=rand()%100;
            do{
                printf("----Guess the Number Between 0 to 100----\n");
                scanf("%d",&guessnumb);
                if (guessnumb<numb){
                    printf("Your Guessed Number is Smaller\n");
                    printf("Enter Higher Number Plzz\n");
                }
                 else if (guessnumb>numb){
                    printf("Your Guessed Number is Greater\n");
                    printf("Enter Lower Number Plzz\n");
                }
                else{
                    printf("Congo!!!That's Right\n");
                    printf("You Guessed the Correct Number in %d attempts\n",countguess);
                }
                countguess++;
            }while(guessnumb!=numb);
            break;

            case 2:

            printf("****Thanks For Visiting****\n");
            break;

            default:
            
            printf("Wrong Choice_Plzz Enter Again\n");
            break;
        }
    }while(cho!=2);
    return 0;
}