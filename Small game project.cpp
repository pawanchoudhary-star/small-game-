#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	srand(time(0));
	int randomnumber = (rand() % 100) + 1;
	int no_of_guesses = 0;
	int guessed;
	
	do{
		printf("Guess the number");
		scanf("%d",&guessed);
		if(guessed>randomnumber){
			printf("Lower number please!\n");
		}
		else if(randomNumber<guessed){
			printf("Higher number please!\n")
		}
		else{
			printf("Congrats!\n");
		}
		no_of_guesses++;
		
	}while (guessed != randomNumber);
	printf("You guessed the number in %d guesses",no_of_guesses);
	return 0;	
}
