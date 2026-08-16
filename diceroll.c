//a 2-player dice game
#include<stdio.h>
#include<stdlib.h>  
#include<time.h>

int roll_dice(){
    return (rand()%6)+1; 
}

int main(){
    char player1[50],player2[50];
    printf("Enter the name of player 1 :");
    scanf("%s",&player1);
    printf("Enter the name of player 2 :");
    scanf("%s",&player2);
    srand(time(0)); 
    int p1=roll_dice();
    int p2=roll_dice();
    printf("%s rolled: %d\n",player1,p1);
    printf("%s rolled: %d\n",player2,p2);
    if(p1>p2){
        printf("%s wins\n",player1);
    }
    else if(p2>p1){
        printf("%s wins\n",player2);
    }
    else{
        printf("It's a tie\n");
    }
    return 0;
}
