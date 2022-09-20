#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<mmsystem.h>
#include<stdlib.h>
#include<time.h>
/*------------------------------------------------------------------------------
      A SIMPLE PROJECT TO CREATE GAMING CONSOLE USING C LANGUAGE
                   CREATED IN CODEBLOCKS 20.03
                 TO BE SUMITED FOR 1ST SEMESTER
------------------------------------------------------------------------------*/
void loadingBar()                // LOADING BAR FUNCTION
{
	system("color 0A");
	char a = 177, b = 219;
	printf("\n\n\n\n");
	printf("\n\n\n\n\n\n\n\t\t\t\t\tLoading...\n\n");
	printf("\t\t\t\t\t");
	for (int i = 0; i < 80; i++)
		printf("%c", a);
	printf("\r");
	printf("\t\t\t\t\t");
	for (int i = 0; i < 80; i++) {
		printf("%c", b);
		Sleep(70);
	}
	printf("\n\n\n");
}

int roll_die();             // Prototype for the function of rolling a die game

char square[10]={'0','1','2','3','4','5','6','7','8','9'};           //for
int checkWin();                                                      //tic-tac-toe
void drawBoard();                                                    // game

int stone_paper_scissor(char user,char comp);              //Prototype for the function of stone paper scissor.

void drawBoundary(int,int,int*,int*,int*);                                   // Prototypes for finding the
void changeUserLocationOnButtonClick(int *,int *,char,int*,int*);            // jewelery game

