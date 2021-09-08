#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>


void printArray(int array[3][3][3]){
//this function prints the board after each turn 
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		for(int k=0;k<3;k++)
		{
            printf("%d\t",array[j][k][i]);
		};
		printf("\n");
	};
	printf("\n");
}


void createMagicCube(int array[3][3][3]){
/*this function will create a magic cube using a formula 
and a set of constants a, b, c for different values of i,j,k
 in the range of 1 to 3*/
int i, j, k;

printf("____Magic Cube____\n\n");

for(int i=1;i<=3;i++)
{
	for(int j=1;j<=3;j++)
	{
		for(int k=1;k<=3;k++)
		{
		int a = (i-j+k-1) % 3;
		if (a<0)
		    a = a+3;
		int b = (i-j-k) % 3 ;
		if (b<0)
		    b = b + 3;
		    
		int c = (i+j+k -2) % 3;
		if (c<0)
		    c = c+3;
		
		array[i-1][j-1][k-1] = a*9 + b*3 +c +1;
		}
	}
}
}

void createboard(int array[3][3][3]){
	//this function creates the board for tic tac toe and initialises all board position with 0
	for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		for(int k=0;k<3;k++)
		{
            array[j][k][i]=0;
		};
	};
};
}

int getUserInput(){
	//this function scans the user input and returns the integer that user types
	int userInp;
	scanf("Type the position you want to mark:%d", userInp);
	return userInp;
}

int getComputerInput(int compPosition, int userPosition,int compArray[30] ,int userArray[30],int array[3][3][3] ){
	//this function returns the integer value of the computer's move after checking for certain conditions
	
	/*if the array is empty(first move of the computer), 
	computer places its first move at the center position
	 on the board which is 14*/
	if (compPosition == 0){
		return 14;
		exit
	}
	elif (compPosition == 1){
		return 45-(userArray[userPosition]+userArray[userPosition]);
		exit;
	}
	elif (checkComputerWin(compPosition,compArray,array) !=0){
		return checkComputerWin(compPosition,compArray,array);
	}
}

int is_empty(int array[3][3][3], int position){
/* this function takes the board and a integer position as the inputs
and returns true if that position is empty*/
}
 
int checkComputerWin(int comp,int compArray[30], int array[3][3][3]){
//This funciton returns true if the computer can win in the next move
	 int move = 45-(compArray[comp]+compArray[comp-1]);
	 if (is_empty(array,move)==1){
		return move;
	 }
	 else{
		 return 0;
	 }
};

bool checkUserWin(int user, int array[30]){
/*This function returns true 
if the user can win in the next move so that position can be blocked*/
	if is_empty(45-array[user]+array[user-1]){
		return 1;
	}
	else{
		return 0;
	}
}


void playTTT(int array[3][3][3]){
    createboard(array);
	printArray(array);
	int userArray[30];
	int compArray[30];
	int user = 0;
	int comp = 0;
	int userCollinerLines = 0;
	int compCollinearLines = 0;
	while (userCollinerLines<10 && compCollinearLines<10){
		userArray[user] = getUserInput();
		compArray[comp] = getComputerInput();

	}
		
}

void main()
{
int magicCube[3][3][3];
createMagicCube(magicCube);
printArray(magicCube);

int board[3][3][3];
playTTT(board);

}