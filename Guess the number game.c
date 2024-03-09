
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

int main() {

    int player1_score = 0;
    int player2_score = 0;
    int turnhandler = 0;
    int user1_turn;
    int user2_turn;
    int number;

    do 
    {   
        //srand works as a seed which tells the rand() to generate random number.
        srand(time(0));

        //rand() function generates random every time when used with srand
        number  = rand() % 5 + 1;
        if(turnhandler % 2 == 0)
        {
            printf("Your turn user1 , Enter the  number:\n");
            scanf("%d" , &user1_turn);
            printf("%d\n" , number);
        }
        else
        {
            printf("Your turn user2 , Enter the  number");
            scanf("%d" , &user2_turn);
            printf("%d\n" , number);
        }
        
        turnhandler+=1;
    }
    while((user1_turn  != number) || (user2_turn != number));
    
    if(turnhandler % 2 != 0){
      printf("Winner is user1\n");
    }
    else{
        printf("Winner is user\n");
    }
    return 0;
}