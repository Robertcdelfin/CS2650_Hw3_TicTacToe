#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Condition to end game
	int victory = 0;
    //User choice
    int userRow = 0;
    int userColum = 0;
    //Player characters
    char player1 = 'X';
    char player2 = 'O';
    //Creates a default State
    char table [3][3];
    table[0][0] = '*';
    table[0][1] = '*';
    table[0][2] = '*';
    table[1][0] = '*';
    table[1][1] = '*';
    table[1][2] = '*';
    table[2][0] = '*';
    table[2][1] = '*';
    table[2][2] = '*';
    for(int row = 0; row <3; row++)
    {
    	for(int colum =0; colum < 3; colum++)
    	{
    		printf("%c", table[row][colum]);
    		if(colum ==2)
    		{
    			printf("\n");
    		}
    	}
    }
    while(victory == 0)
    {
        printf("Player 1 select row 0-2\n");
        fflush(stdout);
        scanf("%d", &userRow);
        printf("Player 1 select colum 0-2\n");
        fflush(stdout);
        scanf("%d", &userColum);
        //goes the portion of the board
        table[userRow][userColum] = player1;
        for(int row = 0; row <3; row++)
        {
        	for(int colum =0; colum < 3; colum++)
        	{
        		printf("%c", table[row][colum]);
        		if(colum ==2)
        		{
        			printf("\n");
        		}
        	}
        }
        	//Diagonal 1
        if((table[0][0] == 'X'&& table[2][2] == 'X'))
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }

        else if((table [0][0] == 'O' && table [2][2] == 'O'))
        {
        	if(table[1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        	//Vertical left side

        if(table[0][0]  == 'X' && table[2][0]  == 'X')
        {
        	if(table[1][0] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][0] == 'O' && table[2][0] == 'O')
        {
        	if(table[1][0] == 'O'){
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        	//Horizontal Top


        if(table[0][0] == 'X' && table[0][2] == 'X')
        {
        	if(table[0][1] == "X")
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][0] == 'O' && table[0][2] == 'O')
        {
        	if(table[0][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //Vertical Right
        if(table[0][2] == 'X' && table[2][2] == 'X')
        {
        	if(table[1][2] == 'X')
       		{
        		printf("Player 1 wins");
        		exit(0);
       		}
        }
        else if(table[0][2] == 'O' && table[2][2] == 'O')
        {
        	if(table[1][2] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //diagonal 2
        if(table[0][2] == 'X' && table[2][0] == 'X')
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][2] == 'O' && table[2][0] == 'O')
        {
        	if(table[1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }

        //horizontal bottom
        if(table[2][0] == 'X' && table[2][2] == 'X')
        {
        	if(table[2][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[2][0] == 'O' && table[2][2] == 'O')
        {
        	if(table[2][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //Middle horizontal
        if(table[1][0] == 'X' && table[1][2] == 'X')
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[1][0] == 'O' && table[1][2] == 'O')
        {
        	if(table[1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //Middle Vertical
        if(table[0][1] == 'X' && table[2][1] == 'X')
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][1] == 'O' && table [2][1] == 'O')
        {
        	if(table [1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        printf("Player 2 select row 0-2\n");
        fflush(stdout);
        scanf("%d", &userRow);
        printf("Player 2 select colum 0-2\n");
        fflush(stdout);
        scanf("%d", &userColum);
        //goes the portion of the board
        table[userRow][userColum] = player2;
        for(int row = 0; row <3; row++)
        {
        	for(int colum =0; colum < 3; colum++)
        	{
        		printf("%c", table[row][colum]);
        		if(colum ==2)
        		{
        			printf("\n");
        		}
        	}
        }
        	//Diagonal 1
        if((table[0][0] == 'X'&& table[2][2] == 'X'))
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }

        else if((table [0][0] == 'O' && table [2][2] == 'O'))
        {
        	if(table[1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        	//Vertical left side

        if(table[0][0]  == 'X' && table[2][0]  == 'X')
        {
        	if(table[1][0] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][0] == 'O' && table[2][0] == 'O')
        {
        	if(table[1][0] == 'O'){
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        	//Horizontal Top


        if(table[0][0] == 'X' && table[0][2] == 'X')
        {
        	if(table[0][1] == "X")
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][0] == 'O' && table[0][2] == 'O')
        {
        	if(table[0][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //Vertical Right
        if(table[0][2] == 'X' && table[2][2] == 'X')
        {
        	if(table[1][2] == 'X')
       		{
        		printf("Player 1 wins");
        		exit(0);
       		}
        }
        else if(table[0][2] == 'O' && table[2][2] == 'O')
        {
        	if(table[1][2] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //diagonal 2
        if(table[0][2] == 'X' && table[2][0] == 'X')
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][2] == 'O' && table[2][0] == 'O')
        {
        	if(table[1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }

        //horizontal bottom
        if(table[2][0] == 'X' && table[2][2] == 'X')
        {
        	if(table[2][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[2][0] == 'O' && table[2][2] == 'O')
        {
        	if(table[2][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //Middle horizontal
        if(table[1][0] == 'X' && table[1][2] == 'X')
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[1][0] == 'O' && table[1][2] == 'O')
        {
        	if(table[1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
        //Middle Vertical
        if(table[0][1] == 'X' && table[2][1] == 'X')
        {
        	if(table[1][1] == 'X')
        	{
        		printf("Player 1 wins");
        		exit(0);
        	}
        }
        else if(table[0][1] == 'O' && table [2][1] == 'O')
        {
        	if(table [1][1] == 'O')
        	{
        		printf("Player 2 wins");
        		exit(0);
        	}
        }
    }
    return 0;
}