int main(){
    loadingBar();           // Calling Loading function
    system("cls");
    system("color 7D");
	printf("\n\n\n\n\n\n\t\t\t\t\t============================================================================\n\n");
	printf("\t\t\t\t\t|||         |||	|||||||	 |||      |||||||  |||||||||  |||**   **|||  ||||||| \n");
	printf("\t\t\t\t\t|||         |||	|||      |||      |||      |||   |||  |||  ***  |||  |||    \n");
	printf("\t\t\t\t\t|||    *    |||	|||||    |||      |||      |||   |||  |||   *   |||  |||||  \n");
	printf("\t\t\t\t\t|||  *   *  |||	|||      |||      |||      |||   |||  |||       |||  |||    \n");
	printf("\t\t\t\t\t|||**     **|||	|||||||	 |||||||  |||||||  |||||||||  |||       |||  ||||||| \n\n");
	printf("\t\t\t\t\t============================================================================ \n\n");
	printf("\n\t\t\t\t\t>>>>>>>       ");
	char str[]="GAMING STUDIO AND ENTERTAINMENT PVT. LTD. COMPANY";
	for(int i=0;i<strlen(str);++i)
	{
		for(int j=1; j<20000000; ++j)
		{

		}
		printf("%c",str[i]);
	}
	printf("      <<<<<<< \n\n");
	char ch[]="MADE BY: AMAN SINGH BISHT";
	for(int i=0;i<strlen(ch);++i)
	{
		for(int j=1; j<200000000; ++j)
		{

		}
		printf("%c",ch[i]);
	}
	printf("\nENROLLMENT NUMBER: 2020BECE029");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t GAMES ARE LOADING!!! PLEASE WAIT..........\n");
	PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\welcome.wav"),NULL,SND_SYNC);
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t************************************************\n\n");
	printf("\t\t\t\t\t\t\t|||**   **|||   |||||||   |||**   |||   |||  ||| \n");
	printf("\t\t\t\t\t\t\t|||  ***  |||   |||       ||| **  |||   |||  ||| \n");
	printf("\t\t\t\t\t\t\t|||   *   |||   |||||     |||  *  |||   |||  ||| \n");
	printf("\t\t\t\t\t\t\t|||       |||   |||       |||  ** |||   |||  ||| \n");
	printf("\t\t\t\t\t\t\t|||       |||   |||||||   |||   **|||   |||||||| \n\n");
	printf("\t\t\t\t\t\t\t************************************************\n\n");
	printf("\t\t\t\t\t\t\t              (1) ROLLING A DIE                 \n");
	printf("\t\t\t\t\t\t\t              (2) TIC-TAC-TOE                   \n");
	printf("\t\t\t\t\t\t\t              (3) STONE-PAPER-SCISSOR           \n");
	printf("\t\t\t\t\t\t\t              (4) GUESS THE CORRECT NUMBER      \n");
	printf("\t\t\t\t\t\t\t              (5) COLLECT THE JWELS                 \n\n");
    printf("\t\t\t\t\t\t\t-------------------------------------------------\n");
    system("color 0C");
    int game_num;
    printf("\n\n");
    printf("\t\t\t\t\t   ||===========   ||==========||  ||             ||   ||=========  ||========  \n");
    printf("\t\t\t\t\t   ||              ||          ||  || ||       || ||   ||           ||          \n");
    printf("\t\t\t\t\t   ||              ||          ||  ||   ||   ||   ||   ||           ||          \n");
    printf("\t\t\t\t\t   ||              ||          ||  ||      ||     ||   ||           ||          \n");
    printf("\t\t\t\t\t   ||              ||==========||  ||             ||   ||=========  ||========  \n");
    printf("\t\t\t\t\t   ||    ======||  ||          ||  ||             ||   ||=========           || \n");
    printf("\t\t\t\t\t   ||          ||  ||          ||  ||             ||   ||                    || \n");
    printf("\t\t\t\t\t   ||          ||  ||          ||  ||             ||   ||                    || \n");
    printf("\t\t\t\t\t   ||          ||  ||          ||  ||             ||   ||                    || \n");
    printf("\t\t\t\t\t   ||===========   ||          ||  ||             ||   ||=========  ||========  \n");
    printf("\n\n\t\t\t\t\t\t\t-------------------------------------------------\n");
	PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\begin.wav"),NULL,SND_SYNC);
	printf("\t\t\t\t\t\t\t              Enter Your Choice ???           \n\n");
	scanf("%d",&game_num);
	system("cls");
	system("color 0A");
	if(game_num==1){
        do{
        int num1,num2,choice;
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t      ______________________          \n");
        printf("\t\t\t\t\t\t\t\t\t     |   _____      _____   |         \n");
        printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
        printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
        printf("\t\t\t\t\t\t\t\t\t ____|  |_____|    |_____|  |_____    \n");
        printf("\t\t\t\t\t\t\t\t\t|      ROLLING THE DIE.....       |   \n");
        printf("\t\t\t\t\t\t\t\t\t|         ---          ---        |   \n");
        printf("\t\t\t\t\t\t\t\t\t|________| O |________| O |_______|   \n");
        printf("\t\t\t\t\t\t\t\t\t          ---          ---            \n\n");
        printf("\t\t\t\t\t\t\t\t\t PLAYER (1) v/s PLAYER (2) \n\n\n");
        printf("\t\t\t\t\t\t\t\t\t Press (1) for player 1's turn \n");
        printf("\t\t\t\t\t\t\t\t\t Press (2) for player 2's turn \n");
        printf("\t\t\t\t\t\t\t\t\t Press (3) for Instructions    \n");
        printf("\t\t\t\t\t\t\t\t\t Press (4) for Exit.           \n");
        while(1){
            printf("\nPlayer: ");
            scanf("%d",&choice);
            PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\step.wav"),NULL,SND_SYNC);
            switch(choice){
                case 1: num1=roll_die();
                printf("Value on the die: %d\n",num1);
                break;
                case 2: num2=roll_die();
                printf("Value on the die: %d\n",num2);
                break;
                case 3:
                printf("\nTwo players will roll the die and a person wins when he/she shows up a six first. \n");
                break;
                case 4: printf("Exiting....");
                exit(1);
                default: printf("\nInvalid choice \n\n");
                continue;
            }
            if(num1==6){
                printf("\t\t\t\t\t\t\t ||||||||  *||       ||     ||  ********  ||*    ||  \n");
                printf("\t\t\t\t\t\t\t ||    || * ||       ||     ||     ||     || *   ||  \n");
                printf("\t\t\t\t\t\t\t ||||||||   ||       ||     ||     ||     ||  *  ||  \n");
                printf("\t\t\t\t\t\t\t ||         ||       ||  *  ||     ||     ||   * ||  \n");
                printf("\t\t\t\t\t\t\t ||         ||       || * * ||     ||     ||    *||  \n");
                printf("\t\t\t\t\t\t\t ||      ||||||||    ||*   *||  ********  ||     ||  \n");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\win.wav"),NULL,SND_SYNC);
                goto end;
            }else if(num2==6){
                printf("\t\t\t\t\t\t\t ||||||||   |||||||       ||     ||  ********  ||*    ||  \n");
                printf("\t\t\t\t\t\t\t ||    ||        ||       ||     ||     ||     || *   ||  \n");
                printf("\t\t\t\t\t\t\t ||||||||        ||       ||     ||     ||     ||  *  ||  \n");
                printf("\t\t\t\t\t\t\t ||         |||||||       ||  *  ||     ||     ||   * ||  \n");
                printf("\t\t\t\t\t\t\t ||         ||            || * * ||     ||     ||    *||  \n");
                printf("\t\t\t\t\t\t\t ||         |||||||       ||*   *||  ********  ||     ||  \n");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\win.wav"),NULL,SND_SYNC);
                goto end;
            }else
                continue;
        }
        end:
            printf("\n");
            getch();
        }while(0);
        getch();
	}
	else if(game_num==2){
        do{
            //tic-tac-toe
            int player=1,i,choice;
            char mark;
                do{
                    drawBoard();
                    player=(player%2)?1:2;
                    printf("\n\n\t\t\t\t\t\t\t\t\t    Player %d, enter the choice: ",player);
                    scanf("%d",&choice);
                    PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\step.wav"),NULL,SND_SYNC);
                    mark=(player==1)?'X':'O';
                    if(choice==1 && square[1]=='1')
                        square[1]=mark;
                    else if(choice==2 && square[2]=='2')
                        square[2]=mark;
                    else if(choice==3 && square[3]=='3')
                        square[3]=mark;
                    else if(choice==4 && square[4]=='4')
                        square[4]=mark;
                    else if(choice==5 && square[5]=='5')
                        square[5]=mark;
                    else if(choice==6 && square[6]=='6')
                        square[6]=mark;
                    else if(choice==7 && square[7]=='7')
                        square[7]=mark;
                    else if(choice==8 && square[8]=='8')
                        square[8]=mark;
                    else if(choice==9 && square[9]=='9')
                        square[9]=mark;
                    else{
                        printf("Invalid Option!!!");
                        player--;
                        getch();
                    }
                    i=checkWin();
                    player++;

            }while(i==-1);
            if(i==1){
                // printf("==>Player %d won",--player);
                int flag=--player;
                if(flag==1){
                    printf("\n\n\n");
                    printf("\t\t\t\t\t\t\t\t ||||||||  *||       ||     ||  ********  ||*    ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||    || * ||       ||     ||     ||     || *   ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||||||||   ||       ||     ||     ||     ||  *  ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         ||       ||  *  ||     ||     ||   * ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         ||       || * * ||     ||     ||    *||  \n");
                    printf("\t\t\t\t\t\t\t\t ||      ||||||||    ||*   *||  ********  ||     ||  \n");
                }else{
                    printf("\n\n\n");
                    printf("\t\t\t\t\t\t\t\t ||||||||   |||||||       ||     ||  ********  ||*    ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||    ||        ||       ||     ||     ||     || *   ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||||||||        ||       ||     ||     ||     ||  *  ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         |||||||       ||  *  ||     ||     ||   * ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         ||            || * * ||     ||     ||    *||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         |||||||       ||*   *||  ********  ||     ||  \n");
                }
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\win.wav"),NULL,SND_SYNC);
                getch();
            }else{
                printf("==================================>GAME DRAWS<==================================================");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\draw.wav"),NULL,SND_SYNC);
                getch();
            }
        }while(0);
	}
	else if(game_num==3){
    do{
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t      ______________________          \n");
        printf("\t\t\t\t\t\t\t\t\t     |   _____      _____   |         \n");
        printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
        printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
        printf("\t\t\t\t\t\t\t\t\t ____|  |_____|    |_____|  |_____    \n");
        printf("\t\t\t\t\t\t\t\t\t|    STONE-PAPER-SCISSOR...       |   \n");
        printf("\t\t\t\t\t\t\t\t\t|         ---          ---        |   \n");
        printf("\t\t\t\t\t\t\t\t\t|________| O |________| O |_______|   \n");
        printf("\t\t\t\t\t\t\t\t\t          ---          ---            \n\n");
        printf("\t\t\t\t\t\t\t\t\t         USER v/s COMPUTER              \n\n");
        while(1){
            // Game of stone, paper and scissor.
            char user,comp;
            int number;
            //generating random values to computer.
            srand(time(NULL));
            number=rand()%3+1;
            if(number==1)
                comp='s';
            else if(number==2)
                comp='p';
            else
                comp='c';
            //taking input from user.
            printf("\n\t\t\t\t\t\t\t\tEnter 's' for stone, 'p' for paper, 'c' for scissor: ");
            user=getch();
            int result=stone_paper_scissor(user,comp);
            if(result==0){
                printf("\n\t\t\t\t\t\t\t\tGAME DRAWS!!!\n");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\draw.wav"),NULL,SND_SYNC);
            }else if(result==1){
                printf("\n\t\t\t\t\t\t\t\tYOU WIN!!!\n");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\win.wav"),NULL,SND_SYNC);
            }else{
                printf("\n\t\t\t\t\t\t\t\tYOU LOOSE!!!\n");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\lose.wav"),NULL,SND_SYNC);
            }
            int check=0;
            printf("\nPress any number to Play again or Press 0 to exit!!!: ");
            scanf("%d",&check);
            if(check==0){
                goto end1;
            }else{
                continue;
            }
        }
    }while(0);
    end1:
    printf("\n");
	}
	else if(game_num==4){
        do{
            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t\t      ______________________          \n");
            printf("\t\t\t\t\t\t\t\t\t     |   _____      _____   |         \n");
            printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
            printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
            printf("\t\t\t\t\t\t\t\t\t ____|  |_____|    |_____|  |_____    \n");
            printf("\t\t\t\t\t\t\t\t\t|     GUESS THE CORRECT NUM...    |   \n");
            printf("\t\t\t\t\t\t\t\t\t|         ---          ---        |   \n");
            printf("\t\t\t\t\t\t\t\t\t|________| O |________| O |_______|   \n");
            printf("\t\t\t\t\t\t\t\t\t          ---          ---            \n\n");
            printf("\t\t\t\t\t\t\t\t\t          INSTRUCTION===>>>           \n\n");
            printf("\t\t\t\t\t\t\tPlayer who guess the correct number in minimum steps wins the game. \n\n");
            printf("\t\t\t\t\t\t\t                 PLAYER(1) v/s PLAYER(2)                            \n\n");
            int number,guess,count_guess=1,guess2,count_guess2=1;
            srand(time(0));
            number=rand()%100+1;  //generating the random number.
            //loop goes on until the number is guessed.
            do
            {
                printf("Guess the number between 1 to 100 (PLAYER 1)\n");
                scanf("%d",&guess);
                if(guess>number){
                    printf("Lower number please!\n");
                }else if(guess<number){
                    printf("Higher number please!\n");
                }else{
                    printf("You (PLAYER 1) Guessed the number right in %d attempts!!!\n",count_guess);
                }
                count_guess++;
            }while(guess!=number);
            number=rand()%100+1;
            printf("\n**************************************************************************************************\n\n");
            do
            {
                printf("Guess the number between 1 to 100 (PLAYER 2)\n");
                scanf("%d",&guess2);
                if(guess2>number){
                    printf("Lower number please!\n");
                }else if(guess2<number){
                    printf("Higher number please!\n");
                }else{
                    printf("You (PLAYER 2) Guessed the number right in %d attempts!!!\n",count_guess2);
                }
                count_guess2++;
            }while(guess2!=number);
            if(count_guess>count_guess2){
                    printf("\n\n\n");
                    printf("\t\t\t\t\t\t\t\t ||||||||   |||||||       ||     ||  ********  ||*    ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||    ||        ||       ||     ||     ||     || *   ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||||||||        ||       ||     ||     ||     ||  *  ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         |||||||       ||  *  ||     ||     ||   * ||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         ||            || * * ||     ||     ||    *||  \n");
                    printf("\t\t\t\t\t\t\t\t ||         |||||||       ||*   *||  ********  ||     ||  \n");
                    PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\win.wav"),NULL,SND_SYNC);
            }else{
                printf("\t\t\t\t\t\t\t ||||||||  *||       ||     ||  ********  ||*    ||  \n");
                printf("\t\t\t\t\t\t\t ||    || * ||       ||     ||     ||     || *   ||  \n");
                printf("\t\t\t\t\t\t\t ||||||||   ||       ||     ||     ||     ||  *  ||  \n");
                printf("\t\t\t\t\t\t\t ||         ||       ||  *  ||     ||     ||   * ||  \n");
                printf("\t\t\t\t\t\t\t ||         ||       || * * ||     ||     ||    *||  \n");
                printf("\t\t\t\t\t\t\t ||      ||||||||    ||*   *||  ********  ||     ||  \n");
                PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\win.wav"),NULL,SND_SYNC);
            }
            getch();
        }while(0);
	}
	else if(game_num==5){
	    do{
            int x=0,y=0; // for user position
            char ch;     // to store the key Pressed
            int positionX[4]={0}; // Jwel X Position
            int positionY[4]={0}; // Jwel Y Position
            int randomNum,i=0;
            int gameOver=0,noOfMoves=0,gameQuit=0;

            srand(time(0)); // if we don't use srand() then every time we compile and run the program
                            // we will be getting same coordinate for jwels hence it is must to use srand function
                            // You can just comment the srand and check the output to be more clear about it

            // Storing the random X Position For JWEL
            while(i<4){
                randomNum=rand()%50;
                positionX[i]=randomNum;
                i++;
            }
            // Storing the random Y Position For JWEL
            i=0;
            while(i<4){
                randomNum=rand()%10;
                positionY[i]=randomNum;
                i++;
            }

            drawBoundary(x,y,positionX,positionY,&gameOver); // Function Call

            while(1){
                if(kbhit()){
                ch=getch();
                system("cls");
                changeUserLocationOnButtonClick(&x,&y,ch,&noOfMoves,&gameQuit);
                if(gameQuit==0){ // if gameQuit is 1 means user has pressed 'q' key
                    drawBoundary(x,y,positionX,positionY,&gameOver);
                    if(gameOver==4){ // if gameOver value becomes 4 means we have collected all the jwels
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t<====== WELL DONE ======>\n");
                        printf("\n\t\t\t\t\t\t\t\tYou Collected All The Jwels!\n");
                        printf("\n\t\t\t\t\t\t\t\tIt Took You %d Moves!\n\n\n",noOfMoves);
                        printf("\t\t\t\t\t||||||||  ||||||||  |||      |||  ||||||||       |||||||||   |          |  |||||||  ||||||||        \n");
                        printf("\t\t\t\t\t||        ||    ||  || ||  || ||  ||             ||     ||    |        |   ||       ||    ||        \n");
                        printf("\t\t\t\t\t||        ||||||||  ||   ||   ||  ||||||||       ||     ||     |      |    |||||||  ||||||||        \n");
                        printf("\t\t\t\t\t||  ||||  ||    ||  ||        ||  ||             ||     ||      |    |     ||       ||    ||        \n");
                        printf("\t\t\t\t\t||    ||  ||    ||  ||        ||  ||             ||     ||       |  |      ||       ||    ||        \n");
                        printf("\t\t\t\t\t||||||||  ||    ||  ||        ||  ||||||||       |||||||||        ||       |||||||  ||    ||        \n");
                        break; // it will break infinite loop as we have won the game
                    }
                }
                else{
                    system("cls");
                    printf("\nOh No! You Quit!!\n");
                    printf("\nYou Collected %d Jwels!\n",gameOver); // gameOver will give the number of jwel collected.
                    printf("\nAfter %d Moves You Quit!\n",noOfMoves); // gives number of moves so for.
                    printf("\n[][][][] Game Over [][][][]\n");
                    break;	//breaking the infinite loop
                }
                }
            }
	    }while(0);
	    getch();
	}
	system("cls");
	system("color 0B");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t      ______________________          \n");
	printf("\t\t\t\t\t\t\t\t\t     |   _____      _____   |         \n");
    printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
    printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
    printf("\t\t\t\t\t\t\t\t\t ____|  |_____|    |_____|  |_____    \n");
    printf("\t\t\t\t\t\t\t\t\t|          GAME ENDS!!!           |   \n");
    printf("\t\t\t\t\t\t\t\t\t|         ---          ---        |   \n");
    printf("\t\t\t\t\t\t\t\t\t|________| O |________| O |_______|   \n");
    printf("\t\t\t\t\t\t\t\t\t          ---          ---            \n\n\n\n\n\n");
    PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\MyProjects\\end.wav"),NULL,SND_SYNC);
	getch();
	return 0;
}

