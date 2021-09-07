#include<stdio.h>
#include<conio.h>
#include<math.h>

void printArray(int array[3][3][3]){
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
};
}

void createMagicCube(int array[3][3][3]){
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
	int userInp;
	scanf("Type the position you want to mark:%d", userInp);
	return userInp;
}

int getComputerInput(int compPosition, int userPosition, int userArray[], int compArray[]){
	if compPosition == 0
		return 14
	else{
		return 45-(userArray[userPosition]+userArray[userPosition])
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
	userArray[user] = getUserInput();
	compArray[comp] = getComputerInput();

}

void main()
{
int magicCube[3][3][3];
createMagicCube(magicCube);
printArray(magicCube);

int board[3][3][3];
playTTT(board);

}