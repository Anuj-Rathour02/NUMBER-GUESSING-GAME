#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // initialize random number generator 
    srand (time(0));
    // generate random number between 1 and 100 
    int random_number = (rand()%100)+1;
    int no_of_guesses = 0;
    int guessed_number;
    // print the random number 
    // printf("Random Number : %d\n",random number);
    do
    {
        printf("guess the number");
        scanf("%d", & guessed_number);
        if(guessed_number>random_number){
            printf("Lower number please !\n");
        }
        else if(guessed_number<random_number){
            printf("higher number please !\n");
        }
        else{
            printf("congrats !\n");
        }
        no_of_guesses ++;
    }while(guessed_number != random_number);
    printf("you guessed the number in %d guesses\n",no_of_guesses);
    return 0;
}