int roll_die(){
    srand(time(NULL));
    int r=1+rand()%6;
    return r;
}

int checkWin(){
    if(square[1]==square[2] && square[2]==square[3])
        return 1;
    else if(square[4]==square[5] && square[5]==square[6])
        return 1;
    else if(square[7]==square[8] && square[8]==square[9])
        return 1;
    else if(square[1]==square[4] && square[4]==square[7])
        return 1;
    else if(square[2]==square[5] && square[5]==square[8])
        return 1;
    else if(square[3]==square[6] && square[6]==square[9])
        return 1;
    else if(square[1]==square[5] && square[5]==square[9])
        return 1;
    else if(square[3]==square[5] && square[5]==square[7])
        return 1;
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
        return 0;
    else
        return -1;
}

void drawBoard(){
    system("cls");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t      ______________________          \n");
    printf("\t\t\t\t\t\t\t\t\t     |   _____      _____   |         \n");
    printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
    printf("\t\t\t\t\t\t\t\t\t     |  |     |    |     |  |         \n");
    printf("\t\t\t\t\t\t\t\t\t ____|  |_____|    |_____|  |_____    \n");
    printf("\t\t\t\t\t\t\t\t\t|          TIC-TAC-TOE....        |   \n");
    printf("\t\t\t\t\t\t\t\t\t|         ---          ---        |   \n");
    printf("\t\t\t\t\t\t\t\t\t|________| O |________| O |_______|   \n");
    printf("\t\t\t\t\t\t\t\t\t          ---          ---            \n\n");
    printf("\t\t\t\t\t\t\t\t\t    Player1 (X) v/s Player2 (O) \n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t\t\t\t\t  %c   |  %c   |   %c   \n",square[1],square[2],square[3]);
    printf("\t\t\t\t\t\t\t\t\t\t______|______|______\n");
    printf("\t\t\t\t\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t\t\t\t\t  %c   |  %c   |   %c   \n",square[4],square[5],square[6]);
    printf("\t\t\t\t\t\t\t\t\t\t______|______|______\n");
    printf("\t\t\t\t\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t\t\t\t\t  %c   |  %c   |   %c   \n",square[7],square[8],square[9]);
    printf("\t\t\t\t\t\t\t\t\t\t      |      |      \n");
}

