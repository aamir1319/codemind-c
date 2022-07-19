/*There are two players P1 and P2 and two piles of coins consisting of M and N coins respectively.
At each turn, a player can choose only one of the piles out of these and discard the other one.
This discarded pile cannot be used further in the game.
The pile player chooses is further divided into two piles of non zero parts.
The player who cannot divide the pile i.e. the number of coins in the pile is < 2, loses the game.
The task is to determine which player wins if P1 starts the game and both the players play optimally.*/

#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    // logic simple we have to check that the piles are even or not 
    // as if the pile is even player 1 can easily divide it and win otherwise player 2 will win 
    if (m%2==0 || n%2==0){
        printf("Player 1");
    }
    else{
        printf("Player 2");
    }
}