int stone_paper_scissor(char user,char comp){
    /* return 0 if draw,
       return 1 if user wins and
       return -1 if user loses. */
    if(user==comp){   //draw condition
        return 0;
    }
    //non draw condition
    if(user=='s' && comp=='p'){
        return -1;
    }else if(user=='p' && comp=='s'){
        return 1;
    }
    if(user=='s' && comp=='c'){
        return 1;
    }else if(user=='c' && comp=='s'){
        return -1;
    }
    if(user=='p' && comp=='c'){
        return -1;
    }else if(user=='c' && comp=='p'){
        return 1;
    }
}

void drawBoundary(int x,int y,int *posX,int *posY,int *gameOver){ // Passing User Coordinate And JWEL Coordinate
	int i,j,k;
	for(i=-1;i<=10;i++){
		for(j=-1;j<=50;j++){
			if(i==-1 || i==10 || j==-1 || j==50){
				printf("#");
			}
			else{
				if(i==y && j==x){
					printf("P");
					for(k=0;k<4;k++){
						if(posX[k]==x && posY[k]==y){
							posX[k]=-1;
							posY[k]=-1;
                            PlaySound(TEXT("C:\\Users\\amans\\OneDrive\\Desktop\\C_personal\\steps.wav"),NULL,SND_SYNC);

							(*gameOver)++; // if we are here means we are able to collect the jwels hence incrementing gameOver.
						}
					}
				}
				else{
					if(posX[0]==j && posY[0]==i){
						printf("a");
					}
					else if(posX[1]==j && posY[1]==i){
						printf("b");
					}
					else if(posX[2]==j && posY[2]==i){
						printf("c");
					}
					else if(posX[3]==j && posY[3]==i){
						printf("d");
					}
					else
						printf(" ");
				}
			}
		}
		printf("\n");
	}
}

void changeUserLocationOnButtonClick(int *x,int *y,char keyPressed,int *noOfMoves,int *gameQuit){
	switch(keyPressed){
		case 'w':     // ASCII value of  UP Arrow Key
			if(*y!=0){
				(*noOfMoves)++;
				(*y)--;     // Changing y
			}
			break;
		case 'a':     // ASCII value of  LEFT Arrow Key
			if(*x!=0){
				(*noOfMoves)++;
				(*x)--;  // Changing x
			}
			break;
		case 's':     // ASCII value of  RIGHT Arrow Key
			if(*x!=49){
				(*noOfMoves)++;
				(*x)++;  // Changing x
			}
			break;
		case 'z':     // ASCII value of  DOWN Arrow Key
			if(*y!=9){
				(*noOfMoves)++;
				(*y)++;  // Changing y
			}
			break;
		case 'q':
			*gameQuit=1; // storing 1 to gameQuit variable indicate that user has quit the GAME
			break;
	}
}

