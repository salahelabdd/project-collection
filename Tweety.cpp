
// ------------------
// -- Tweety Game.  --
// --  Salah Elabd   --
// ---------------------

//GAME KEYBOARD CONTROLS
//(W , A , S , D) FOR MOVEMENTS
//( SPACE ) TO JUMP , (M) TO JUMP RIGHT , (N) TO JUMP LEFT
//(Y) TO SHOOT SINGLE BULLET
//(Z) TO DASH LEFT , (X) TO DASH RIGHT
//(9) TO SUICIDE


#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// ***************************************//
// ***************************************//

// MENU

    void Menu(char x[][500])
    {

        //BORDER
        for (int r = 1 ; r < 200 ; r++)
        {
            
                x[0][r] = 196;
        }
        

        for (int r = 1 ; r < 200 ; r++)
        {
            
                x[29][r] = 196;
        }
        for (int r = 0 ; r < 30 ; r++)
        {
            x[r][0] = 179;
        }
        for (int r = 0 ; r < 30 ; r++)
        {
            x[r][149] = 179;
        }
        


        //START BUTTON

        int name = 63;
        int namerow = 10;
        x[namerow][name++] = 'C';
        x[namerow][name++] = 'L';
        x[namerow][name++] = 'I';
        x[namerow][name++] = 'C';
        x[namerow][name++] = 'K';
        x[namerow][name++] = ' ';
        x[namerow][name++] = '"';
        x[namerow][name++] = 'Q';
        x[namerow][name++] = '"';
        x[namerow][name++] = ' ';
        x[namerow][name++] = 'T';
        x[namerow][name++] = 'O';
        x[namerow][name++] = ' ';
        x[namerow][name++] = 'S';
        x[namerow][name++] = 'T';
        x[namerow][name++] = 'A';
        x[namerow][name++] = 'R';
        x[namerow][name++] = 'T';

        name = 1;
        namerow = 1;

        x[namerow][name++] = 'G';
        x[namerow][name++] = 'A';
        x[namerow][name++] = 'M';
        x[namerow][name++] = 'E';
        x[namerow][name++] = ' ';
        x[namerow][name++] = 'M';
        x[namerow][name++] = 'A';
        x[namerow][name++] = 'D';
        x[namerow][name++] = 'E';
        x[namerow][name++] = ' ';
        x[namerow][name++] = 'B';
        x[namerow][name++] = 'Y';
        x[namerow][name++] = ' ';
        x[namerow][name++] = 'S';
        x[namerow][name++] = 'A';
        x[namerow][name++] = 'L';
        x[namerow][name++] = 'A';
        x[namerow][name++] = 'H';
        x[namerow][name++] = ' ';
        x[namerow][name++] = 'E';
        x[namerow][name++] = 'L';
        x[namerow][name++] = 'A';
        x[namerow][name++] = 'B';
        x[namerow][name++] = 'D';

        namerow++;
        name = 1;
        x[namerow][name++] = '2';
        x[namerow][name++] = '4';
        x[namerow][name++] = '3';
        x[namerow][name++] = '6';
        x[namerow][name++] = '3';
        x[namerow][name++] = '5';





        //MOUNTAINS
        for (int c = 1 ; c < 149 ; c++)
        {
            x[28][c] = 178;
        }
        int row = 27;

        int constant = 38;
        int col = 0+ constant;


        x[row][col ++] = '/';
        x[row][col ++] = ' ';
        x[row][col ++] = '^';
        x[row][col ++] = ' ';
        x[row][col ++] = '^';
        x[row][col ++] = ' ';
        x[row][col ++] = '^';
        x[row][col ++] = ' ';
        x[row][col ++] = ' ';
        x[row][col ++] = '^';
        x[row][col ++] = ' ';
        x[row][col ++] = ' ';
        x[row][col ++] = '^';
        x[row][col ++] = ' ';
        x[row][col ++] = ' ';
        x[row][col ++] = '^';
        x[row][col ++] = ' ';
        x[row][col ++] = ' ';
        x[row][col ++] = ' ';

        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 
        x[row][col ++] = '|'; 

        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 

        x[row][col++] = '|';
        x[row][col++] = ' ';
        x[row][col++] = '|';
        x[row][col++] = ' ';

        row--;
        col = 1 + constant;
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';


        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';

        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 
        x[row][col ++] = ' '; 

        x[row][col ++] = '|';
        x[row][col ++] = ' '; 
        x[row][col ++] = '|'; 

        row--;
        col = 2 + constant;
        x[row][col++] = '/';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';


        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';

        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';

        x[row][col++] = '/';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = 'o';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col] = '\\';


        row--;
        col = 3+ constant;
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_'; 
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_'; 
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '\\';  
        x[row][col++] = ' ';  
        x[row][col++] = ' ';  
        x[row][col++] = '^';  
        x[row][col++] = ' ';  
        x[row][col++] = '/'; 
        x[row][col++] = '|';  
        x[row][col++] = '|';  
        x[row][col++] = '|';  
        x[row][col++] = '|';  
        x[row][col++] = '|'; 
        x[row][col++] = 'o'; 
        x[row][col++] = '|';
        x[row][col++] = '\\';  


        row--;
        col = 4+ constant;
        x[row][col++] = '/'; 
        x[row][col++] = ' '; 
        x[row][col++] = '^'; 
        x[row][col++] = '^'; 
        x[row][col++] = ' '; 
        x[row][col++] = ' '; 
        x[row][col++] = '^'; 
        x[row][col++] = ' '; 
        x[row][col++] = '^'; 
        x[row][col++] = ' '; 
        x[row][col++] = '^'; 
        x[row][col++] = '\\'; 
        x[row][col++] = ' '; 
        x[row][col++] = ' '; 
        x[row][col++] = '/'; 
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_'; 
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '_'; 
        x[row][col++] = '_';
        x[row][col++] = '_';        
        x[row][col++] = '_';
        x[row][col++] = '\\';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '|';
        x[row][col++] = 'o';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = '\\';

        row--;
        col = 5+ constant;
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '_';
        x[row][col++] = '\\';

        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';

        x[row][col++] = '|';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '|';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '|';
        x[row][col++] = '|';
        x[row][col++] = 'o';
        x[row][col++] = '\\';


        row--;
        col = 6+ constant;
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = '_';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '|';
        x[row][col++] = '\\';


        row--;
        col = 7+ constant;
        x[row][col++] = '/';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '*';

        row--;
        col = 8+ constant;
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '\\';

        row--;
        col = 9+ constant;
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = '/';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '^';
        x[row][col++] = ' ';
        x[row][col++] = '\\';

        row--;
        col = 22+ constant;
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '\\';

        row--;
        col = 23+ constant;
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '\\';

        row--;
        col = 30+ constant;
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = ' ';
        x[row][col++] = ' ';
        x[row][col++] = '/';
        x[row][col++] = '/';
        x[row][col++] = '\\';
        x[row][col++] = '\\';

        row--;
        col = 35+ constant;
        
        x[row][col++] = '/';
        x[row][col++] = '\\';

    }
    

//CLEAR AND DRAW FRAMES
void Clear_and_Draw_Map(char Map[][500])
{

    //CLEAR THE SCREEN
    for (int row = 0; row < 300; row++)
    {
        for (int col = 0; col < 500; col++)
        {
            Map[row][col] = ' ';
        }
    }

    //RIGHT SIDE FRAME
    for (int RightSideFrame = 0 ; RightSideFrame < 280 ; RightSideFrame++)
    {
        Map[RightSideFrame][499] = 219;
    }

    for (int RightSideFrame = 0 ; RightSideFrame < 280 ; RightSideFrame+=40)
    {
        Map[RightSideFrame][499] = 181;
    }


    //LEFT SIDE FRAME
    for (int RightSideFrame = 0 ; RightSideFrame < 280 ; RightSideFrame++)
    {
        Map[RightSideFrame][10] = 219;
    }

    for (int RightSideFrame = 0 ; RightSideFrame < 300 ; RightSideFrame+=40)
    {
        Map[RightSideFrame][10] = 198;
    }


    //FLOOR 
    for (int FloorColumn = 10 ; FloorColumn < 500 ; FloorColumn++)
    {
        Map[280][FloorColumn] = 219;
    }


    for (int FloorRow = 282 ; FloorRow < 300 ; FloorRow++)
    {
        for (int FloorColumn = 10 ; FloorColumn < 500 ; FloorColumn++)
        {
            Map[FloorRow][FloorColumn] = '.';
        }
    }

    //CEILING
    for (int FloorColumn = 11 ; FloorColumn < 500 ; FloorColumn+=2)
    {
        Map[152][FloorColumn] = ',';
    }
    for (int FloorColumn = 12 ; FloorColumn < 500 ; FloorColumn+=2)
    {
        Map[153][FloorColumn] = '`';
    }

    
}


//DRAW AND MOVE Tweety // Tweety'S HEALTH
void DrawTweety(char Map[][500] , char &UserMove , int&rowTweety , int &columnTweety , int &rTweety , int &cTweety , int Level , int &FlagLookLeft , int &FlagLookRight , int FlagCheckPoint)
{

    if (FlagLookLeft == 1)
    {
        Map[rowTweety+1][columnTweety+1] = ' ';
        Map[rowTweety+2][columnTweety+1] = '/';
        Map[rowTweety+3][columnTweety+1] = '\\';
        Map[rowTweety+4][columnTweety+1] = '(';
        Map[rowTweety+5][columnTweety+1] = ' ';
        Map[rowTweety+6][columnTweety+1] = ' ';
        Map[rowTweety+7][columnTweety+1] = ' ';
        Map[rowTweety+8][columnTweety+1] = ' ';
        Map[rowTweety+9][columnTweety+1] = '(';

        Map[rowTweety+1][columnTweety+2] = '.';
        Map[rowTweety+2][columnTweety+2] = '_';
        Map[rowTweety+3][columnTweety+2] = '@';
        Map[rowTweety+4][columnTweety+2] = '_';
        Map[rowTweety+5][columnTweety+2] = ' ';
        Map[rowTweety+6][columnTweety+2] = ' ';
        Map[rowTweety+7][columnTweety+2] = ' ';
        Map[rowTweety+8][columnTweety+2] = '_';
        Map[rowTweety+9][columnTweety+2] = '(';

        Map[rowTweety+1][columnTweety+3] = '-';
        Map[rowTweety+2][columnTweety+3] = ' ';
        Map[rowTweety+3][columnTweety+3] = ' ';
        Map[rowTweety+4][columnTweety+3] = '=';
        Map[rowTweety+5][columnTweety+3] = '`';
        Map[rowTweety+6][columnTweety+3] = '/';
        Map[rowTweety+7][columnTweety+3] = '\\';
        Map[rowTweety+8][columnTweety+3] = '_';
        Map[rowTweety+9][columnTweety+3] = '_';

        Map[rowTweety+1][columnTweety+4] = '"';
        Map[rowTweety+2][columnTweety+4] = '_';
        Map[rowTweety+3][columnTweety+4] = '@';
        Map[rowTweety+4][columnTweety+4] = ' ';
        Map[rowTweety+5][columnTweety+4] = ')';
        Map[rowTweety+6][columnTweety+4] = '(';
        Map[rowTweety+7][columnTweety+4] = '_';
        Map[rowTweety+8][columnTweety+4] = '|';
        Map[rowTweety+9][columnTweety+4] = '_';

        Map[rowTweety+1][columnTweety+5] = '-';
        Map[rowTweety+2][columnTweety+5] = ' ';
        Map[rowTweety+3][columnTweety+5] = ' ';
        Map[rowTweety+4][columnTweety+5] = '_';
        Map[rowTweety+5][columnTweety+5] = '(';
        Map[rowTweety+6][columnTweety+5] = '(';
        Map[rowTweety+7][columnTweety+5] = '_';
        Map[rowTweety+8][columnTweety+5] = '|';
        Map[rowTweety+9][columnTweety+5] = '|';

        rTweety = rowTweety + 9;
        cTweety = columnTweety + 5;

        Map[rTweety][cTweety] = 'S';

        Map[rowTweety+1][columnTweety+6] = ',';
        Map[rowTweety+2][columnTweety+6] = ' ';
        Map[rowTweety+3][columnTweety+6] = ' ';
        Map[rowTweety+4][columnTweety+6] = ')';
        Map[rowTweety+5][columnTweety+6] = '_';
        Map[rowTweety+6][columnTweety+6] = '_';
        Map[rowTweety+7][columnTweety+6] = '(';
        Map[rowTweety+8][columnTweety+6] = '|';
        Map[rowTweety+9][columnTweety+6] = '_';


        Map[rowTweety+1][columnTweety+7] = ' ';
        Map[rowTweety+2][columnTweety+7] = '\\';
        Map[rowTweety+3][columnTweety+7] = '/';
        Map[rowTweety+4][columnTweety+7] = ' ';
        Map[rowTweety+5][columnTweety+7] = ' ';
        Map[rowTweety+6][columnTweety+7] = '`';
        Map[rowTweety+7][columnTweety+7] = '/';
        Map[rowTweety+8][columnTweety+7] = '_';
        Map[rowTweety+9][columnTweety+7] = '_';


        Map[rowTweety+1][columnTweety+8] = ' ';
        Map[rowTweety+2][columnTweety+8] = ' ';
        Map[rowTweety+3][columnTweety+8] = ' ';
        Map[rowTweety+4][columnTweety+8] = ' ';
        Map[rowTweety+5][columnTweety+8] = ' ';
        Map[rowTweety+6][columnTweety+8] = ')';
        Map[rowTweety+7][columnTweety+8] = '-';
        Map[rowTweety+8][columnTweety+8] = '_';
        Map[rowTweety+9][columnTweety+8] = ')';



        Map[rowTweety+1][columnTweety+9] = ' ';
        Map[rowTweety+2][columnTweety+9] = ' ';
        Map[rowTweety+3][columnTweety+9] = ' ';
        Map[rowTweety+4][columnTweety+9] = ' ';
        Map[rowTweety+5][columnTweety+9] = ' ';
        Map[rowTweety+6][columnTweety+9] = '_';
        Map[rowTweety+7][columnTweety+9] = '"';
        Map[rowTweety+8][columnTweety+9] = ' ';
        Map[rowTweety+9][columnTweety+9] = ')';

        Map[rowTweety+1][columnTweety+10] = ' ';
        Map[rowTweety+2][columnTweety+10] = ' ';
        Map[rowTweety+3][columnTweety+10] = ' ';
        Map[rowTweety+4][columnTweety+10] = ' ';
        Map[rowTweety+5][columnTweety+10] = ' ';
        Map[rowTweety+6][columnTweety+10] = ',';
        Map[rowTweety+7][columnTweety+10] = ' ';
        Map[rowTweety+8][columnTweety+10] = ' ';
        Map[rowTweety+9][columnTweety+10] = ' ';
    }

    if (FlagLookRight == 1)
    {

        Map[rowTweety+1][columnTweety+1]= ' ';
        Map[rowTweety+2][columnTweety+1] = ' ';
        Map[rowTweety+3][columnTweety+1] = ' ';
        Map[rowTweety+4][columnTweety+1] = ' ';
        Map[rowTweety+5][columnTweety+1] = ' ';
        Map[rowTweety+6][columnTweety+1] = ',';
        Map[rowTweety+7][columnTweety+1] = ' ';
        Map[rowTweety+8][columnTweety+1] = ' ';
        Map[rowTweety+9][columnTweety+1] = ' ';



        Map[rowTweety+1][columnTweety+2] = ' ';
        Map[rowTweety+2][columnTweety+2] = ' ';
        Map[rowTweety+3][columnTweety+2] = ' ';
        Map[rowTweety+4][columnTweety+2] = ' ';
        Map[rowTweety+5][columnTweety+2] = ' ';
        Map[rowTweety+6][columnTweety+2] = '_';
        Map[rowTweety+7][columnTweety+2] = '"';
        Map[rowTweety+8][columnTweety+2] = ' ';
        Map[rowTweety+9][columnTweety+2] = '(';



        Map[rowTweety+1][columnTweety+3] = ' ';
        Map[rowTweety+2][columnTweety+3] = ' ';
        Map[rowTweety+3][columnTweety+3] = ' ';
        Map[rowTweety+4][columnTweety+3] = ' ';
        Map[rowTweety+5][columnTweety+3] = ' ';
        Map[rowTweety+6][columnTweety+3] = '(';
        Map[rowTweety+7][columnTweety+3] = '-';
        Map[rowTweety+8][columnTweety+3] = '_';
        Map[rowTweety+9][columnTweety+3] = '(';


        Map[rowTweety+1][columnTweety+4] = ' ';
        Map[rowTweety+2][columnTweety+4] = '/';
        Map[rowTweety+3][columnTweety+4] = '\\';
        Map[rowTweety+4][columnTweety+4] = ' ';
        Map[rowTweety+5][columnTweety+4] = ' ';
        Map[rowTweety+6][columnTweety+4] = '`';
        Map[rowTweety+7][columnTweety+4] = '\\';
        Map[rowTweety+8][columnTweety+4] = '_';
        Map[rowTweety+9][columnTweety+4] = '_';


 
        Map[rowTweety+1][columnTweety+5]= '.';
        Map[rowTweety+2][columnTweety+5] = ' ';
        Map[rowTweety+3][columnTweety+5] = ' ';
        Map[rowTweety+4][columnTweety+5] = '(';
        Map[rowTweety+5][columnTweety+5] = '_';
        Map[rowTweety+6][columnTweety+5] = '_';
        Map[rowTweety+7][columnTweety+5] = ')';
        Map[rowTweety+8][columnTweety+5] = '|';
        Map[rowTweety+9][columnTweety+5] = '_';


        Map[rowTweety+1][columnTweety+6] = '-';
        Map[rowTweety+2][columnTweety+6] = ' ';
        Map[rowTweety+3][columnTweety+6] = ' ';
        Map[rowTweety+4][columnTweety+6] = '_';
        Map[rowTweety+5][columnTweety+6] = ')';
        Map[rowTweety+6][columnTweety+6] = ')';
        Map[rowTweety+7][columnTweety+6] = '_';
        Map[rowTweety+8][columnTweety+6] = '|';
        Map[rowTweety+9][columnTweety+6] = '|'; // MOVEMENT ROW & COLUMN

        rTweety = rowTweety + 9;
        cTweety = columnTweety + 6;

        Map[rTweety][cTweety] = 'S';


        Map[rowTweety+1][columnTweety+7] = '"';
        Map[rowTweety+2][columnTweety+7] = '-';
        Map[rowTweety+3][columnTweety+7] = '@';
        Map[rowTweety+4][columnTweety+7] = ' ';
        Map[rowTweety+5][columnTweety+7] = '(';
        Map[rowTweety+6][columnTweety+7] = ')';
        Map[rowTweety+7][columnTweety+7] = '_';
        Map[rowTweety+8][columnTweety+7] = '|';
        Map[rowTweety+9][columnTweety+7] = '_';


        Map[rowTweety+1][columnTweety+8] = '-';
        Map[rowTweety+2][columnTweety+8] =  ' ';
        Map[rowTweety+3][columnTweety+8] =  ' ';
        Map[rowTweety+4][columnTweety+8] =  '=';
        Map[rowTweety+5][columnTweety+8] =  '`';
        Map[rowTweety+6][columnTweety+8] =  '\\';
        Map[rowTweety+7][columnTweety+8] =  '/';
        Map[rowTweety+8][columnTweety+8] =  '_';
        Map[rowTweety+9][columnTweety+8] =  '_';



        Map[rowTweety+1][columnTweety+9] = '.';
        Map[rowTweety+2][columnTweety+9] = '-';
        Map[rowTweety+3][columnTweety+9] = '@';
        Map[rowTweety+4][columnTweety+9] = '_';
        Map[rowTweety+5][columnTweety+9] = ' ';
        Map[rowTweety+6][columnTweety+9] = ' ';
        Map[rowTweety+7][columnTweety+9] = ' ';
        Map[rowTweety+8][columnTweety+9] = '_';
        Map[rowTweety+9][columnTweety+9] = ')';


        Map[rowTweety+1][columnTweety+10] = ' ';
        Map[rowTweety+2][columnTweety+10] = '\\';
        Map[rowTweety+3][columnTweety+10] = '/';
        Map[rowTweety+4][columnTweety+10] = ')';
        Map[rowTweety+5][columnTweety+10] = ' ';
        Map[rowTweety+6][columnTweety+10] = ' ';
        Map[rowTweety+7][columnTweety+10] = ' ';
        Map[rowTweety+8][columnTweety+10] = '_';
        Map[rowTweety+9][columnTweety+10] = ')';
    }
    
}


void MoveTweety (char Map[][500] , char &UserMove , int &rTweety , int &cTweety , int &IndR , int &IndC , int &FlagJump , int &FlagLookLeft , int &FlagLookRight , int &MapColStart , int & MapColEnd , int &MapRowStart , int &MapRowEnd ,int &FlagLadderFloorAboveTraps1stLevel , int &ActivateSingleBullet , int &ActivateMultipleBullet , int &FlagJumpRight , int &FlagJumpLeft , int &Health , int MOVE , int DirectionBat , int &ActivateDiagBullet)
{


    //SUICIDE
    if (UserMove == '9')
    {
        Health = 0;
    }

    //EXIT

    if (UserMove == 'e' && IndC > 400)
    {
        rTweety -=6;
        IndR -=6;

        MapRowStart -=6;
        MapRowEnd -=6;
    }



    //JUMP
    if (UserMove == ' ' && FlagLadderFloorAboveTraps1stLevel == 0)
    {
        FlagJump = 1;
    }


    if (UserMove == 'm')
    {
        FlagJumpRight = 1;
    }

    if (UserMove == 'n')
    {
        FlagJumpLeft = 1;
    }

    //MOVE RIGHT
    if (UserMove == 'd' && Map[IndR][IndC+5] == ' '&& Map[IndR][IndC+6] == ' ' && FlagLadderFloorAboveTraps1stLevel == 0 && Map[IndR - 1][IndC+5] == ' '&& Map[IndR - 1][IndC+6] == ' ' && Map[IndR - 2][IndC+5] == ' '&& Map[IndR - 2][IndC+6] == ' ' && Map[IndR - 3][IndC+6] == ' ' && Map[IndR - 4][IndC+5] == ' '&& Map[IndR - 4][IndC+6] == ' ' && Map[IndR - 5][IndC+5] == ' '&& Map[IndR - 5][IndC+6] == ' ' && Map[IndR - 6][IndC+5] == ' '&& Map[IndR - 6][IndC+6] == ' ' && Map[IndR - 7][IndC+5] == ' '&& Map[IndR - 7][IndC+6] == ' ')
    {
        cTweety +=3;
        IndC +=3;

        if (MapColEnd < 501)
        {
        MapColStart +=3;
        MapColEnd +=3;
        }

        FlagLookRight = 1;
        FlagLookLeft = 0;
    }

    //MOVE LEFT
    if (UserMove == 'a' && Map[IndR][IndC-5] == ' '&& Map[IndR][IndC-6] == ' ' && FlagLadderFloorAboveTraps1stLevel == 0 && Map[IndR - 1][IndC - 5] == ' '&& Map[IndR - 1][IndC - 6] == ' ' && Map[IndR - 2][IndC - 5] == ' '&& Map[IndR - 2][IndC - 6] == ' ' && Map[IndR - 3][IndC - 6] == ' ' && Map[IndR - 4][IndC - 5] == ' '&& Map[IndR - 4][IndC - 6] == ' ' && Map[IndR - 5][IndC - 5] == ' '&& Map[IndR - 5][IndC - 6] == ' ' && Map[IndR - 6][IndC - 5] == ' '&& Map[IndR - 6][IndC - 6] == ' ' && Map[IndR - 7][IndC - 5] == ' '&& Map[IndR - 7][IndC - 6] == ' ')
    {
        cTweety -=3;
        IndC -=3;

        if (MapColStart > 5)
        {
        MapColStart -=3;
        MapColEnd -=3;
        }

        FlagLookLeft = 1;
        FlagLookRight = 0;
    }

    //BAT EXCEPTION
    if (DirectionBat == 0 && UserMove == '.') 
    {
        cTweety -=3;
        IndC -=3;

        MapColStart -=3;
        MapColEnd -=3;

        FlagLookLeft = 1;
        FlagLookRight = 0;
    }

    if (DirectionBat == 0 && UserMove == '/') 
    {
        cTweety +=3;
        IndC +=3;

        MapColStart +=3;
        MapColEnd +=3;

        FlagLookLeft = 0;
        FlagLookRight = 1;
    }



    //  *************************************************
    //  *************************************************
    //LADDER 1st FLOOR EXCEPTION
    if (UserMove == 'd' && FlagLadderFloorAboveTraps1stLevel == 1)
    {
        cTweety +=3;
        IndC +=3;


        MapColStart +=3;
        MapColEnd +=3;


        FlagLookRight = 1;
        FlagLookLeft = 0;
    }
    if (UserMove == 'a' && FlagLadderFloorAboveTraps1stLevel == 1)
    {
        cTweety -=3;
        IndC -=3;

        MapColStart -=3;
        MapColEnd -=3;

        FlagLookLeft = 1;
        FlagLookRight = 0;
    }

    if (UserMove == 'w' && FlagLadderFloorAboveTraps1stLevel == 1)
    {
        rTweety -=2;
        IndR -=2;

        MapRowStart -=2;
        MapRowEnd -=2;
    }

    if (UserMove == 's' && FlagLadderFloorAboveTraps1stLevel == 1 && IndR < 277)
    {
        rTweety +=2;
        IndR +=2;

        MapRowStart +=2;
        MapRowEnd +=2;
    }

    if (UserMove == 'y')
    {
        ActivateSingleBullet = 1;
    }

    if (UserMove == 'r')
    {
        ActivateDiagBullet = 1;
    }

    if (UserMove == 't')
    {
        ActivateMultipleBullet = 1;
    }


//MOVE RIGHT
    if (UserMove == 'x' && IndR  < 250)
    {
        cTweety +=15;
        IndC +=15;


        MapColStart +=15;
        MapColEnd +=15;


        FlagLookRight = 1;
        FlagLookLeft = 0;
    }

    //MOVE LEFT
    if (UserMove == 'z' && IndR < 250)
    {
        cTweety -=15;
        IndC -=15;

        MapColStart -=15;
        MapColEnd -=15;

        FlagLookLeft = 1;
        FlagLookRight = 0;
    }


    if(UserMove == '8')
    {
        MapRowStart -=10;
        MapRowEnd -=10;
    }

    if(UserMove == '5')
    {
        MapRowStart +=10;
        MapRowEnd +=10;
    }

    if(UserMove == '6')
    {
        MapColStart +=10;
        MapColEnd +=10;
    }

    if(UserMove == '4')
    {
        MapColStart -=10;
        MapColEnd -=10;
    }

    UserMove = '-';

}   

void TweetysHealthDamage(char Map[][500] , int IndR , int IndC , int &TweetyHP , int &FlagCheckPoint)
{
    // TRAPS FIRST FLOOR
    if(Map[IndR+1][IndC] == '^')
    {
        TweetyHP -=3;
    }
    
}

void IndicateTweetyHealth(char Map[][500] , int rowStart , int colStart , int &TweetyHP , int &Lives , int &FlagGameOver , int FlagCheckPoint , int &rTweety , int &cTweety , int &IndR , int &IndC , int &MapRowStart , int &MapRowEnd , int &MapColStart , int &MapColEnd , int &Timer)
{
    int constant = 5;
    if (TweetyHP >= 93)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '1';
        Map[rowStart + 3][colStart + constant++] = '0';
        Map[rowStart + 3][colStart + constant++] = '0';
    }

    if (TweetyHP < 93 && TweetyHP >= 85)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '9';
        Map[rowStart + 3][colStart + constant++] = '3';
    }

    if (TweetyHP < 85 && TweetyHP >= 78)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '8';
        Map[rowStart + 3][colStart + constant++] = '5';
    }

    if (TweetyHP < 78 && TweetyHP >= 71)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '7';
        Map[rowStart + 3][colStart + constant++] = '8';
    }

    if (TweetyHP < 71 && TweetyHP >= 64)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '7';
        Map[rowStart + 3][colStart + constant++] = '1';
    }

    if (TweetyHP < 64 && TweetyHP >= 57)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '6';
        Map[rowStart + 3][colStart + constant++] = '4';
    }

    if (TweetyHP < 57 && TweetyHP >= 50)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '5';
        Map[rowStart + 3][colStart + constant++] = '7';
    }

    if (TweetyHP < 50 && TweetyHP >= 43)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '5';
        Map[rowStart + 3][colStart + constant++] = '0';
    }

    if (TweetyHP < 43 && TweetyHP >= 35)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '4';
        Map[rowStart + 3][colStart + constant++] = '3';
    }

    if (TweetyHP < 35 && TweetyHP >= 28)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '3';
        Map[rowStart + 3][colStart + constant++] = '5';
    }

    if (TweetyHP < 28 && TweetyHP >= 21)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '2';
        Map[rowStart + 3][colStart + constant++] = '8';
    }

    if (TweetyHP < 21 && TweetyHP >= 14)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '2';
        Map[rowStart + 3][colStart + constant++] = '1';
    }

    if (TweetyHP < 14 && TweetyHP >= 5)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '1';
        Map[rowStart + 3][colStart + constant++] = '4';
    }

    if (TweetyHP < 5 && TweetyHP > 0)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '5';
    }

    if (TweetyHP <= 0)
    {
        Map[rowStart + 3][colStart + constant++] = 'T';
        Map[rowStart + 3][colStart + constant++] = 'w';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'y';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = 'H';
        Map[rowStart + 3][colStart + constant++] = 'e';
        Map[rowStart + 3][colStart + constant++] = 'a';
        Map[rowStart + 3][colStart + constant++] = 'l';
        Map[rowStart + 3][colStart + constant++] = 't';
        Map[rowStart + 3][colStart + constant++] = 'h';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ':';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = ' ';
        Map[rowStart + 3][colStart + constant++] = '0';
    }

    if (TweetyHP <= 0 && FlagCheckPoint == 1)
    {
        rTweety = 270;
        cTweety = 17;
        IndR = rTweety + 9;
        IndC = cTweety + 5;

        MapRowStart = rTweety - 25;
        MapRowEnd = MapRowStart + 40; 
        MapColStart = cTweety - 10;
        MapColEnd = MapColStart + 150;
        


        TweetyHP = 100;
        Lives --;
    }


    if (TweetyHP <= 0 && FlagCheckPoint == 2)
    {
        rTweety = 220;
        cTweety = 365;
        IndR = rTweety + 9;
        IndC = cTweety + 5;


        MapRowStart = rTweety - 25;
        MapRowEnd = MapRowStart + 40; 
        MapColStart = cTweety - 110;
        MapColEnd = MapColStart + 150;
        

        TweetyHP = 100;
        Lives --;
    }

    if (TweetyHP <= 0 && FlagCheckPoint == 3)
    {
        rTweety = 155;
        cTweety = 14;
        IndR = rTweety + 9;
        IndC = cTweety + 5;

        MapRowStart = rTweety - 25;
        MapRowEnd = MapRowStart + 40; 
        MapColStart = cTweety - 10;
        MapColEnd = MapColStart + 150;
        


        TweetyHP = 100;
        Lives --;
    }

    constant = 5;

    if (Lives == 3)
    {
        Map[rowStart + 4][colStart + constant++] = 'L';
        Map[rowStart + 4][colStart + constant++] = 'i';
        Map[rowStart + 4][colStart + constant++] = 'v';
        Map[rowStart + 4][colStart + constant++] = 'e';
        Map[rowStart + 4][colStart + constant++] = 's';
        Map[rowStart + 4][colStart + constant++] = ' ';
        Map[rowStart + 4][colStart + constant++] = 234;
        Map[rowStart + 4][colStart + constant++] = 234;
        Map[rowStart + 4][colStart + constant++] = 234;
    }

    if (Lives == 2)
    {
        Map[rowStart + 4][colStart + constant++] = 'L';
        Map[rowStart + 4][colStart + constant++] = 'i';
        Map[rowStart + 4][colStart + constant++] = 'v';
        Map[rowStart + 4][colStart + constant++] = 'e';
        Map[rowStart + 4][colStart + constant++] = 's';
        Map[rowStart + 4][colStart + constant++] = ' ';
        Map[rowStart + 4][colStart + constant++] = 234;
        Map[rowStart + 4][colStart + constant++] = 234;
        Map[rowStart + 4][colStart + constant++] = ' ';
    }

    if (Lives == 1)
    {
        Map[rowStart + 4][colStart + constant++] = 'L';
        Map[rowStart + 4][colStart + constant++] = 'i';
        Map[rowStart + 4][colStart + constant++] = 'v';
        Map[rowStart + 4][colStart + constant++] = 'e';
        Map[rowStart + 4][colStart + constant++] = 's';
        Map[rowStart + 4][colStart + constant++] = ' ';
        Map[rowStart + 4][colStart + constant++] = 234;
        Map[rowStart + 4][colStart + constant++] = ' ';
        Map[rowStart + 4][colStart + constant++] = ' ';
    }

    if (Lives <= 0)
    {
        FlagGameOver = 1;
    }

    constant = 5;
    if (FlagCheckPoint == 2 && Timer % 2 == 0)
    {
        
        Map[rowStart + 5][colStart + constant++] = 'S';
        Map[rowStart + 5][colStart + constant++] = 'i';
        Map[rowStart + 5][colStart + constant++] = 'n';
        Map[rowStart + 5][colStart + constant++] = 'g';
        Map[rowStart + 5][colStart + constant++] = 'l';
        Map[rowStart + 5][colStart + constant++] = 'e';
        Map[rowStart + 5][colStart + constant++] = ' ';
        Map[rowStart + 5][colStart + constant++] = 'B';
        Map[rowStart + 5][colStart + constant++] = 'u';
        Map[rowStart + 5][colStart + constant++] = 'l';
        Map[rowStart + 5][colStart + constant++] = 'l';
        Map[rowStart + 5][colStart + constant++] = 'e';
        Map[rowStart + 5][colStart + constant++] = 't';
        Map[rowStart + 5][colStart + constant++] = ' ';
        Map[rowStart + 5][colStart + constant++] = 'A';
        Map[rowStart + 5][colStart + constant++] = 'c';
        Map[rowStart + 5][colStart + constant++] = 't';
        Map[rowStart + 5][colStart + constant++] = 'i';
        Map[rowStart + 5][colStart + constant++] = 'v';
        Map[rowStart + 5][colStart + constant++] = 'a';
        Map[rowStart + 5][colStart + constant++] = 't';
        Map[rowStart + 5][colStart + constant++] = 'e';
        Map[rowStart + 5][colStart + constant++] = 'd';

    }

    constant = 5;
    if (FlagCheckPoint == 3)
    {
        Map[rowStart + 5][colStart + constant++] = 'S';
        Map[rowStart + 5][colStart + constant++] = 'i';
        Map[rowStart + 5][colStart + constant++] = 'n';
        Map[rowStart + 5][colStart + constant++] = 'g';
        Map[rowStart + 5][colStart + constant++] = 'l';
        Map[rowStart + 5][colStart + constant++] = 'e';
        Map[rowStart + 5][colStart + constant++] = ' ';
        Map[rowStart + 5][colStart + constant++] = 'B';
        Map[rowStart + 5][colStart + constant++] = 'u';
        Map[rowStart + 5][colStart + constant++] = 'l';
        Map[rowStart + 5][colStart + constant++] = 'l';
        Map[rowStart + 5][colStart + constant++] = 'e';
        Map[rowStart + 5][colStart + constant++] = 't';
        Map[rowStart + 5][colStart + constant++] = ' ';
        Map[rowStart + 5][colStart + constant++] = 'A';
        Map[rowStart + 5][colStart + constant++] = 'c';
        Map[rowStart + 5][colStart + constant++] = 't';
        Map[rowStart + 5][colStart + constant++] = 'i';
        Map[rowStart + 5][colStart + constant++] = 'v';
        Map[rowStart + 5][colStart + constant++] = 'a';
        Map[rowStart + 5][colStart + constant++] = 't';
        Map[rowStart + 5][colStart + constant++] = 'e';
        Map[rowStart + 5][colStart + constant++] = 'd';

        constant = 5;
        Map[rowStart + 6][colStart + constant++] = 'M';
        Map[rowStart + 6][colStart + constant++] = 'u';
        Map[rowStart + 6][colStart + constant++] = 'l';
        Map[rowStart + 6][colStart + constant++] = 't';
        Map[rowStart + 6][colStart + constant++] = 'i';
        Map[rowStart + 6][colStart + constant++] = 'p';
        Map[rowStart + 6][colStart + constant++] = 'l';
        Map[rowStart + 6][colStart + constant++] = 'e';
        Map[rowStart + 6][colStart + constant++] = ' ';
        Map[rowStart + 6][colStart + constant++] = 'B';
        Map[rowStart + 6][colStart + constant++] = 'u';
        Map[rowStart + 6][colStart + constant++] = 'l';
        Map[rowStart + 6][colStart + constant++] = 'l';
        Map[rowStart + 6][colStart + constant++] = 'e';
        Map[rowStart + 6][colStart + constant++] = 't';
        Map[rowStart + 6][colStart + constant++] = ' ';
        Map[rowStart + 6][colStart + constant++] = 'A';
        Map[rowStart + 6][colStart + constant++] = 'c';
        Map[rowStart + 6][colStart + constant++] = 't';
        Map[rowStart + 6][colStart + constant++] = 'i';
        Map[rowStart + 6][colStart + constant++] = 'v';
        Map[rowStart + 6][colStart + constant++] = 'a';
        Map[rowStart + 6][colStart + constant++] = 't';
        Map[rowStart + 6][colStart + constant++] = 'e';
        Map[rowStart + 6][colStart + constant++] = 'd';

    }
    
}



//JUMP n GRAVITY

void JumpTweety(char Map[][500] ,int &FlagJump , int &rHero , int &IndR , int &IndC , int &ctJump , int &rowMapStart , int &rowMapEnd , int &JumpAgain)
{
    if (FlagJump == 1 && ctJump < 7)
    {
        int X = 1;


        rHero--;
        IndR--;
        ctJump++;

        
        rowMapStart--;
        rowMapEnd --;
    
    }

    if (ctJump == 7)
    {
        FlagJump = 0;
    }


    if(Map[IndR-9][IndC] != ' ' || Map[IndR-9][IndC-1] != ' ' || Map[IndR-9][IndC-2] != ' ' || Map[IndR-9][IndC-3] != ' ' || Map[IndR-9][IndC-4] != ' ' || Map[IndR-9][IndC+1] != ' '|| Map[IndR-9][IndC+2] != ' '|| Map[IndR-9][IndC+3] != ' '|| Map[IndR-9][IndC+4] != ' ')
    {
        ctJump = 7;
        
    }

}

void GravityTweety(char Map[][500] , int &rTweety ,int &IndR , int IndC , int &ctJump , int &JumpAgain , int &rowMapBorderStart , int &rowMapBorderEnd)
{
    if (ctJump == 7 || ctJump == 0)
    {
        if(Map[IndR+1][IndC] == ' ' && Map[IndR+1][IndC-1] == ' ' && Map[IndR+1][IndC-2] == ' ' && Map[IndR+1][IndC-3] == ' ' && Map[IndR+1][IndC-4] == ' ' && Map[IndR+1][IndC+1] == ' '&& Map[IndR+1][IndC+2] == ' '&& Map[IndR+1][IndC+3] == ' '&& Map[IndR+1][IndC+4] == ' ')
        {
            rTweety++;
            IndR ++;
            JumpAgain++;

            rowMapBorderStart ++;
            rowMapBorderEnd++;
        }
    }


        if(Map[IndR + 1][IndC] != ' '  || Map[IndR + 1][IndC-1] != ' '  || Map[IndR + 1][IndC-2] != ' '  || Map[IndR + 1][IndC-3] != ' '  || Map[IndR + 1][IndC-4] != ' '  || Map[IndR + 1][IndC+1] != ' ' || Map[IndR + 1][IndC+2] != ' ' || Map[IndR + 1][IndC+3] != ' ' || Map[IndR + 1][IndC+4] != ' ')
        {
            ctJump = 0;
            JumpAgain = 0;
        }


}

void JumpLeft(char Map[][500] ,int &FlagJump , int &rHero , int &cHero , int &IndR , int &IndC , int &ctJump , int &rowMapStart , int &rowMapEnd , int &JumpAgain , int &colMapStart , int &colMapEnd)
{
    if (FlagJump == 1 && ctJump < 7)
    {
        int X = 1;


        rHero--;
        IndR--;
        cHero -=2;
        IndC -=2;
        ctJump++;

        
        rowMapStart--;
        rowMapEnd --;

        
        colMapStart -=2;
        colMapEnd -=2;
    
    }

    if (ctJump == 7)
    {
        FlagJump = 0;
    }


    if(Map[IndR-10][IndC] != ' ' || Map[IndR-10][IndC-1] != ' ' || Map[IndR-10][IndC-2] != ' ' || Map[IndR-10][IndC-3] != ' ' || Map[IndR-10][IndC-4] != ' ' || Map[IndR-10][IndC+1] != ' '|| Map[IndR-10][IndC+2] != ' '|| Map[IndR-10][IndC+3] != ' '|| Map[IndR-10][IndC+4] != ' ')
    {
        ctJump = 7;
        
    }

}
void JumpRight(char Map[][500] ,int &FlagJump , int &rHero , int &cHero, int &IndR , int &IndC , int &ctJump , int &rowMapStart , int &rowMapEnd , int &JumpAgain , int &colMapStart , int &colMapEnd)
{
    if (FlagJump == 1 && ctJump < 7)
    {
        int X = 1;


        rHero--;
        IndR--;
        cHero+=2;
        IndC+=2;
        ctJump++;

        
        rowMapStart--;
        rowMapEnd --;

        colMapStart +=2;
        colMapEnd +=2;
    
    }

    if (ctJump == 7)
    {
        FlagJump = 0;
    }


    if(Map[IndR-10][IndC] != ' ' || Map[IndR-10][IndC-1] != ' ' || Map[IndR-10][IndC-2] != ' ' || Map[IndR-10][IndC-3] != ' ' || Map[IndR-10][IndC-4] != ' ' || Map[IndR-10][IndC+1] != ' '|| Map[IndR-10][IndC+2] != ' '|| Map[IndR-10][IndC+3] != ' '|| Map[IndR-10][IndC+4] != ' ')
    {
        ctJump = 7;
        
    }

}

// TRAPS
void Traps1stFloor(char Map[][500])
{

    for (int rowTraps = 278 ; rowTraps < 280 ; rowTraps++)
    {
        
        for (int columnTraps1stFloor = 81; columnTraps1stFloor < 95 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 181;
        }


        for (int columnTraps1stFloor = 80 ; columnTraps1stFloor < 94 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 198;
        }
    }


    for (int rowTraps = 278 ; rowTraps < 280 ; rowTraps++)
    {
        for (int columnTraps1stFloor = 81+35 ; columnTraps1stFloor < 95+35 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 181;
        }

        for (int columnTraps1stFloor = 80+35 ; columnTraps1stFloor < 94+35 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 198;
        }
    }


    for (int rowTraps = 278 ; rowTraps < 280 ; rowTraps++)
    {
        for (int columnTraps1stFloor = 81+70 ; columnTraps1stFloor < 95+70 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 181;
        }

        for (int columnTraps1stFloor = 80+70 ; columnTraps1stFloor < 94+70 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 198;
        }
    }



    for (int rowTraps = 278 ; rowTraps < 280 ; rowTraps++)
    {
        for (int columnTraps1stFloor = 81+105 ; columnTraps1stFloor < 95+105 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^';
            Map[rowTraps][columnTraps1stFloor] = 181;
        }

        for (int columnTraps1stFloor = 80+105 ; columnTraps1stFloor < 94+105 ; columnTraps1stFloor+=2)
        {
            Map[277][columnTraps1stFloor] = '^'; 
            Map[rowTraps][columnTraps1stFloor] = 198;
        }
    }

    
} 


void StairToFloorAboveTraps1stLevel(char Map[][500] , int &IndR , int &IndC , int &FlagLadder)
{
    //LADDER DESIGN
    for (int rowStair = 257 ; rowStair < 280 ; rowStair++)
    {
        Map[rowStair][55] = 204;
    }

    for (int rowStair = 257 ; rowStair < 280 ; rowStair++)
    {
        Map[rowStair][56] = '=';
    }

    for (int rowStair = 257 ; rowStair < 280 ; rowStair++)
    {
        Map[rowStair][57] = 205;
    }

    for (int rowStair = 257 ; rowStair < 280 ; rowStair++)
    {
        Map[rowStair][58] = 205;
    }

    for (int rowStair = 257 ; rowStair < 280 ; rowStair++)
    {
        Map[rowStair][59] = '=';
    }

    for (int rowStair = 257 ; rowStair < 280 ; rowStair++)
    {
        Map[rowStair][60] = 185;
    }

    //LADDER CLIMB
    if ((IndR > 255) && ((IndC + 5 > 54 && IndC + 5 < 62) || (IndC - 5 > 54 && IndC - 5 < 62)))
    {
        FlagLadder = 1;
    }
    else 
    {
        FlagLadder = 0;
    }


}

void FloorAboveTraps1stFloor(char Map[][500])
{
    for (int columnFloorAboveTraps = 61 ; columnFloorAboveTraps < 220 ; columnFloorAboveTraps++)
    {
        Map[257][columnFloorAboveTraps] = 219;
    }
}

void StairsAtEndOf1stFloor (char Map[][500])
{
    for (int row = 257 ; row < 262 ; row++)
    {
        Map[row][220] = 219;
    }
    
    for (int column = 220 ; column < 235 ; column++)
    {
        Map[262][column] = 219;
    }

    for (int row = 262 ; row < 267 ; row++)
    {
        Map[row][235] = 219;
    }

    for (int column = 235 ; column < 250 ; column++)
    {
        Map[267][column] = 219;
    }
}


// LASER BEAM
void DrawLaserAboveTraps1stFloor(char Map[][500] , int rowLaser , int columnLaser , int ActivateLaser , int IndR , int IndC , int &TweetyHP)
{

    if (ActivateLaser == 1)
    {
        Map[rowLaser + 1][columnLaser + 3] = 186;
        Map[rowLaser + 2][columnLaser + 3] = 186;
        Map[rowLaser + 3][columnLaser + 3] = 186;
        Map[rowLaser + 4][columnLaser + 3] = 186;
        Map[rowLaser + 5][columnLaser + 3] = 186;
        Map[rowLaser + 6][columnLaser + 3] = 186;
        Map[rowLaser + 7][columnLaser + 3] = 186;
        Map[rowLaser + 8][columnLaser + 3] = 186;
        Map[rowLaser + 9][columnLaser + 3] = 186;
        Map[rowLaser + 10][columnLaser + 3] = 186; // DAMAGE

        if (rowLaser + 11 == IndR - 8 && (columnLaser + 3 == IndC || columnLaser + 3 == IndC - 1 || columnLaser + 3 == IndC - 2 || columnLaser + 3 == IndC - 3 || columnLaser + 3 == IndC + 1 || columnLaser + 3 == IndC + 2 || columnLaser + 3 == IndC + 3))
        {
            TweetyHP-= 5;
        }

        Map[rowLaser + 11][columnLaser + 3] = 186;
        Map[rowLaser + 12][columnLaser + 3] = 186;
        Map[rowLaser + 13][columnLaser + 3] = 186;
        Map[rowLaser + 14][columnLaser + 3] = 186;
        Map[rowLaser + 15][columnLaser + 3] = 186;
        Map[rowLaser + 16][columnLaser + 3] = 186;
        Map[rowLaser + 17][columnLaser + 3] = 186;
        Map[rowLaser + 18][columnLaser + 3] = 186;
        Map[rowLaser + 19][columnLaser + 3] = 186;

    }
    
    Map[rowLaser][columnLaser] = 200;
    Map[rowLaser][columnLaser+1] = 205;
    Map[rowLaser][columnLaser+2] = 205;
    Map[rowLaser][columnLaser+3] = 205; // SHOOT
    Map[rowLaser][columnLaser+4] = 205;
    Map[rowLaser][columnLaser+5] = 205;
    Map[rowLaser][columnLaser+6] = 188;

    Map[rowLaser-1][columnLaser] = 196;
    Map[rowLaser-1][columnLaser+1] = 177;
    Map[rowLaser-1][columnLaser+2] = 177;
    Map[rowLaser-1][columnLaser+3] = 177;
    Map[rowLaser-1][columnLaser+4] = 177;
    Map[rowLaser-1][columnLaser+5] = 177;
    Map[rowLaser-1][columnLaser +6] = 196;

    Map[rowLaser-2][columnLaser] = 191;
    Map[rowLaser-2][columnLaser - 1] = 196;
    Map[rowLaser-2][columnLaser + 6] = 218;
    Map[rowLaser-2][columnLaser + 7] = 196;


    
}

void MoveLaserAboveTraps1stFloor(char Map [][500] ,int & IndR , int &IndC , int&rowLaser , int &columnLaser , int &FlagMoveLaser , int &ActivateLaser)
{

   
    if (IndC > columnLaser + 7)
    {
        ActivateLaser = 1;
    }

    if (IndC > 200)
    {
        ActivateLaser = 0;

    }

    if (columnLaser < 75)
    {
        ActivateLaser = 0;
        columnLaser+=2;
    }

    if (columnLaser + 3 < IndC && ActivateLaser == 1)
    {
        FlagMoveLaser = 1;
    }

    if ((columnLaser + 3 == IndC || columnLaser + 3 == IndC + 1 || columnLaser + 3 == IndC + 2 || columnLaser + 3 == IndC + 3 || columnLaser + 4 == IndC || columnLaser + 3 == IndC - 1 || columnLaser + 3 == IndC - 2 || columnLaser - 3 == IndC + 3 || columnLaser - 4 == IndC) && ActivateLaser == 1)
    {
        FlagMoveLaser = 0;
    }

    if (columnLaser + 3 > IndC && ActivateLaser == 1)
    {
        FlagMoveLaser = 2;
    }


    if (FlagMoveLaser == 1 && ActivateLaser == 1)
    {
        columnLaser +=2;
    }

    if (FlagMoveLaser == 2 && ActivateLaser == 1)
    {
        columnLaser -=2;
    }


}

void LaserBeam1stFloor(char Map[][500] , int&rowLaser , int &columnLaser , int&countLaser , int &DirectionLaser)
{

    if (countLaser == -1)
    {
        DirectionLaser *= -1;
    }

    if (countLaser == 0)
    {
        Map[rowLaser+1][columnLaser+3] = 186;
        countLaser+= DirectionLaser;

        if (DirectionLaser == -1)
        {
            Map[rowLaser+1][columnLaser + 3] = ' ';
        }
    }

    if (Map[rowLaser+2][columnLaser+3] != ' ')
    {
        DirectionLaser *=-1;
    }

    if (countLaser == 1)
    {
        Map[rowLaser+2][columnLaser+3] = 186;
        countLaser+= DirectionLaser;
    }

    if (Map[rowLaser+3][columnLaser+3] != ' ')
    {
        DirectionLaser *=-1;
    }

    if (countLaser == 2)
    {
        Map[rowLaser+3][columnLaser+3] = 186;
        countLaser+= DirectionLaser;
    }

    if (Map[rowLaser+4][columnLaser+3] != ' ')
    {
        DirectionLaser *=-1;
    }

    if (countLaser == 3)
    {
        Map[rowLaser+4][columnLaser+3] = 186;
        countLaser+= DirectionLaser;
    }

    if (Map[rowLaser+5][columnLaser+3] != ' ')
    {
        DirectionLaser *=-1;
    }

    if (countLaser == 4)
    {
        Map[rowLaser+5][columnLaser+3] = 186;
        countLaser+= DirectionLaser;
    }

    if (Map[rowLaser+6][columnLaser+3] != ' ')
    {
        DirectionLaser *=-1;
    }
    
}


// Trap

void MysteryTrap(char Map[][500] , int FlagTrap)
{

    if (FlagTrap == 0)
    {
        int constant = 20;

        Map[274][281 + constant] = '-';
        Map[274][282 + constant] = '-';
        Map[274][283 + constant] = '-';
        Map[274][284 + constant] = '-';
        Map[274][285 + constant] = '-';
        Map[274][286 + constant] = '-';

        Map[278][280 + constant] = 200;
        Map[278][281 + constant] = 205;
        Map[278][282 + constant] = 205;
        Map[278][283 + constant] = 205;
        Map[278][284 + constant] = 205;
        Map[278][285 + constant] = 205;
        Map[278][286 + constant] = 205;
        Map[278][287 + constant] = 188;
        Map[277][280 + constant] = 186;
        Map[277][281 + constant] = 177;
        Map[277][282 + constant] = 177;
        Map[277][283 + constant] = '?';
        Map[277][284 + constant] = '?';
        Map[277][285 + constant] = 177;
        Map[277][286 + constant] = 177;
        Map[277][287 + constant] = 186;    
        Map[276][287 + constant] = 186;
        Map[276][281 + constant] = 177;
        Map[276][282 + constant] = 177;
        Map[276][283 + constant] = '?';
        Map[276][284 + constant] = '?';
        Map[276][285 + constant] = 177;
        Map[276][286 + constant] = 177;
        Map[276][280 + constant] = 186;
        Map[275][281 + constant] = 205;
        Map[275][282 + constant] = 205;
        Map[275][283 + constant] = 205;
        Map[275][284 + constant] = 205;
        Map[275][285 + constant] = 205;
        Map[275][286 + constant] = 205;
        Map[275][280 + constant] = 201;
        Map[275][287 + constant] = 187;
    }


}

void DestroyMysteryTrap(char Map[][500] , int IndR , int IndC , int &Health , int &FlagTrap)
{
    if (Map[IndR+1][IndC] == '-' || Map[IndR+1][IndC + 1] == '-' || Map[IndR+1][IndC + 2] == '-' || Map[IndR+1][IndC - 1] == '-' || Map[IndR+1][IndC - 2] == '-')
    {
        Health = 0;
        FlagTrap = 1;
    }
}



//TELEPORT ZONE


void TeleportStart(char Map[][500] ,char &UserMove , int &rTweety , int &cTweety ,int &IndR , int &IndC , int &FlagTeleportActivation , int &MapRowStart , int &MapRowEnd , int &MapColStart , int &MapColEnd ,  float &Timer , int &FlagCheckPoint)
{

    int constant = 70;
    Map[279][380 + constant] = 176;
    Map[278][380 + constant] = 176;
    Map[277][380 + constant] = 176;
    Map[276][380 + constant] = 176;
    Map[275][380 + constant] = 176;
    Map[274][380 + constant] = 176;
    Map[273][380 + constant] = 176;
    Map[272][380 + constant] = 176;
    Map[271][380 + constant] = 176;

    Map[270][382 + constant] = 178;
    Map[270][381 + constant] = 178;
    Map[270][380 + constant] = 178;
    Map[270][379 + constant] = 178;
    Map[270][378 + constant] = 178;
    Map[270][377 + constant] = 178;
    Map[270][376 + constant] = 178;
    Map[270][375 + constant] = 178;
    Map[270][374 + constant] = 178;
    Map[270][373 + constant] = 178;
    Map[270][372 + constant] = 178;
    Map[270][371 + constant] = 178;
    Map[270][370 + constant] = 178;
    Map[270][369 + constant] = 178;
    Map[270][367 + constant] = 178;
    Map[270][368 + constant] = 178;
    Map[270][366 + constant] = 178;
    Map[270][365 + constant] = 178;
    Map[270][364 + constant] = 178;

    Map[269][380 + constant] = 178;
    Map[269][379 + constant] = 178;
    Map[269][378 + constant] = 178;
    Map[269][377 + constant] = 178;
    Map[269][376 + constant] = 178;
    Map[269][375 + constant] = 178;
    Map[269][374 + constant] = 178;
    Map[269][373 + constant] = 178;
    Map[269][372 + constant] = 178;
    Map[269][371 + constant] = 178;
    Map[269][370 + constant] = 178;
    Map[269][369 + constant] = 178;
    Map[269][367 + constant] = 178;
    Map[269][368 + constant] = 178;
    Map[269][366 + constant] = 178;

    Map[268][378 + constant] = 178;
    Map[268][377 + constant] = 178;
    Map[268][376 + constant] = 178;
    Map[268][375 + constant] = 178;
    Map[268][374 + constant] = 178;
    Map[268][373 + constant] = 178;
    Map[268][372 + constant] = 178;
    Map[268][371 + constant] = 178;
    Map[268][370 + constant] = 178;
    Map[268][369 + constant] = 178;
    Map[268][368 + constant] = 178;


    Map[267][369 + constant] = 191;
    Map[267][368 + constant] = 196;
    Map[266][367 + constant] = 179;

    Map[267][377 + constant] = 218;
    Map[267][378 + constant] = 196;    
    Map[266][379 + constant] = 179;


    Map[265][378 + constant] = 196;
    Map[265][377 + constant] = 196;
    Map[265][376 + constant] = 196;
    Map[265][375 + constant] = 196;
    Map[265][374 + constant] = 196;
    Map[265][373 + constant] = 196;
    Map[265][372 + constant] = 196;
    Map[265][371 + constant] = 196;
    Map[265][370 + constant] = 196;
    Map[265][369 + constant] = 196;
    Map[265][368 + constant] = 196;


    if (Timer == 0 || Timer == 0.5)
    {
        Map[266][376 + constant] = ' ';
        Map[266][375 + constant] = ' ';
        Map[266][374 + constant] = ' ';
        Map[266][373 + constant] = ' ';
        Map[266][372 + constant] = ' ';
        Map[266][371 + constant] = ' ';
        Map[266][370 + constant] = 'L';
    }

    if (Timer == 1 || Timer == 1.5)
    {
        Map[266][376 + constant] = ' ';
        Map[266][375 + constant] = ' ';
        Map[266][374 + constant] = ' ';
        Map[266][373 + constant] = ' ';
        Map[266][372 + constant] = ' ';
        Map[266][371 + constant] = 'O';
        Map[266][370 + constant] = 'L';
    }

    if (Timer == 2 || Timer == 2.5)
    {
        Map[266][376 + constant] = ' ';
        Map[266][375 + constant] = ' ';
        Map[266][374 + constant] = ' ';
        Map[266][373 + constant] = ' ';
        Map[266][372 + constant] = 'A';
        Map[266][371 + constant] = 'O';
        Map[266][370 + constant] = 'L';
    }

    if (Timer == 3 || Timer == 3.5)
    {
        Map[266][376 + constant] = ' ';
        Map[266][375 + constant] = ' ';
        Map[266][374 + constant] = ' ';
        Map[266][373 + constant] = 'D';
        Map[266][372 + constant] = 'A';
        Map[266][371 + constant] = 'O';
        Map[266][370 + constant] = 'L';
    }

    if (Timer == 4 || Timer == 4.5)
    {
        Map[266][376 + constant] = ' ';
        Map[266][375 + constant] = ' ';
        Map[266][374 + constant] = 'I';
        Map[266][373 + constant] = 'D';
        Map[266][372 + constant] = 'A';
        Map[266][371 + constant] = 'O';
        Map[266][370 + constant] = 'L';
    }

    if (Timer == 5 || Timer == 5.5)
    {
        Map[266][376 + constant] = ' ';
        Map[266][375 + constant] = 'N';
        Map[266][374 + constant] = 'I';
        Map[266][373 + constant] = 'D';
        Map[266][372 + constant] = 'A';
        Map[266][371 + constant] = 'O';
        Map[266][370 + constant] = 'L';
    }

    if (Timer >= 6)
    {
        Map[266][376 + constant] = 'G';
        Map[266][375 + constant] = 'N';
        Map[266][374 + constant] = 'I';
        Map[266][373 + constant] = 'D';
        Map[266][372 + constant] = 'A';
        Map[266][371 + constant] = 'O';
        Map[266][370 + constant] = 'L';
    }
    

    if (IndC > 363 + constant && IndC < 380 + constant)
    {
        FlagTeleportActivation = 1;
        Timer += 0.5; 
    }

    if (FlagTeleportActivation == 1 && Timer == 8)
    {
            rTweety = 220;
            cTweety = 365;
            IndR = rTweety + 9;
            IndC = cTweety + 5;


            MapRowStart = rTweety - 25;
            MapRowEnd = MapRowStart + 40; 
            MapColStart = cTweety - 110;
            MapColEnd = MapColStart + 150;

            FlagCheckPoint = 2;
            FlagTeleportActivation = 0;
    }

    else 
    {
        FlagTeleportActivation = 0;
    }


}

void TeleportEnd (char Map[][500])
{


    int constant = 50;
    Map[279 - constant][381] = 176;
    Map[278 - constant][381] = 176;
    Map[277 - constant][381] = 176;
    Map[276 - constant][381] = 176;
    Map[275 - constant][381] = 176;
    Map[274 - constant][381] = 176;
    Map[273 - constant][381] = 176;
    Map[272 - constant][381] = 176;
    Map[271 - constant][381] = 176;

    Map[270 - constant][382] = 178;
    Map[270 - constant][381] = 178;
    Map[270 - constant][380] = 178;
    Map[270 - constant][379] = 178;
    Map[270 - constant][378] = 178;
    Map[270 - constant][377] = 178;
    Map[270 - constant][376] = 178;
    Map[270 - constant][375] = 178;
    Map[270 - constant][374] = 178;
    Map[270 - constant][373] = 178;
    Map[270 - constant][372] = 178;
    Map[270 - constant][371] = 178;
    Map[270 - constant][370] = 178;
    Map[270 - constant][369] = 178;
    Map[270 - constant][367] = 178;
    Map[270 - constant][368] = 178;
    Map[270 - constant][366] = 178;
    Map[270 - constant][365] = 178;
    Map[270 - constant][364] = 178;

    Map[269 - constant][380] = 178;
    Map[269 - constant][379] = 178;
    Map[269 - constant][378] = 178;
    Map[269 - constant][377] = 178;
    Map[269 - constant][376] = 178;
    Map[269 - constant][375] = 178;
    Map[269 - constant][374] = 178;
    Map[269 - constant][373] = 178;
    Map[269 - constant][372] = 178;
    Map[269 - constant][371] = 178;
    Map[269 - constant][370] = 178;
    Map[269 - constant][369] = 178;
    Map[269 - constant][367] = 178;
    Map[269 - constant][368] = 178;
    Map[269 - constant][366] = 178;

    Map[268 - constant][378] = 178;
    Map[268 - constant][377] = 178;
    Map[268 - constant][376] = 178;
    Map[268 - constant][375] = 178;
    Map[268 - constant][374] = 178;
    Map[268 - constant][373] = 178;
    Map[268 - constant][372] = 178;
    Map[268 - constant][371] = 178;
    Map[268 - constant][370] = 178;
    Map[268 - constant][369] = 178;
    Map[268 - constant][368] = 178;


    
}


// SECOND FLOOR 

void DrawSecondFloor(char Map[][500])
{
    int rowFloor = 230;
    for (int columnFloor = 11 ; columnFloor < 499 ; columnFloor++)
    {
        Map[rowFloor][columnFloor] = 178;
    }



    Map[226][250] = 178;
    Map[227][250] = 178;
    Map[228][250] = 178;
    Map[229][250] = 178;
    Map[230][250] = 178;

    for(int col = 250 ; col > 238 ; col--)
    {
        Map[226][col] = 178;
    }

    for(int col = 238 ; col > 226 ; col--)
    {
        Map[223][col] = 178;
    }

    Map[226][238] = 178;
    Map[225][238] = 178;
    Map[224][238] = 178;
    Map[223][238] = 178;

    Map[223][226] = 178;
    Map[224][226] = 178;
    Map[225][226] = 178;
    Map[226][226] = 178;
    Map[227][226] = 178;
    Map[228][226] = 178;
    Map[229][226] = 178;
    Map[230][226] = 178;


}


//BAT[ENEMY]
void DrawBat (char Map[][500] , int rBat , int cBat)
{
    Map[rBat-6][cBat+1] = '/';
Map[rBat-6][cBat+2] = '\\';
Map[rBat-6][cBat+20] = '/';
Map[rBat-6][cBat+21] = '\\';
Map[rBat-5][cBat+0] = '/';
Map[rBat-5][cBat+2] = '\\';
Map[rBat-5][cBat+3] = '\'';
Map[rBat-5][cBat+4] = '.';
Map[rBat-5][cBat+5] = '_';
Map[rBat-5][cBat+9] = '(';
Map[rBat-5][cBat+10] = '\\';
Map[rBat-5][cBat+11] = '_';
Map[rBat-5][cBat+12] = '/';
Map[rBat-5][cBat+13] = ')';
Map[rBat-5][cBat+17] = '_';
Map[rBat-5][cBat+18] = '.';
Map[rBat-5][cBat+19] = '\'';
Map[rBat-5][cBat+20] = '/';
Map[rBat-5][cBat+22] = '\\';
Map[rBat-4][cBat+0] = '|';
Map[rBat-4][cBat+1] = '.';
Map[rBat-4][cBat+2] = '\'';
Map[rBat-4][cBat+3] = '\'';
Map[rBat-4][cBat+4] = '.';
Map[rBat-4][cBat+5] = '_';
Map[rBat-4][cBat+6] = '\'';
Map[rBat-4][cBat+7] = '-';
Map[rBat-4][cBat+8] = '-';
Map[rBat-4][cBat+9] = '(';
Map[rBat-4][cBat+10] = 'o';
Map[rBat-4][cBat+11] = '.';
Map[rBat-4][cBat+12] = 'o';
Map[rBat-4][cBat+13] = ')';
Map[rBat-4][cBat+14] = '-';
Map[rBat-4][cBat+15] = '-';
Map[rBat-4][cBat+16] = '\'';
Map[rBat-4][cBat+17] = '_';
Map[rBat-4][cBat+18] = '.';
Map[rBat-4][cBat+19] = '\'';
Map[rBat-4][cBat+20] = '\'';
Map[rBat-4][cBat+21] = '.';
Map[rBat-4][cBat+22] = '|';
Map[rBat-3][cBat+1] = '\\';
Map[rBat-3][cBat+2] = '_';
Map[rBat-3][cBat+4] = '/';
Map[rBat-3][cBat+6] = '`';
Map[rBat-3][cBat+7] = ';';
Map[rBat-3][cBat+8] = '=';
Map[rBat-3][cBat+9] = '/';
Map[rBat-3][cBat+11] = '"';
Map[rBat-3][cBat+13] = '\\';
Map[rBat-3][cBat+14] = '=';
Map[rBat-3][cBat+15] = ';';
Map[rBat-3][cBat+16] = '`';
Map[rBat-3][cBat+18] = '\\';
Map[rBat-3][cBat+20] = '_';
Map[rBat-3][cBat+21] = '/';
Map[rBat-2][cBat+3] = '`';
Map[rBat-2][cBat+4] = '\\';
Map[rBat-2][cBat+5] = '_';
Map[rBat-2][cBat+6] = '_';
Map[rBat-2][cBat+7] = '|';
Map[rBat-2][cBat+9] = '\\';
Map[rBat-2][cBat+10] = '_';
Map[rBat-2][cBat+11] = '_';
Map[rBat-2][cBat+12] = '_';
Map[rBat-2][cBat+13] = '/';
Map[rBat-2][cBat+15] = '|';
Map[rBat-2][cBat+16] = '_';
Map[rBat-2][cBat+17] = '_';
Map[rBat-2][cBat+18] = '/';
Map[rBat-2][cBat+19] = '`';
Map[rBat-1][cBat+0] = ' ';
Map[rBat-1][cBat+1] = ' ';
Map[rBat-1][cBat+2] = ' ';
Map[rBat-1][cBat+8] = '\\';
Map[rBat-1][cBat+9] = '(';
Map[rBat-1][cBat+10] = '_';
Map[rBat-1][cBat+11] = '|';
Map[rBat-1][cBat+12] = '_';
Map[rBat-1][cBat+13] = ')';
Map[rBat-1][cBat+14] = '/';
Map[rBat-0][cBat+9] = '"';
Map[rBat-0][cBat+11] = '^'; // shoot
Map[rBat-0][cBat+13] = '"';
}

void MoveBat(int &DirectionBat , int &columnBat , int &TimerBat , int IndC , int FlagCheckPoint , int &Count)
{


    if (IndC > 310 && FlagCheckPoint == 1)
    {
    if (DirectionBat == 2)
    {
        if (columnBat + 10== 390 || columnBat + 10 == 391)
        {
            DirectionBat = 0;
            TimerBat = 0;

        }
    }

   if(DirectionBat == -2)
    {
        if (columnBat == 340)
        {
            DirectionBat = 0;
            TimerBat = 0;
        }
    }


    if (DirectionBat == 0)
    {
        TimerBat ++;
        if (TimerBat == 7)
        {
            Count++;
            if (Count % 2 == 0)
            {
                DirectionBat = -2;
            }

            if (Count % 2 != 0)
            {
                DirectionBat = 2;
            }
        }
    }
   


    columnBat += DirectionBat;
    }

    else if (FlagCheckPoint == 2 || FlagCheckPoint == 3)
    {
       DirectionBat = -1;
    }
}

void LaserBat(char Map[][500] , int &rBat , int &cBat , int &DirectionBat , int IndC , int &Health)
{
    if (DirectionBat == 0)
    {
        int constant = 1;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;
        Map[rBat + constant++][cBat + 11] = 178;


         constant = 2;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;
        Map[rBat + constant++][cBat + 12] = 178;

        constant = 2;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        Map[rBat + constant++][cBat + 10] = 178;
        
    }

    if ( (DirectionBat == 0 && IndC == cBat + 11) || (DirectionBat == 0 && IndC - 1 == cBat + 11) || (DirectionBat == 0 && IndC - 2 == cBat + 11) || (DirectionBat == 0 && IndC - 3 == cBat + 11) || (DirectionBat == 0 && IndC - 4 == cBat + 11) || (DirectionBat == 0 && IndC + 1 == cBat + 11) || (DirectionBat == 0 && IndC + 2 == cBat + 11) || (DirectionBat == 0 && IndC + 3 == cBat + 11) || (DirectionBat == 0 && IndC + 4 == cBat + 11))
    {
        Health-=35;
    }

}

//ROCKET EXPLOSION
void DrawRocket(char Map[][500] , int rRocket , int cRocket , int &Flag , int &Timer , int IndC , int &Health)
{
    if (Flag ==0)
    {
        Map[rRocket-5][cRocket+1] = '.';
        Map[rRocket-5][cRocket+2] = '-';
        Map[rRocket-5][cRocket+3] = '.';
        Map[rRocket-5][cRocket+8] = '_';
        Map[rRocket-5][cRocket+9] = ',';
        Map[rRocket-5][cRocket+12] = '.';
        Map[rRocket-5][cRocket+13] = '-';
        Map[rRocket-5][cRocket+14] = '.';
        Map[rRocket-5][cRocket+17] = ',';
        Map[rRocket-5][cRocket+18] = '_';
        Map[rRocket-5][cRocket+23] = '.';
        Map[rRocket-5][cRocket+24] = '-';
        Map[rRocket-5][cRocket+25] = '.';
        Map[rRocket-4][cRocket+0] = '\'';
        Map[rRocket-4][cRocket+1] = '-';
        Map[rRocket-4][cRocket+2] = '.';
        Map[rRocket-4][cRocket+3] = '_';
        Map[rRocket-4][cRocket+4] = '\'';
        Map[rRocket-4][cRocket+5] = '-';
        Map[rRocket-4][cRocket+6] = '-';
        Map[rRocket-4][cRocket+7] = '\'';
        Map[rRocket-4][cRocket+10] = '\\';
        Map[rRocket-4][cRocket+11] = '_';
        Map[rRocket-4][cRocket+12] = '|';
        Map[rRocket-4][cRocket+14] = '|';
        Map[rRocket-4][cRocket+15] = '_';
        Map[rRocket-4][cRocket+16] = '/';
        Map[rRocket-4][cRocket+19] = '\'';
        Map[rRocket-4][cRocket+20] = '-';
        Map[rRocket-4][cRocket+21] = '-';
        Map[rRocket-4][cRocket+22] = '\'';
        Map[rRocket-4][cRocket+23] = '_';
        Map[rRocket-4][cRocket+24] = '.';
        Map[rRocket-4][cRocket+25] = '-';
        Map[rRocket-4][cRocket+26] = '\'';
        Map[rRocket-3][cRocket+4] = '\'';
        Map[rRocket-3][cRocket+5] = '-';
        Map[rRocket-3][cRocket+6] = '.';
        Map[rRocket-3][cRocket+7] = '_';
        Map[rRocket-3][cRocket+10] = '\\';
        Map[rRocket-3][cRocket+12] = '|';
        Map[rRocket-3][cRocket+14] = '|';
        Map[rRocket-3][cRocket+16] = '/';
        Map[rRocket-3][cRocket+19] = '_';
        Map[rRocket-3][cRocket+20] = '.';
        Map[rRocket-3][cRocket+21] = '-';
        Map[rRocket-3][cRocket+22] = '\'';
        Map[rRocket-2][cRocket+8] = '`';
        Map[rRocket-2][cRocket+9] = '-';
        Map[rRocket-2][cRocket+10] = '.';
        Map[rRocket-2][cRocket+11] = '^';
        Map[rRocket-2][cRocket+12] = '|';
        Map[rRocket-2][cRocket+14] = '|';
        Map[rRocket-2][cRocket+15] = '^';
        Map[rRocket-2][cRocket+16] = '.';
        Map[rRocket-2][cRocket+17] = '-';
        Map[rRocket-2][cRocket+18] = '\'';
        Map[rRocket-1][cRocket+11] = '`';
        Map[rRocket-1][cRocket+12] = '\\';
        Map[rRocket-1][cRocket+13] = '=';
        Map[rRocket-1][cRocket+14] = '/';
        Map[rRocket-1][cRocket+15] = '`';
        Map[rRocket-0][cRocket+13] = '`';
    }
    int con = 9;
    if (Flag == 1)
    {
        Map[220-6][cRocket+5] = '_';
Map[220-6 + con][cRocket+6] = '.';
Map[220-6 + con][cRocket+7] = '-';
Map[220-6 + con][cRocket+8] = '^';
Map[220-6 + con][cRocket+9] = '^';
Map[220-6 + con][cRocket+10] = '-';
Map[220-6 + con][cRocket+11] = '-';
Map[220-6 + con][cRocket+12] = '-';
Map[220-6 + con][cRocket+13] = '.';
Map[220-6 + con][cRocket+14] = '.';
Map[220-6 + con][cRocket+15] = '.';
Map[220-6 + con][cRocket+16] = '.';
Map[220-6 + con][cRocket+17] = ',';
Map[220-6 + con][cRocket+18] = ',';
Map[220-6 + con][cRocket+19] = '-';
Map[220-6 + con][cRocket+20] = '-';
Map[220-5 + con][cRocket+1] = '_';
Map[220-5 + con][cRocket+2] = '-';
Map[220-5 + con][cRocket+3] = '-';
Map[220-5 + con][cRocket+22] = '-';
Map[220-5 + con][cRocket+23] = '-';
Map[220-5 + con][cRocket+24] = '_';
Map[220-4 + con][cRocket+0] = '<';
Map[220-4 + con][cRocket+25] = '>';
Map[220-4 + con][cRocket+26] = ')';
Map[220-3 + con][cRocket+0] = '|';
Map[220-3 + con][cRocket+26] = '|';
Map[220-2 + con][cRocket+1] = '\\';
Map[220-2 + con][cRocket+2] = '.';
Map[220-2 + con][cRocket+3] = '_';
Map[220-2 + con][cRocket+23] = '_';
Map[220-2 + con][cRocket+24] = '.';
Map[220-2 + con][cRocket+25] = '/';
Map[220-1 + con][cRocket+4] = '`';
Map[220-1 + con][cRocket+5] = '`';
Map[220-1 + con][cRocket+6] = '`';
Map[220-1 + con][cRocket+7] = '-';
Map[220-1 + con][cRocket+8] = '-';
Map[220-1 + con][cRocket+9] = '.';
Map[220-1 + con][cRocket+11] = '.';
Map[220-1 + con][cRocket+13] = ',';
Map[220-1 + con][cRocket+15] = ';';
Map[220-1 + con][cRocket+17] = '.';
Map[220-1 + con][cRocket+18] = '-';
Map[220-1 + con][cRocket+19] = '-';
Map[220-1 + con][cRocket+20] = '\'';
Map[220-1 + con][cRocket+21] = '\'';
Map[220-1 + con][cRocket+22] = '\'';


Timer++;
if (Timer == 10)
{
    Flag = 100;
}
    }

if (IndC <= cRocket + 36 && IndC >= cRocket && Flag == 1)
{
    Health = 0;
}



}

void MoveRocket(int IndC , int &rRocket , int &Flag , int CheckPoint)
{
    
    if (IndC < 105 && rRocket < 240 && CheckPoint == 2)
    {
        rRocket+=4;
        if (rRocket == 230 || rRocket == 229)
        {
            Flag = 1;
        }
    }
}

// SPIKE [RAT]

void DrawSpike (char Map[][500] , int rowSpike , int colSpike , int &HitSpikeRow , int &HitSpikeCol , int SpikeHealth , int &MoveSpike , int &timer)
{
    int constant = 0;

    if (SpikeHealth == 1 || SpikeHealth == 2)
    {
        Map[rowSpike + constant++][colSpike + MoveSpike] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike] = ',';
        Map[rowSpike + constant++][colSpike + MoveSpike] = '\\';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 1] = '_';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = '/';
        Map[rowSpike + constant++][colSpike + MoveSpike + 2] = '|';


        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = '.';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 3] = '`';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = '"';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 4] = '-';


        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 5] = '-';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ',';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 6] = '-';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ',';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ')';
        Map[rowSpike + constant++][colSpike + MoveSpike + 7] = '-';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = '.';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 8] = '-';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ',';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = '-';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = '-';
        Map[rowSpike + constant++][colSpike + MoveSpike + 9] = '`';


        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = '"';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 10] = ' ';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = '`';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 11] = '`';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = ',';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = '=';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = '/';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 12] = '-';

        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = ',';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = ')';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 13] = '-';


        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = '\\';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = '_';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = '-';
        Map[rowSpike + constant++][colSpike + MoveSpike + 14] = '`';


        constant = 0;
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ')';

        HitSpikeRow = rowSpike + constant - 1;
        HitSpikeCol = colSpike + MoveSpike + 15;

        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = '`';
        Map[rowSpike + constant++][colSpike + MoveSpike + 15] = ' ';
    }

    if (SpikeHealth <= 0)
    {
        if (timer < 10)
        {

            constant = 0;
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 4] = '*';


            constant = 0;
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 5] = '*';

            constant = 0;
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 6] = ' ';

            constant = 0;
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 7] = ' ';

            constant = 0;
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 8] = ' ';

            constant = 0;
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = '*';
            Map[rowSpike + constant++][colSpike + MoveSpike + 9] = ' ';


            timer++;

        }
    }
}

void MoveSpike (int &MoveSpike , int IndR , int IndC , int &StartMoving , int HitSpikeCol , int &TweetyHealth , int &Flag , int &SpikeHealth)
{
    if (IndR < 230 && IndC < 325 && SpikeHealth > 0)
    {
        StartMoving = 1;
    }

    if ((IndC == HitSpikeCol + 1 || IndC == HitSpikeCol) && StartMoving == 1)
    {
        Flag = 3;
    }

    if (IndC > HitSpikeCol && StartMoving == 1)
    {
        Flag = 1;
    }

    if (Flag == 1)
    {
        MoveSpike +=2;
    }
    if (Flag == 3)
    {
        TweetyHealth-=10;
    }

    if (SpikeHealth <= 0 )
    {
        Flag = 0;
        StartMoving = 0;
    }

    
}


// BUTTERFLY
void DrawButterFly(char Map[][500] , int &rowButterFly , int &columnButterFly , int &ShootingAreaRow , int &ShootingAreaCol , int Flag)
{
    
    int constant = 0;
    int CON = 0;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';


    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';


    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '~';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';


    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '`';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '`';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    
    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';    
    
    
    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/'; 


    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '(';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '=';
    Map[rowButterFly + constant++][columnButterFly + CON] = '=';
    Map[rowButterFly + constant++][columnButterFly + CON] = '=';
    Map[rowButterFly + constant++][columnButterFly + CON] = '=';
    Map[rowButterFly + constant++][columnButterFly + CON] = '=';
    Map[rowButterFly + constant++][columnButterFly + CON] = '^'; // SHOOTER

   
    ShootingAreaRow = rowButterFly + constant;
    ShootingAreaCol = columnButterFly + CON;
    
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ')';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '|';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';


    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';


    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '`';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '`';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    
    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '~';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '-';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = '_';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '"';
    Map[rowButterFly + constant++][columnButterFly + CON] = '.';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';

    constant = 0;
    CON ++;
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = '\\';
    Map[rowButterFly + constant++][columnButterFly + CON] = '/';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    Map[rowButterFly + constant++][columnButterFly + CON] = ' ';
    }
void MoveButterFly(int &columnButterFly , int &DirectionButterFly)
{
    if (DirectionButterFly == 2)
    {
        if (columnButterFly == 140 || columnButterFly == 141)
        {
            DirectionButterFly *= -1; 
        }
    }
    else 
    {
        if (columnButterFly == 100 || columnButterFly == 101)
        {
            DirectionButterFly *= -1;
        }
    }

    columnButterFly += DirectionButterFly;
}


int randRains(int min, int max)
{
   return ((rand() % ((max - min) + 1)) + min);
}
void bulletButterFly(char Map[][500] , int ButterFlyRow , int ButterFlyColumn)
{
        Map[ButterFlyRow][ButterFlyColumn] = 251 ;
}


void rains1(char Map[][500] , int cloudR , int cloudC)
{
    Map[cloudR][cloudC] = 235;
}
void MoveRain1(char Map [][500] , int &cloudR , int cloudC , int &flagRains , int cons , int count , int IndR , int IndC , int &Health)
{
    if (Map[cloudR+1][cloudC] == ' ')
    {
        cloudR++;
        flagRains = 1;
    }


    if ((cloudR + 1 == IndR - 8 && cloudC == IndC) || (cloudR + 1 == IndR - 8 && cloudC == IndC+1) || (cloudR + 1 == IndR - 8 && cloudC == IndC+4) || (cloudR + 1 == IndR - 8 && cloudC == IndC-4) || (cloudR + 1 == IndR - 8 && cloudC == IndC+2) ||(cloudR + 1 == IndR - 8 && cloudC == IndC+3)||(cloudR + 1 == IndR - 8 && cloudC == IndC-1)||(cloudR + 1 == IndR - 8 && cloudC == IndC-2)||(cloudR + 1 == IndR - 8 && cloudC == IndC-3))
    {
        Health-=20;
    }
    if (Map[cloudR+1][cloudC] != ' ')
    {
        Map[cloudR][cloudC] = ' ';
        flagRains = 0;
        cloudR = cons;
    }
}

// TOM [CAT]
void DrawTom(char Map[][500] , int rowTom , int colTom , int &HitTomRow , int &HitTomCol , int TomHealth , int &MoveTom , int &timer)
{   
    int constant = 0;
    if (TomHealth > 0)
    {
        Map[rowTom + constant++][colTom] = ' ';
        Map[rowTom + constant++][colTom] = '{';
        Map[rowTom + constant++][colTom] = '{';
        Map[rowTom + constant++][colTom] = '~';

        constant = 0;
        Map[rowTom + constant++][colTom + 1] = '/';
        Map[rowTom + constant++][colTom + 1] = ' ';
        Map[rowTom + constant++][colTom + 1] = ' ';
        Map[rowTom + constant++][colTom + 1] = '~';
        Map[rowTom + constant++][colTom + 1] = '\\';
        Map[rowTom + constant++][colTom + 1] = ' ';
        Map[rowTom + constant++][colTom + 1] = ' ';
        Map[rowTom + constant++][colTom + 1] = '{';
        Map[rowTom + constant++][colTom + 1] = '|';


        constant = 0;
        Map[rowTom + constant++][colTom + 2] = '\\';
        Map[rowTom + constant++][colTom + 2] = ' ';
        Map[rowTom + constant++][colTom + 2] = ' ';
        Map[rowTom + constant++][colTom + 2] = '>';
        Map[rowTom + constant++][colTom + 2] = ' ';
        Map[rowTom + constant++][colTom + 2] = '`';
        Map[rowTom + constant++][colTom + 2] = 'S'; // @@

        HitTomRow = rowTom;
        HitTomCol = colTom + 2;


        Map[rowTom + constant++][colTom + 2] = ' ';
        Map[rowTom + constant++][colTom + 2] = ' ';
        Map[rowTom + constant++][colTom + 2] = '\\';

        constant = 0;
        Map[rowTom + constant++][colTom + 3] = ' ';
        Map[rowTom + constant++][colTom + 3] = '`';
        Map[rowTom + constant++][colTom + 3] = 'O';
        Map[rowTom + constant++][colTom + 3] = ' ';
        Map[rowTom + constant++][colTom + 3] = ' ';
        Map[rowTom + constant++][colTom + 3] = '-';
        Map[rowTom + constant++][colTom + 3] = ' ';
        Map[rowTom + constant++][colTom + 3] = ' ';
        Map[rowTom + constant++][colTom + 3] = ' ';
        Map[rowTom + constant++][colTom + 3] = '_';


        constant = 0;
        Map[rowTom + constant++][colTom + 4] = ' ';
        Map[rowTom + constant++][colTom + 4] = '-';
        Map[rowTom + constant++][colTom + 4] = ' ';
        Map[rowTom + constant++][colTom + 4] = ' ';
        Map[rowTom + constant++][colTom + 4] = '\\';
        Map[rowTom + constant++][colTom + 4] = '-';
        Map[rowTom + constant++][colTom + 4] = ' ';
        Map[rowTom + constant++][colTom + 4] = ' ';
        Map[rowTom + constant++][colTom + 4] = '\\';
        Map[rowTom + constant++][colTom + 4] = '_';
        Map[rowTom + constant++][colTom + 4] = '(';

        constant = 0;
        Map[rowTom + constant++][colTom + 5] = ' ';
        Map[rowTom + constant++][colTom + 5] = '-';
        Map[rowTom + constant++][colTom + 5] = ' ';
        Map[rowTom + constant++][colTom + 5] = 'V';
        Map[rowTom + constant++][colTom + 5] = '|';
        Map[rowTom + constant++][colTom + 5] = '-';
        Map[rowTom + constant++][colTom + 5] = ' ';
        Map[rowTom + constant++][colTom + 5] = ' ';
        Map[rowTom + constant++][colTom + 5] = '_';
        Map[rowTom + constant++][colTom + 5] = '/';
        Map[rowTom + constant++][colTom + 5] = '_';


        constant = 0;
        Map[rowTom + constant++][colTom + 6] = ' ';
        Map[rowTom + constant++][colTom + 6] = '-';
        Map[rowTom + constant++][colTom + 6] = ' ';
        Map[rowTom + constant++][colTom + 6] = ' ';
        Map[rowTom + constant++][colTom + 6] = '/';
        Map[rowTom + constant++][colTom + 6] = '-';
        Map[rowTom + constant++][colTom + 6] = ' ';
        Map[rowTom + constant++][colTom + 6] = ' ';
        Map[rowTom + constant++][colTom + 6] = '/';
        Map[rowTom + constant++][colTom + 6] = ' ';
        Map[rowTom + constant++][colTom + 6] = '_';

        constant = 0;
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = '"';
        Map[rowTom + constant++][colTom + 7] = 'O';
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = '-';
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = ' ';
        Map[rowTom + constant++][colTom + 7] = '/';

        constant = 0;
        Map[rowTom + constant++][colTom + 8] = '/';
        Map[rowTom + constant++][colTom + 8] = ' ';
        Map[rowTom + constant++][colTom + 8] = ' ';
        Map[rowTom + constant++][colTom + 8] = '<';
        Map[rowTom + constant++][colTom + 8] = ' ';
        Map[rowTom + constant++][colTom + 8] = '"';
        Map[rowTom + constant++][colTom + 8] = '\\';
        Map[rowTom + constant++][colTom + 8] = ' ';
        Map[rowTom + constant++][colTom + 8] = ' ';
        Map[rowTom + constant++][colTom + 8] = '/';
        Map[rowTom + constant++][colTom + 8] = ' ';

        constant = 0;
        Map[rowTom + constant++][colTom + 9] = '\\';
        Map[rowTom + constant++][colTom + 9] = ' ';
        Map[rowTom + constant++][colTom + 9] = ' ';
        Map[rowTom + constant++][colTom + 9] = '~';
        Map[rowTom + constant++][colTom + 9] = '/';
        Map[rowTom + constant++][colTom + 9] = '_';
        Map[rowTom + constant++][colTom + 9] = ' ';
        Map[rowTom + constant++][colTom + 9] = '}';
        Map[rowTom + constant++][colTom + 9] = '|';
        Map[rowTom + constant++][colTom + 9] = '(';
        Map[rowTom + constant++][colTom + 9] = ' ';


        constant = 0;
        Map[rowTom + constant++][colTom + 10] = ' ';
        Map[rowTom + constant++][colTom + 10] = '}';
        Map[rowTom + constant++][colTom + 10] = '}';
        Map[rowTom + constant++][colTom + 10] = '~';
        Map[rowTom + constant++][colTom + 10] = ' ';
        Map[rowTom + constant++][colTom + 10] = '_';
        Map[rowTom + constant++][colTom + 10] = ' ';
        Map[rowTom + constant++][colTom + 10] = '\\';
        Map[rowTom + constant++][colTom + 10] = '/';
        Map[rowTom + constant++][colTom + 10] = '_';
        Map[rowTom + constant++][colTom + 10] = ' ';

        constant = 0;
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = '_';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = ' ';
        Map[rowTom + constant++][colTom + 11] = '/';
        Map[rowTom + constant++][colTom + 11] = ' ';

        constant = 0;
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = '_';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = '/';
        Map[rowTom + constant++][colTom + 12] = ' ';
        Map[rowTom + constant++][colTom + 12] = ' ';


        constant = 0;
        Map[rowTom + constant++][colTom + 13] = ' ';
        Map[rowTom + constant++][colTom + 13] = ' ';
        Map[rowTom + constant++][colTom + 13] = ' ';
        Map[rowTom + constant++][colTom + 13] = ' ';
        Map[rowTom + constant++][colTom + 13] = ' ';
        Map[rowTom + constant++][colTom + 13] = ' ';
        Map[rowTom + constant++][colTom + 13] = '\\';
        Map[rowTom + constant++][colTom + 13] = ')';
        Map[rowTom + constant++][colTom + 13] = ' ';

        constant = 0;
        Map[rowTom + constant++][colTom + 14] = ' ';
        Map[rowTom + constant++][colTom + 14] = ' ';
        Map[rowTom + constant++][colTom + 14] = ' ';
        Map[rowTom + constant++][colTom + 14] = ' ';
        Map[rowTom + constant++][colTom + 14] = ' ';
        Map[rowTom + constant++][colTom + 14] = ' ';
        Map[rowTom + constant++][colTom + 14] = '_';
        Map[rowTom + constant++][colTom + 14] = '_';
        Map[rowTom + constant++][colTom + 14] = ' ';

        constant = 0;
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = ' ';
        Map[rowTom + constant++][colTom + 15] = '\\';
        Map[rowTom + constant++][colTom + 15] = '\\';


        constant = 0;
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = ' ';
        Map[rowTom + constant++][colTom + 16] = '_';
        Map[rowTom + constant++][colTom + 16] = '_';

        constant = 0;
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = ' ';
        Map[rowTom + constant++][colTom + 17] = '\\';
        Map[rowTom + constant++][colTom + 17] = '\\';

        constant = 0;
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = ' ';
        Map[rowTom + constant++][colTom + 18] = '_';
        Map[rowTom + constant++][colTom + 18] = '_';

        constant = 0;
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = ' ';
        Map[rowTom + constant++][colTom + 19] = '/';
        Map[rowTom + constant++][colTom + 19] = '_';

        constant = 0;
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = '_';
        Map[rowTom + constant++][colTom + 20] = ' ';
        Map[rowTom + constant++][colTom + 20] = '/';

        constant = 0;
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ' ';
        Map[rowTom + constant++][colTom + 21] = ')';
        Map[rowTom + constant++][colTom + 21] = ' ';
    }
}
void TomBullets(char Map[][500] , int IndR , int IndC , int&FlagStartShooting , int &cBulletLeft , int FlagDeadOrAlive , int &Health , int &Index , int &TomHealth)
{
    if (TomHealth >= 30)
    {
    if (FlagDeadOrAlive == 0)
    {
    if (IndC)
    {
        FlagStartShooting = 1;
    }
    else{
        FlagStartShooting = 1;
    }

    if(FlagStartShooting == 1)
    {
        Map [189][cBulletLeft] = '~';
        cBulletLeft-=5;
    }

    if (cBulletLeft < 150)
    {
        Map[189][cBulletLeft] = ' ';
        cBulletLeft = Index - 2;
    }
    
    if ((IndR - 3 == 189 && cBulletLeft == IndC + 5) || (IndR - 3 == 189 && cBulletLeft == IndC + 4) || (IndR - 3 == 189 && cBulletLeft == IndC + 3) || (IndR - 3 == 189 && cBulletLeft == IndC + 2) || (IndR - 3 == 189 && cBulletLeft == IndC + 1) || (IndR - 3 == 189 && cBulletLeft == IndC) || (IndR - 3 == 189 && cBulletLeft == IndC + -1) || (IndR - 3 == 189 && cBulletLeft == IndC -2))
    {
        Health-=9;
    }    
    }
    }
}

void TomKnife(int &TomHealth , int &HealthTweety , int &Flag , int &HitTomCol , int &IndC , int &colTom)
{

    if (TomHealth < 30 && 0 < TomHealth)
    {
        if(HitTomCol == IndC + 3 || HitTomCol == IndC + 4 || HitTomCol == IndC + 5)
        {
            Flag = 1;
        } 
        
        if (HitTomCol > IndC +5)
        {
            Flag = 2;
        }



        if (Flag == 1)
        {
            HealthTweety-=7;
        }
        if (Flag == 2)
        {
            colTom-=3;
        }
    }
}


void TomHealthIndicator(char Map[][500] , int TomHealth , int row , int col)
{
    if (TomHealth <= 50 && TomHealth > 43)
    {
        Map[row - 3][col +1] = 'H';
        Map[row - 3][col +2] = 'P';
        Map[row - 3][col +3] = ' ';
        Map[row - 3][col +4] = '5';
        Map[row - 3][col +5] = '0';
    }
    if (TomHealth <= 43 && TomHealth > 36)
    {
        Map[row - 3][col +1] = 'H';
        Map[row - 3][col +2] = 'P';
        Map[row - 3][col +3] = ' ';
        Map[row - 3][col +4] = '4';
        Map[row - 3][col +5] = '3';
    }

    if (TomHealth <=36 && TomHealth > 27)
    {
        Map[row - 3][col +1] = 'H';
        Map[row - 3][col +2] = 'P';
        Map[row - 3][col +3] = ' ';
        Map[row - 3][col +4] = '3';
        Map[row - 3][col +5] = '6';
    }

    if (TomHealth <=27 && TomHealth > 19)
    {
        Map[row - 3][col +1] = 'H';
        Map[row - 3][col +2] = 'P';
        Map[row - 3][col +3] = ' ';
        Map[row - 3][col +4] = '2';
        Map[row - 3][col +5] = '7';
    }

    if (TomHealth <=19 && TomHealth > 10)
    {
        Map[row - 3][col +1] = 'H';
        Map[row - 3][col +2] = 'P';
        Map[row - 3][col +3] = ' ';
        Map[row - 3][col +4] = '1';
        Map[row - 3][col +5] = '9';
    }

    if (TomHealth <=10 && TomHealth > 0)
    {
        Map[row - 3][col +1] = 'H';
        Map[row - 3][col +2] = 'P';
        Map[row - 3][col +3] = ' ';
        Map[row - 3][col +4] = '1';
        Map[row - 3][col +5] = '0';
    }

}


// SINGLE BULLET
void shootSingleBullet(char Map[][500], int &IndR , int & IndC ,int& bulletX, int& bulletY) 
{
    
    bulletX = IndR - 4;
    bulletY = IndC - 5;
}

void moveSingleBullet(char x[][500], int &IndR , int &IndC, int& bulletX, int& bulletY , int &ActivateSingleBullet , int &Health , int HitSpikeRow , int HitSpikeCol , int &SpikeHealth) 
{
    bulletY-=2;

    if (bulletY > IndC - 30 && ActivateSingleBullet == 1 && bulletY > -1) 
    {
        if (x[bulletX][bulletY -1] == ' ') 
        {
            if (bulletY < 500) 
            {
                x[bulletX][bulletY + 1] = ' ';
            }
            x[bulletX][bulletY] = 174;

            if (SpikeHealth == 1 || SpikeHealth == 2)
            {
                if (bulletX == HitSpikeRow && (bulletY == HitSpikeCol + 1 || bulletY == HitSpikeCol))
                {
                    SpikeHealth--;
                    ActivateSingleBullet = 0;
                    bulletX = -1;
                    bulletY = -1;
                }
            }
        } 
        else 
        {
            bulletX = -1;
            bulletY = -1;
            ActivateSingleBullet = 0;
        }
    } 
    else
    {
        bulletX = -1;
        bulletY = -1;
        ActivateSingleBullet = 0;
    }



}



// SINGLE BULLET
void shootDiagBullet(char Map[][500], int &IndR , int & IndC ,int& bulletX, int& bulletY) 
{
    
    bulletX = IndR - 4;
    bulletY = IndC - 5;
}

void moveDiagBullet(char x[][500], int &IndR , int &IndC, int& bulletX, int& bulletY , int &ActivateSingleBullet , int &Health , int HitSpikeRow , int HitSpikeCol , int &SpikeHealth) 
{
    bulletY-=4;
    bulletX-=2;

    if (bulletY > IndC - 40 && ActivateSingleBullet == 1 && bulletY > -1) 
    {
        if (x[bulletX][bulletY -1] == ' ') 
        {
            if (bulletY < 500) 
            {
                x[bulletX][bulletY + 1] = ' ';
            }
            x[bulletX][bulletY] = '^';

            if (SpikeHealth == 1 || SpikeHealth == 2)
            {
                if (bulletX == HitSpikeRow && (bulletY == HitSpikeCol + 1 || bulletY == HitSpikeCol))
                {
                    SpikeHealth--;
                    ActivateSingleBullet = 0;
                    bulletX = -1;
                    bulletY = -1;
                }
            }
            
        } 
        else 
        {
            bulletX = -1;
            bulletY = -1;
            ActivateSingleBullet = 0;
        }
    } 
    else
    {
        bulletX = -1;
        bulletY = -1;
        ActivateSingleBullet = 0;
    }



}


//MULTIPLE BULLET
void shootMultipleBullets(char map[][500], int &heroRow, int &heroCol, int bulletRows[], int bulletCols[], int bulletActive[], int numBullets) {
    
    for (int i = 0; i < numBullets; i++) {
        
        if (bulletActive[i] == 0) {
            
            bulletRows[i] = heroRow - 4;
            bulletCols[i] = heroCol + 6;
            bulletActive[i] = 1;
            //break;
        }
    }
}

void moveMultipleBullets(char map[][500], int &heroRow , int &IndR , int &heroCol, int bulletRows[], int bulletCols[], int bulletActive[], int numBullets, int height, int &enemyFlag , int &ActivateMultipleBullet , int &TomHealth , int &HitTom) 
{
    
    for (int i = 0; i < numBullets; i++) {
        
        if (bulletActive[i] == 1) {
            
            bulletCols[i]++;
            
            if (bulletCols[i] < heroCol + 50) {
                
                if (map[bulletRows[i]][bulletCols[i]] == ' ') {
                    
              
                    map[bulletRows[i]][bulletCols[i]] = '>';


                    if ((bulletCols[i] == HitTom ||bulletCols[i] == HitTom - 1 ))
                    {
                        TomHealth-=2;
                        bulletActive[i] =0;
                    }
        
                } 
                
                else {
                    ActivateMultipleBullet = 0;
                   bulletActive[i] = 0;
                }
            } 
            
            else {
                ActivateMultipleBullet = 0;
                bulletActive[i] = 0;
            }
        }
    }
    ActivateMultipleBullet = 0;
}


//THIRD FLOOR

void DrawThirdFloor (char Map[][500] , int LookLeft , int LookRight)
{
    Map[195][43] = 200;
    for (int columnThirdFloor = 44 ; columnThirdFloor < 500 ; columnThirdFloor++)
    {
        Map[195][columnThirdFloor] = '=';
        Map[193][columnThirdFloor] = '=';
    }
    Map[194][43] = 185;
    Map[193][43] = 201;

    if (LookRight == 1)
    {
        for (int columnThirdFloor = 44 ; columnThirdFloor < 500 ; columnThirdFloor+=2)
            Map[194][columnThirdFloor + 1] = '>';
    }

    if (LookLeft == 1)
    {
        for (int columnThirdFloor = 44 ; columnThirdFloor < 500 ; columnThirdFloor+=2)
            Map[194][columnThirdFloor + 1] = '<';
    }

}
//ELEVATOR TO THIRD FLOOR
void DrawElevatorToThirdFloor(char Map[][500] , int &rowElevator)
{
    for (int col = 15 ; col < 41 ; col++)
    {
        Map[rowElevator][col] = 219;
    }
    for (int col = 17 ; col < 39 ; col++)
    {
        Map[rowElevator - 1][col] = 219;
    }
    for (int col = 19 ; col < 37 ; col++)
    {
        if (col != 27 && col != 28 && col !=26)
            Map[rowElevator - 2][col] = 219;
    }

    for (int col = 15 ; col < 41 ; col++)
    {
        Map[rowElevator + 14][col] = 219;
    }

    for (int cons = 0 ; cons < 15 ; cons++)
    {
        Map[rowElevator + cons][15] = 219;
    }


    Map[rowElevator+1][27] = ' ';
    Map[rowElevator+2][27] = ' ';
    Map[rowElevator+3][27] = ' ';
    Map[rowElevator+4][27] = ' ';
    Map[rowElevator+5][27] = ' ';
    Map[rowElevator+6][27] = ' ';
    Map[rowElevator+7][27] = ' ';
    Map[rowElevator+8][27] = ' ';
    Map[rowElevator+9][27] = ' ';
    Map[rowElevator+10][27] = ' ';
    Map[rowElevator+11][27] = ' ';
    Map[rowElevator+12][27] = ' ';
    Map[rowElevator+13][27] = ' ';
    Map[rowElevator+14][27] = 219;
    Map[rowElevator+15][27] = ' ';
    Map[rowElevator+16][27] = ' ';
    Map[rowElevator+17][27] = ' ';
    Map[rowElevator+18][27] = ' ';
    Map[rowElevator+19][27] = ' ';
    Map[rowElevator+20][27] = ' ';
    Map[rowElevator+21][27] = ' ';
    Map[rowElevator+22][27] = ' ';
    Map[rowElevator+23][27] = ' ';
    Map[rowElevator+24][27] = ' ';
    Map[rowElevator+25][27] = ' ';
    Map[rowElevator+26][27] = ' ';
    Map[rowElevator+27][27] = ' ';
    Map[rowElevator+28][27] = ' ';
    Map[rowElevator+29][27] = ' ';
    Map[rowElevator+30][27] = ' ';
    Map[rowElevator+31][27] = ' ';
    Map[rowElevator+32][27] = ' ';
    Map[rowElevator+33][27] = ' ';
    Map[rowElevator+34][27] = ' ';
    Map[rowElevator+35][27] = ' ';
    Map[rowElevator+36][27] = ' ';
    Map[rowElevator+37][27] = ' ';
    Map[rowElevator+38][27] = ' ';
    Map[rowElevator+39][27] = ' ';

    Map[230][27] = 178;
   
}

void DrawElevatorHolder(char Map[][500] , int &FlagCheckPoint , int &IndR)
{
        int rowElevator = 170;
        int columnElevator = 24;
        int cons = 0;

        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        Map[rowElevator + cons++][columnElevator+3] = '/';
        Map[rowElevator + cons++][columnElevator+3] = '\\';
        

        Map[rowElevator][columnElevator] = 200;
        Map[rowElevator][columnElevator+1] = 205;
        Map[rowElevator][columnElevator+2] = 205;
        Map[rowElevator][columnElevator+3] = 205; 
        Map[rowElevator][columnElevator+4] = 205;
        Map[rowElevator][columnElevator+5] = 205;
        Map[rowElevator][columnElevator+6] = 188;

        Map[rowElevator-1][columnElevator] = 196;
        Map[rowElevator-1][columnElevator+1] = 177;
        Map[rowElevator-1][columnElevator+2] = 177;
        Map[rowElevator-1][columnElevator+3] = 177;
        Map[rowElevator-1][columnElevator+4] = 177;
        Map[rowElevator-1][columnElevator+5] = 177;
        Map[rowElevator-1][columnElevator +6] = 196;

        Map[rowElevator-2][columnElevator] = 191;
        Map[rowElevator-2][columnElevator - 1] = 196;
        Map[rowElevator-2][columnElevator + 6] = 218;
        Map[rowElevator-2][columnElevator + 7] = 196;

        Map[rowElevator- 3][columnElevator] = 176;
        Map[rowElevator- 3][columnElevator-1] = 176;
        Map[rowElevator- 3][columnElevator-2] = 176;
        Map[rowElevator- 3][columnElevator-3] = 176;
        Map[rowElevator- 3][columnElevator-4] = 176;
        Map[rowElevator- 3][columnElevator-5] = 176;
        Map[rowElevator- 3][columnElevator-6] = 176;
        Map[rowElevator- 3][columnElevator-7] = 176;
        Map[rowElevator- 3][columnElevator-8] = 176;
        Map[rowElevator- 3][columnElevator-9] = 176;
        Map[rowElevator- 3][columnElevator-10] = 176;
        Map[rowElevator- 3][columnElevator-11] = 176;
        Map[rowElevator- 3][columnElevator-12] = 176;
        Map[rowElevator- 3][columnElevator-13] = 176;
        


        if (IndR == rowElevator - 4)
        {
            FlagCheckPoint = 3;
        }

        Map[rowElevator- 3][columnElevator+1] = 176;
        Map[rowElevator- 3][columnElevator+2] = 176;
        Map[rowElevator- 3][columnElevator+3] = 176;
        Map[rowElevator- 3][columnElevator+4] = 176;
        Map[rowElevator- 3][columnElevator+5] = 176;
        Map[rowElevator- 3][columnElevator+6] = 176;
        Map[rowElevator- 3][columnElevator+7] = 176;
        
        

}

void MoveElevatorToThirdFloor(char Map [][500] , int &rowElevatorToLevel3 , int &columnElevatorToLevel3 , int &DirectionElevator , int &rHero , int &cHero , int &IndR , int &IndC ,int &rowBorderStart , int&rowBorderEnd , int &FlagHeroElevator)
{
      int Constant = 4;

    if (DirectionElevator == 1)
    {
        if (rowElevatorToLevel3 == 215)
        {
            DirectionElevator *= -1; 
        }
    }
    else 
    {
        if (rowElevatorToLevel3 == 174)
        {
            DirectionElevator *= -1;

            if (FlagHeroElevator == 1)
            {
                rHero --;
                IndR --;
            }
        }
    }


    if (IndC - 4 > 10 && IndC - 4 < 39)
    {
        FlagHeroElevator = 1;
    }
    else
    {
        FlagHeroElevator = 0;
    }

    if ((IndR + 1 == rowElevatorToLevel3 + 15 && FlagHeroElevator == 1))
        {
            rHero += DirectionElevator;
            IndR += DirectionElevator;
            rowBorderEnd += DirectionElevator;
            rowBorderStart += DirectionElevator;
        }


    rowElevatorToLevel3+= DirectionElevator;
}


void DrawElevatortoElevatorHolder(char Map[][500] , int row , int col)
{
    Map[row][col] = 192;
    Map[row][col+1] = 196;
    Map[row][col+2] = 196;
    Map[row][col+3] = 196;
    Map[row][col+4] = 196;
    Map[row][col+5] = 196;
    Map[row][col+6] = 196;
    Map[row][col+7] = 196;
    Map[row][col+8] = 196;
    Map[row][col+9] = 196;
    Map[row][col+10] = 196;
    Map[row][col+11] = 196;
    Map[row][col+12] = 196;
    Map[row][col+13] = 196;
    Map[row][col+14] = 196;
    Map[row][col+15] = 196;
    Map[row][col+16] = 196;
    Map[row][col+17] = 196;
    Map[row][col+18] = 196;
    Map[row][col+19] = 217;
    
  
}
void MoveElevatorToElevatorHolder(char Map[][500] , int &rowElevator , int &columnElevator , int &DirectionElevator , int &rHero , int &cHero , int &IndR , int &IndC , int &rowBorderStart , int&rowBorderEnd , int &FlagHeroElevator , int &colBorderStart , int &colBorderEnd)
{
 
    if (DirectionElevator == 1)
    {
        if (rowElevator == 192)
        {
            DirectionElevator *= -1; 
        }
    }
    else 
    {
        if (rowElevator == 165)
        {
            DirectionElevator *= -1;
            if (FlagHeroElevator == 1)
                {
                    rHero --;
                    IndR --;
                }
        }
    }


     if (IndC - 4 > columnElevator - 9 && IndC - 4 < columnElevator + 20)
    {
        FlagHeroElevator = 1;

    }
    else
    {
        FlagHeroElevator = 0;
    }


    if ((IndR == rowElevator && FlagHeroElevator == 1))
        {
            rHero += DirectionElevator;
            IndR += DirectionElevator;

            cHero +=DirectionElevator;
            IndC += DirectionElevator;

            rowBorderEnd += DirectionElevator;
            rowBorderStart += DirectionElevator;
            colBorderStart += DirectionElevator;
            colBorderEnd += DirectionElevator;
            
        }

    rowElevator+= DirectionElevator;
    columnElevator +=DirectionElevator;
}

// MOON DESIGN
void DrawMoon (char x[][500])
{
        int constantrow = 152;
        int constantcol = 300;
        int row = constantrow + 16;
        int col = 10;

        x[row++][col + constantcol] = ';';
        x[row++][col + constantcol] = '|';
        x[row++][col + constantcol] = '|';
        x[row++][col + constantcol] = '|';
        x[row++][col + constantcol] = ';';

        row = constantrow + 15;
        col++;
        x[row++][col + constantcol] = ':';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ';';


        row = constantrow + 14;
        col++;
        x[row++][col + constantcol] = ';';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ';';


        row = constantrow + 13;
        col++;
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ':';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ':';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '\\';


        row = constantrow + 12;
        col++;
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';

        row = constantrow + 12;
        col++;
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '`';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = '(';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';


        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '-';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '`';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ';';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';


        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '|';
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';


        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = '.';

        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '_';

        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '`';
        x[row++][col + constantcol] = '_';

        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '_';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = '_';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '`';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = '_';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = '.';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '-';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '`';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '-';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '`';
        x[row++][col + constantcol] = '`';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '.';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = ' ';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = '|';
        x[row++][col + constantcol] = '`';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ',';
        x[row++][col + constantcol] = '|';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = ' ';

        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '-';
        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '=';
        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '\\';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '/';

        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '"';
        x[row++][col + constantcol] = '*';
        x[row++][col + constantcol] = '.';
        row = constantrow + 10;
        col++;
        x[row++][col + constantcol] = '/';
        x[row++][col + constantcol] = ' ';
        x[row++][col + constantcol] = '\\';
        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '=';
        row = constantrow + 11;
        col++;
        x[row++][col + constantcol] = '-';
        
}

// SWORD
void DrawSword(char Map[][500] , int &rSword , int &cSword , int IndC , int FlagCheckPoint , int &FlagMoveSword , char UserMove , int &MOVE , int &FlagFly , int rTree , int cTree , int &IndR , int &FlagGameOver)
{

 
    Map[rSword-2][cSword+7] = '.';
Map[rSword-2][cSword+8] = '/';
Map[rSword-2][cSword+9] = '~';
Map[rSword-1][cSword+0] = '(';
Map[rSword-1][cSword+1] = '=';
Map[rSword-1][cSword+2] = '#';
Map[rSword-1][cSword+3] = '#';
Map[rSword-1][cSword+4] = '#';
Map[rSword-1][cSword+5] = '#';
Map[rSword-1][cSword+6] = '#';
Map[rSword-1][cSword+7] = '{';
Map[rSword-1][cSword+8] = '>';
Map[rSword-1][cSword+9] = '=';
Map[rSword-1][cSword+10] = '=';
Map[rSword-1][cSword+11] = '=';
Map[rSword-1][cSword+12] = '=';
Map[rSword-1][cSword+13] = '=';
Map[rSword-1][cSword+14] = '=';
Map[rSword-1][cSword+15] = '=';
Map[rSword-1][cSword+16] = '=';
Map[rSword-1][cSword+17] = '=';
Map[rSword-1][cSword+18] = '=';
Map[rSword-1][cSword+19] = '=';
Map[rSword-1][cSword+20] = '=';
Map[rSword-1][cSword+21] = '=';
Map[rSword-1][cSword+22] = '=';
Map[rSword-1][cSword+23] = '=';
Map[rSword-1][cSword+24] = '=';
Map[rSword-1][cSword+25] = '=';
Map[rSword-1][cSword+26] = '=';
Map[rSword-1][cSword+27] = '-';
Map[rSword-0][cSword+7] = '`';
Map[rSword-0][cSword+8] = '\\';
Map[rSword-0][cSword+9] = '_';

Map[rSword-1][497] = 209;


    if (cSword +27 == 497 || cSword + 27 == 498 || cSword + 27 == 496 || cSword + 27 == 495)
    {
        FlagMoveSword = 0;
        MOVE = 0;
        FlagFly = 1;
    }

    if (MOVE == 0)
    {


        Map[rTree-16][cTree+14] = '*';
Map[rTree-16][cTree+16] = '*';
Map[rTree-15][cTree+11] = '*';
Map[rTree-15][cTree+16] = '*';
Map[rTree-15][cTree+19] = '*';
Map[rTree-14][cTree+6] = '*';
Map[rTree-14][cTree+9] = '*';
Map[rTree-14][cTree+14] = '*';
Map[rTree-14][cTree+20] = '*';
Map[rTree-14][cTree+23] = '*';
Map[rTree-13][cTree+5] = '*';
Map[rTree-13][cTree+11] = '*';
Map[rTree-13][cTree+16] = '*';
Map[rTree-13][cTree+19] = '*';
Map[rTree-13][cTree+24] = '*';
Map[rTree-12][cTree+1] = '*';
Map[rTree-12][cTree+3] = '*';
Map[rTree-12][cTree+7] = '*';
Map[rTree-12][cTree+12] = '*';
Map[rTree-12][cTree+17] = '*';
Map[rTree-12][cTree+22] = '*';
Map[rTree-12][cTree+26] = '*';
Map[rTree-11][cTree+1] = '*';
Map[rTree-11][cTree+7] = '*';
Map[rTree-11][cTree+10] = '*';
Map[rTree-11][cTree+15] = '*';
Map[rTree-11][cTree+17] = '*';
Map[rTree-11][cTree+19] = '.';
Map[rTree-11][cTree+20] = '#';
Map[rTree-11][cTree+23] = '*';
Map[rTree-11][cTree+27] = '*';
Map[rTree-10][cTree+1] = '*';
Map[rTree-10][cTree+5] = '*';
Map[rTree-10][cTree+11] = '*';
Map[rTree-10][cTree+13] = '#';
Map[rTree-10][cTree+14] = '.';
Map[rTree-10][cTree+17] = '.';
Map[rTree-10][cTree+18] = '#';
Map[rTree-10][cTree+20] = '*';
Map[rTree-10][cTree+24] = '*';
Map[rTree-9][cTree+2] = '*';
Map[rTree-9][cTree+8] = '"';
Map[rTree-9][cTree+9] = '#';
Map[rTree-9][cTree+10] = '.';
Map[rTree-9][cTree+13] = '#';
Map[rTree-9][cTree+14] = ':';
Map[rTree-9][cTree+16] = '#';
Map[rTree-9][cTree+17] = '"';
Map[rTree-9][cTree+19] = '*';
Map[rTree-9][cTree+21] = '*';
Map[rTree-9][cTree+26] = '*';
Map[rTree-8][cTree+1] = '*';
Map[rTree-8][cTree+5] = '*';
Map[rTree-8][cTree+7] = '*';
Map[rTree-8][cTree+9] = '"';
Map[rTree-8][cTree+10] = '#';
Map[rTree-8][cTree+11] = '.';
Map[rTree-8][cTree+13] = '#';
Map[rTree-8][cTree+14] = '#';
Map[rTree-8][cTree+15] = '"';
Map[rTree-8][cTree+23] = '*';
Map[rTree-7][cTree+3] = '*';
Map[rTree-7][cTree+11] = '"';
Map[rTree-7][cTree+12] = '#';
Map[rTree-7][cTree+13] = '#';
Map[rTree-7][cTree+14] = '#';
Map[rTree-6][cTree+13] = '"';
Map[rTree-6][cTree+14] = '#';
Map[rTree-6][cTree+15] = '#';
Map[rTree-5][cTree+14] = '#';
Map[rTree-5][cTree+15] = '#';
Map[rTree-5][cTree+16] = '.';
Map[rTree-4][cTree+14] = '.';
Map[rTree-4][cTree+15] = '#';
Map[rTree-4][cTree+16] = '#';
Map[rTree-4][cTree+17] = ':';
Map[rTree-3][cTree+14] = ':';
Map[rTree-3][cTree+15] = '#';
Map[rTree-3][cTree+16] = '#';
Map[rTree-3][cTree+17] = '#';
Map[rTree-2][cTree+14] = ';';
Map[rTree-2][cTree+15] = '#';
Map[rTree-2][cTree+16] = '#';
Map[rTree-2][cTree+17] = '#';
Map[rTree-1][cTree+12] = ',';
Map[rTree-1][cTree+13] = '#';
Map[rTree-1][cTree+14] = '#';
Map[rTree-1][cTree+15] = '#';
Map[rTree-1][cTree+16] = '#';
Map[rTree-1][cTree+17] = '.';
Map[rTree-0][cTree+0] = '/';
Map[rTree-0][cTree+1] = '\\';
Map[rTree-0][cTree+2] = '/';
Map[rTree-0][cTree+3] = '\\';
Map[rTree-0][cTree+4] = '/';
Map[rTree-0][cTree+5] = '\\';
Map[rTree-0][cTree+6] = '/';
Map[rTree-0][cTree+7] = '\\';
Map[rTree-0][cTree+8] = '/';
Map[rTree-0][cTree+9] = '\\';
Map[rTree-0][cTree+10] = '/';
Map[rTree-0][cTree+11] = '.';
Map[rTree-0][cTree+12] = '#';
Map[rTree-0][cTree+13] = '#';
Map[rTree-0][cTree+14] = '#';
Map[rTree-0][cTree+15] = '#';
Map[rTree-0][cTree+16] = '#';
Map[rTree-0][cTree+17] = '#';
Map[rTree-0][cTree+18] = '.';
Map[rTree-0][cTree+19] = '\\';
Map[rTree-0][cTree+20] = '/';
Map[rTree-0][cTree+21] = '\\';
Map[rTree-0][cTree+22] = '/';
Map[rTree-0][cTree+23] = '\\';
Map[rTree-0][cTree+24] = '/';
Map[rTree-0][cTree+25] = '\\';
Map[rTree-0][cTree+26] = '/';
Map[rTree-0][cTree+27] = '\\';













        Map[rSword - 9][498] = ',';
        Map[rSword - 9][497] = '~';
        Map[rSword - 9][496] = ',';
        Map[rSword - 9][495] = '~';
        Map[rSword - 9][494] = ',';
        Map[rSword - 9][493] = '~';
        Map[rSword - 9][492] = ',';
        Map[rSword - 9][491] = '~';
        Map[rSword - 9][490] = ',';
        Map[rSword - 9][489] = '~';
        Map[rSword - 9][488] = ',';
        Map[rSword - 9][487] = '~';
        Map[rSword - 9][486] = ',';
        Map[rSword - 9][485] = '~';
        Map[rSword - 9][484] = ',';
        Map[rSword - 9][483] = '~';
        Map[rSword - 9][482] = ',';
        Map[rSword - 9][481] = '~';
        Map[rSword - 9][480] = ',';
        Map[rSword - 9][479] = '~';
        Map[rSword - 9][478] = ',';
        Map[rSword - 9][477] = '~';
        Map[rSword - 9][476] = ',';
        Map[rSword - 9][475] = '~';
        Map[rSword - 9][474] = ',';
        Map[rSword - 9][473] = '~';
        Map[rSword - 9][472] = ',';
        Map[rSword - 9][471] = '~';
        Map[rSword - 9][470] = ',';
        Map[rSword - 9][469] = '~';
  


    }

    if (IndC > 465 && IndR < rSword - 11)
    {
        FlagGameOver = 2;
    }

    if (MOVE = 1)
    {

    if (FlagCheckPoint == 3 && (IndC+3 == cSword - 1 || IndC + 4 == cSword - 1) && MOVE == 1)
    {
        FlagMoveSword = 1;
    }
    


    if (FlagMoveSword == 1 && MOVE == 1)
    {
        
            cSword = IndC +10;
        
    
    }
    }
}

void Almost(char Map[][500])
{

    int row = 177;
    int col = 380;

    Map[row-13][col+4] = '_';
Map[row-13][col+12] = '_';
Map[row-13][col+19] = '_';
Map[row-13][col+20] = '_';
Map[row-13][col+23] = '_';
Map[row-13][col+24] = '_';
Map[row-13][col+29] = 'U';
Map[row-13][col+32] = '_';
Map[row-13][col+33] = '_';
Map[row-13][col+34] = '_';
Map[row-13][col+36] = 'u';
Map[row-13][col+39] = '_';
Map[row-13][col+40] = '_';
Map[row-13][col+41] = '_';
Map[row-13][col+42] = '_';
Map[row-13][col+48] = '_';
Map[row-13][col+49] = '_';
Map[row-13][col+50] = '_';
Map[row-13][col+51] = '_';
Map[row-13][col+52] = '_';
Map[row-12][col+0] = 'U';
Map[row-12][col+3] = '/';
Map[row-12][col+4] = '"';
Map[row-12][col+5] = '\\';
Map[row-12][col+8] = 'u';
Map[row-12][col+11] = '|';
Map[row-12][col+12] = '"';
Map[row-12][col+13] = '|';
Map[row-12][col+17] = 'U';
Map[row-12][col+18] = '|';
Map[row-12][col+19] = '\'';
Map[row-12][col+21] = '\\';
Map[row-12][col+22] = '/';
Map[row-12][col+24] = '\'';
Map[row-12][col+25] = '|';
Map[row-12][col+26] = 'u';
Map[row-12][col+30] = '\\';
Map[row-12][col+31] = '/';
Map[row-12][col+32] = '"';
Map[row-12][col+33] = '_';
Map[row-12][col+35] = '\\';
Map[row-12][col+36] = '/';
Map[row-12][col+38] = '/';
Map[row-12][col+40] = '_';
Map[row-12][col+41] = '_';
Map[row-12][col+42] = '"';
Map[row-12][col+43] = '|';
Map[row-12][col+45] = 'u';
Map[row-12][col+47] = '|';
Map[row-12][col+48] = '_';
Map[row-12][col+50] = '"';
Map[row-12][col+52] = '_';
Map[row-12][col+53] = '|';
Map[row-11][col+1] = '\\';
Map[row-11][col+2] = '/';
Map[row-11][col+4] = '_';
Map[row-11][col+6] = '\\';
Map[row-11][col+7] = '/';
Map[row-11][col+9] = 'U';
Map[row-11][col+11] = '|';
Map[row-11][col+13] = '|';
Map[row-11][col+15] = 'u';
Map[row-11][col+17] = '\\';
Map[row-11][col+18] = '|';
Map[row-11][col+20] = '|';
Map[row-11][col+21] = '\\';
Map[row-11][col+22] = '/';
Map[row-11][col+23] = '|';
Map[row-11][col+25] = '|';
Map[row-11][col+26] = '/';
Map[row-11][col+30] = '|';
Map[row-11][col+32] = '|';
Map[row-11][col+34] = '|';
Map[row-11][col+36] = '|';
Map[row-11][col+37] = '<';
Map[row-11][col+38] = '\\';
Map[row-11][col+39] = '_';
Map[row-11][col+40] = '_';
Map[row-11][col+41] = '_';
Map[row-11][col+43] = '\\';
Map[row-11][col+44] = '/';
Map[row-11][col+49] = '|';
Map[row-11][col+51] = '|';
Map[row-10][col+1] = '/';
Map[row-10][col+3] = '_';
Map[row-10][col+4] = '_';
Map[row-10][col+5] = '_';
Map[row-10][col+7] = '\\';
Map[row-10][col+10] = '\\';
Map[row-10][col+11] = '|';
Map[row-10][col+13] = '|';
Map[row-10][col+14] = '/';
Map[row-10][col+15] = '_';
Map[row-10][col+16] = '_';
Map[row-10][col+18] = '|';
Map[row-10][col+20] = '|';
Map[row-10][col+23] = '|';
Map[row-10][col+25] = '|';
Map[row-10][col+26] = '.';
Map[row-10][col+27] = '-';
Map[row-10][col+28] = ',';
Map[row-10][col+29] = '_';
Map[row-10][col+30] = '|';
Map[row-10][col+32] = '|';
Map[row-10][col+33] = '_';
Map[row-10][col+34] = '|';
Map[row-10][col+36] = '|';
Map[row-10][col+38] = 'u';
Map[row-10][col+39] = '_';
Map[row-10][col+40] = '_';
Map[row-10][col+41] = '_';
Map[row-10][col+42] = ')';
Map[row-10][col+44] = '|';
Map[row-10][col+48] = '/';
Map[row-10][col+49] = '|';
Map[row-10][col+51] = '|';
Map[row-10][col+52] = '\\';
Map[row-9][col+0] = '/';
Map[row-9][col+1] = '_';
Map[row-9][col+2] = '/';
Map[row-9][col+6] = '\\';
Map[row-9][col+7] = '_';
Map[row-9][col+8] = '\\';
Map[row-9][col+11] = '|';
Map[row-9][col+12] = '_';
Map[row-9][col+13] = '_';
Map[row-9][col+14] = '_';
Map[row-9][col+15] = '_';
Map[row-9][col+16] = '_';
Map[row-9][col+17] = '|';
Map[row-9][col+18] = '|';
Map[row-9][col+19] = '_';
Map[row-9][col+20] = '|';
Map[row-9][col+23] = '|';
Map[row-9][col+24] = '_';
Map[row-9][col+25] = '|';
Map[row-9][col+27] = '\\';
Map[row-9][col+28] = '_';
Map[row-9][col+29] = ')';
Map[row-9][col+30] = '-';
Map[row-9][col+31] = '\\';
Map[row-9][col+32] = '_';
Map[row-9][col+33] = '_';
Map[row-9][col+34] = '_';
Map[row-9][col+35] = '/';
Map[row-9][col+38] = '|';
Map[row-9][col+39] = '_';
Map[row-9][col+40] = '_';
Map[row-9][col+41] = '_';
Map[row-9][col+42] = '_';
Map[row-9][col+43] = '/';
Map[row-9][col+44] = '>';
Map[row-9][col+45] = '>';
Map[row-9][col+47] = 'u';
Map[row-9][col+49] = '|';
Map[row-9][col+50] = '_';
Map[row-9][col+51] = '|';
Map[row-9][col+52] = 'U';
Map[row-8][col+1] = '\\';
Map[row-8][col+2] = '\\';
Map[row-8][col+7] = '>';
Map[row-8][col+8] = '>';
Map[row-8][col+11] = '/';
Map[row-8][col+12] = '/';
Map[row-8][col+15] = '\\';
Map[row-8][col+16] = '\\';
Map[row-8][col+17] = '<';
Map[row-8][col+18] = '<';
Map[row-8][col+19] = ',';
Map[row-8][col+20] = '-';
Map[row-8][col+21] = ',';
Map[row-8][col+22] = ',';
Map[row-8][col+23] = '-';
Map[row-8][col+24] = '.';
Map[row-8][col+32] = '\\';
Map[row-8][col+33] = '\\';
Map[row-8][col+39] = ')';
Map[row-8][col+40] = '(';
Map[row-8][col+43] = '(';
Map[row-8][col+44] = '_';
Map[row-8][col+45] = '_';
Map[row-8][col+46] = ')';
Map[row-8][col+47] = '_';
Map[row-8][col+48] = '/';
Map[row-8][col+49] = '/';
Map[row-8][col+51] = '\\';
Map[row-8][col+52] = '\\';
Map[row-8][col+53] = '_';
Map[row-7][col+0] = '(';
Map[row-7][col+1] = '_';
Map[row-7][col+2] = '_';
Map[row-7][col+3] = ')';
Map[row-7][col+6] = '(';
Map[row-7][col+7] = '_';
Map[row-7][col+8] = '_';
Map[row-7][col+9] = ')';
Map[row-7][col+10] = '(';
Map[row-7][col+11] = '_';
Map[row-7][col+12] = '"';
Map[row-7][col+13] = ')';
Map[row-7][col+14] = '(';
Map[row-7][col+15] = '"';
Map[row-7][col+16] = '_';
Map[row-7][col+17] = ')';
Map[row-7][col+18] = '(';
Map[row-7][col+19] = '.';
Map[row-7][col+20] = '/';
Map[row-7][col+23] = '\\';
Map[row-7][col+24] = '.';
Map[row-7][col+25] = ')';
Map[row-7][col+31] = '(';
Map[row-7][col+32] = '_';
Map[row-7][col+33] = '_';
Map[row-7][col+34] = ')';
Map[row-7][col+38] = '(';
Map[row-7][col+39] = '_';
Map[row-7][col+40] = '_';
Map[row-7][col+41] = ')';
Map[row-7][col+46] = '(';
Map[row-7][col+47] = '_';
Map[row-7][col+48] = '_';
Map[row-7][col+49] = ')';
Map[row-7][col+51] = '(';
Map[row-7][col+52] = '_';
Map[row-7][col+53] = '_';
Map[row-7][col+54] = ')';
Map[row-6][col+2] = '_';
Map[row-6][col+3] = '_';
Map[row-6][col+4] = '_';
Map[row-6][col+5] = '_';
Map[row-6][col+6] = '_';
Map[row-6][col+11] = '_';
Map[row-6][col+15] = '_';
Map[row-6][col+18] = 'U';
Map[row-6][col+20] = '_';
Map[row-6][col+21] = '_';
Map[row-6][col+22] = '_';
Map[row-6][col+23] = '_';
Map[row-6][col+24] = '_';
Map[row-6][col+26] = 'u';
Map[row-6][col+30] = '_';
Map[row-6][col+31] = '_';
Map[row-6][col+32] = '_';
Map[row-6][col+33] = '_';
Map[row-6][col+38] = 'U';
Map[row-6][col+40] = '_';
Map[row-6][col+41] = '_';
Map[row-6][col+42] = '_';
Map[row-6][col+43] = '_';
Map[row-6][col+44] = '_';
Map[row-6][col+46] = 'u';
Map[row-5][col+1] = '|';
Map[row-5][col+2] = '_';
Map[row-5][col+4] = '"';
Map[row-5][col+6] = '_';
Map[row-5][col+7] = '|';
Map[row-5][col+10] = '|';
Map[row-5][col+11] = '\'';
Map[row-5][col+12] = '|';
Map[row-5][col+14] = '|';
Map[row-5][col+15] = '\'';
Map[row-5][col+16] = '|';
Map[row-5][col+18] = '\\';
Map[row-5][col+19] = '|';
Map[row-5][col+21] = '_';
Map[row-5][col+22] = '_';
Map[row-5][col+23] = '_';
Map[row-5][col+24] = '"';
Map[row-5][col+25] = '|';
Map[row-5][col+26] = '/';
Map[row-5][col+27] = 'U';
Map[row-5][col+29] = '|';
Map[row-5][col+32] = '_';
Map[row-5][col+33] = '"';
Map[row-5][col+34] = '\\';
Map[row-5][col+36] = 'u';
Map[row-5][col+38] = '\\';
Map[row-5][col+39] = '|';
Map[row-5][col+41] = '_';
Map[row-5][col+42] = '_';
Map[row-5][col+43] = '_';
Map[row-5][col+44] = '"';
Map[row-5][col+45] = '|';
Map[row-5][col+46] = '/';
Map[row-4][col+3] = '|';
Map[row-4][col+5] = '|';
Map[row-4][col+9] = '/';
Map[row-4][col+10] = '|';
Map[row-4][col+12] = '|';
Map[row-4][col+13] = '_';
Map[row-4][col+14] = '|';
Map[row-4][col+16] = '|';
Map[row-4][col+17] = '\\';
Map[row-4][col+19] = '|';
Map[row-4][col+22] = '_';
Map[row-4][col+23] = '|';
Map[row-4][col+24] = '"';
Map[row-4][col+28] = '\\';
Map[row-4][col+29] = '|';
Map[row-4][col+31] = '|';
Map[row-4][col+32] = '_';
Map[row-4][col+33] = ')';
Map[row-4][col+35] = '|';
Map[row-4][col+36] = '/';
Map[row-4][col+39] = '|';
Map[row-4][col+42] = '_';
Map[row-4][col+43] = '|';
Map[row-4][col+44] = '"';
Map[row-3][col+2] = '/';
Map[row-3][col+3] = '|';
Map[row-3][col+5] = '|';
Map[row-3][col+6] = '\\';
Map[row-3][col+9] = 'U';
Map[row-3][col+10] = '|';
Map[row-3][col+13] = '_';
Map[row-3][col+16] = '|';
Map[row-3][col+17] = 'u';
Map[row-3][col+19] = '|';
Map[row-3][col+21] = '|';
Map[row-3][col+22] = '_';
Map[row-3][col+23] = '_';
Map[row-3][col+24] = '_';
Map[row-3][col+29] = '|';
Map[row-3][col+32] = '_';
Map[row-3][col+34] = '<';
Map[row-3][col+39] = '|';
Map[row-3][col+41] = '|';
Map[row-3][col+42] = '_';
Map[row-3][col+43] = '_';
Map[row-3][col+44] = '_';
Map[row-2][col+1] = 'u';
Map[row-2][col+3] = '|';
Map[row-2][col+4] = '_';
Map[row-2][col+5] = '|';
Map[row-2][col+6] = 'U';
Map[row-2][col+10] = '|';
Map[row-2][col+11] = '_';
Map[row-2][col+12] = '|';
Map[row-2][col+14] = '|';
Map[row-2][col+15] = '_';
Map[row-2][col+16] = '|';
Map[row-2][col+19] = '|';
Map[row-2][col+20] = '_';
Map[row-2][col+21] = '_';
Map[row-2][col+22] = '_';
Map[row-2][col+23] = '_';
Map[row-2][col+24] = '_';
Map[row-2][col+25] = '|';
Map[row-2][col+29] = '|';
Map[row-2][col+30] = '_';
Map[row-2][col+31] = '|';
Map[row-2][col+33] = '\\';
Map[row-2][col+34] = '_';
Map[row-2][col+35] = '\\';
Map[row-2][col+39] = '|';
Map[row-2][col+40] = '_';
Map[row-2][col+41] = '_';
Map[row-2][col+42] = '_';
Map[row-2][col+43] = '_';
Map[row-2][col+44] = '_';
Map[row-2][col+45] = '|';
Map[row-1][col+1] = '_';
Map[row-1][col+2] = '/';
Map[row-1][col+3] = '/';
Map[row-1][col+5] = '\\';
Map[row-1][col+6] = '\\';
Map[row-1][col+7] = '_';
Map[row-1][col+10] = '/';
Map[row-1][col+11] = '/';
Map[row-1][col+15] = '\\';
Map[row-1][col+16] = '\\';
Map[row-1][col+19] = '<';
Map[row-1][col+20] = '<';
Map[row-1][col+24] = '>';
Map[row-1][col+25] = '>';
Map[row-1][col+29] = '/';
Map[row-1][col+30] = '/';
Map[row-1][col+34] = '\\';
Map[row-1][col+35] = '\\';
Map[row-1][col+36] = '_';
Map[row-1][col+39] = '<';
Map[row-1][col+40] = '<';
Map[row-1][col+44] = '>';
Map[row-1][col+45] = '>';
Map[row-0][col+0] = '(';
Map[row-0][col+1] = '_';
Map[row-0][col+2] = '_';
Map[row-0][col+3] = ')';
Map[row-0][col+5] = '(';
Map[row-0][col+6] = '_';
Map[row-0][col+7] = '_';
Map[row-0][col+8] = ')';
Map[row-0][col+9] = '(';
Map[row-0][col+10] = '_';
Map[row-0][col+11] = '"';
Map[row-0][col+12] = ')';
Map[row-0][col+14] = '(';
Map[row-0][col+15] = '"';
Map[row-0][col+16] = '_';
Map[row-0][col+17] = ')';
Map[row-0][col+18] = '(';
Map[row-0][col+19] = '_';
Map[row-0][col+20] = '_';
Map[row-0][col+21] = ')';
Map[row-0][col+23] = '(';
Map[row-0][col+24] = '_';
Map[row-0][col+25] = '_';
Map[row-0][col+26] = ')';
Map[row-0][col+28] = '(';
Map[row-0][col+29] = '_';
Map[row-0][col+30] = '_';
Map[row-0][col+31] = ')';
Map[row-0][col+34] = '(';
Map[row-0][col+35] = '_';
Map[row-0][col+36] = '_';
Map[row-0][col+37] = ')';
Map[row-0][col+38] = '(';
Map[row-0][col+39] = '_';
Map[row-0][col+40] = '_';
Map[row-0][col+41] = ')';
Map[row-0][col+43] = '(';
Map[row-0][col+44] = '_';
Map[row-0][col+45] = '_';
Map[row-0][col+46] = ')';
}
//COUT TO SCREEN
void Cout_Map_to_Screen(char Map[][500], int & rowMapBorderStart, int& rowMapBorderEnd , int &colMapBorderStart , int &colMapBorderEnd)
{

    int Constant = 2;
    
    system("cls");
    for (int rowMap = rowMapBorderStart; rowMap < rowMapBorderEnd; rowMap++)
    {
        for (int columnMap = colMapBorderStart; columnMap < colMapBorderEnd; columnMap++)
        {
            cout << Map[rowMap][columnMap];
        }
        cout << endl;
    }
}

void ScreenMenu(char Map[][500])
{
    
    system("cls");

    for (int r = 0 ; r < 40 ; r++)
    {
        for (int c = 0 ; c < 150 ; c++)
        {
            cout << Map[r][c];
        }
    }
}

void GameOver(char Map[][500])
{
    int rGameOver = 25 ;
    int cGameOver = 45;
   Map[rGameOver-12][cGameOver+1] = '_';
Map[rGameOver-12][cGameOver+2] = '_';
Map[rGameOver-12][cGameOver+3] = '_';
Map[rGameOver-12][cGameOver+4] = '_';
Map[rGameOver-12][cGameOver+5] = '_';
Map[rGameOver-12][cGameOver+6] = '_';
Map[rGameOver-12][cGameOver+7] = '_';
Map[rGameOver-12][cGameOver+30] = '_';
Map[rGameOver-12][cGameOver+31] = '_';
Map[rGameOver-12][cGameOver+32] = '_';
Map[rGameOver-12][cGameOver+33] = '_';
Map[rGameOver-12][cGameOver+34] = '_';
Map[rGameOver-12][cGameOver+35] = '_';
Map[rGameOver-12][cGameOver+36] = '_';
Map[rGameOver-12][cGameOver+59] = '_';
Map[rGameOver-11][cGameOver+0] = '(';
Map[rGameOver-11][cGameOver+1] = '_';
Map[rGameOver-11][cGameOver+2] = '_';
Map[rGameOver-11][cGameOver+3] = '_';
Map[rGameOver-11][cGameOver+4] = '_';
Map[rGameOver-11][cGameOver+5] = '_';
Map[rGameOver-11][cGameOver+6] = '_';
Map[rGameOver-11][cGameOver+7] = '_';
Map[rGameOver-11][cGameOver+8] = ')';
Map[rGameOver-11][cGameOver+29] = '(';
Map[rGameOver-11][cGameOver+30] = '_';
Map[rGameOver-11][cGameOver+31] = '_';
Map[rGameOver-11][cGameOver+32] = '_';
Map[rGameOver-11][cGameOver+33] = '_';
Map[rGameOver-11][cGameOver+34] = '_';
Map[rGameOver-11][cGameOver+35] = '_';
Map[rGameOver-11][cGameOver+36] = '_';
Map[rGameOver-11][cGameOver+37] = ')';
Map[rGameOver-11][cGameOver+58] = '|';
Map[rGameOver-11][cGameOver+60] = '|';
Map[rGameOver-10][cGameOver+1] = '_';
Map[rGameOver-10][cGameOver+5] = '_';
Map[rGameOver-10][cGameOver+6] = '_';
Map[rGameOver-10][cGameOver+7] = '_';
Map[rGameOver-10][cGameOver+9] = '_';
Map[rGameOver-10][cGameOver+10] = '_';
Map[rGameOver-10][cGameOver+11] = '_';
Map[rGameOver-10][cGameOver+12] = '_';
Map[rGameOver-10][cGameOver+13] = '_';
Map[rGameOver-10][cGameOver+15] = '_';
Map[rGameOver-10][cGameOver+16] = '_';
Map[rGameOver-10][cGameOver+17] = '_';
Map[rGameOver-10][cGameOver+18] = '_';
Map[rGameOver-10][cGameOver+21] = '_';
Map[rGameOver-10][cGameOver+22] = '_';
Map[rGameOver-10][cGameOver+23] = '_';
Map[rGameOver-10][cGameOver+24] = '_';
Map[rGameOver-10][cGameOver+25] = '_';
Map[rGameOver-10][cGameOver+30] = '_';
Map[rGameOver-10][cGameOver+36] = '_';
Map[rGameOver-10][cGameOver+38] = '_';
Map[rGameOver-10][cGameOver+42] = '_';
Map[rGameOver-10][cGameOver+44] = '_';
Map[rGameOver-10][cGameOver+45] = '_';
Map[rGameOver-10][cGameOver+46] = '_';
Map[rGameOver-10][cGameOver+47] = '_';
Map[rGameOver-10][cGameOver+48] = '_';
Map[rGameOver-10][cGameOver+51] = '_';
Map[rGameOver-10][cGameOver+52] = '_';
Map[rGameOver-10][cGameOver+53] = '_';
Map[rGameOver-10][cGameOver+54] = '_';
Map[rGameOver-10][cGameOver+58] = '|';
Map[rGameOver-10][cGameOver+60] = '|';
Map[rGameOver-9][cGameOver+0] = '|';
Map[rGameOver-9][cGameOver+2] = '|';
Map[rGameOver-9][cGameOver+4] = '(';
Map[rGameOver-9][cGameOver+5] = '_';
Map[rGameOver-9][cGameOver+8] = '(';
Map[rGameOver-9][cGameOver+9] = '_';
Map[rGameOver-9][cGameOver+10] = '_';
Map[rGameOver-9][cGameOver+11] = '_';
Map[rGameOver-9][cGameOver+12] = '_';
Map[rGameOver-9][cGameOver+14] = '|';
Map[rGameOver-9][cGameOver+19] = '\\';
Map[rGameOver-9][cGameOver+20] = '|';
Map[rGameOver-9][cGameOver+22] = '_';
Map[rGameOver-9][cGameOver+23] = '_';
Map[rGameOver-9][cGameOver+24] = '_';
Map[rGameOver-9][cGameOver+26] = '|';
Map[rGameOver-9][cGameOver+29] = '|';
Map[rGameOver-9][cGameOver+31] = '|';
Map[rGameOver-9][cGameOver+35] = '|';
Map[rGameOver-9][cGameOver+37] = '|';
Map[rGameOver-9][cGameOver+39] = '|';
Map[rGameOver-9][cGameOver+41] = '|';
Map[rGameOver-9][cGameOver+43] = '|';
Map[rGameOver-9][cGameOver+45] = '_';
Map[rGameOver-9][cGameOver+46] = '_';
Map[rGameOver-9][cGameOver+47] = '_';
Map[rGameOver-9][cGameOver+49] = '|';
Map[rGameOver-9][cGameOver+50] = '/';
Map[rGameOver-9][cGameOver+52] = '_';
Map[rGameOver-9][cGameOver+53] = '_';
Map[rGameOver-9][cGameOver+54] = '_';
Map[rGameOver-9][cGameOver+55] = ')';
Map[rGameOver-9][cGameOver+58] = '|';
Map[rGameOver-9][cGameOver+59] = '_';
Map[rGameOver-9][cGameOver+60] = '|';
Map[rGameOver-8][cGameOver+0] = '|';
Map[rGameOver-8][cGameOver+2] = '|';
Map[rGameOver-8][cGameOver+3] = '_';
Map[rGameOver-8][cGameOver+4] = '_';
Map[rGameOver-8][cGameOver+5] = '_';
Map[rGameOver-8][cGameOver+6] = ')';
Map[rGameOver-8][cGameOver+8] = '/';
Map[rGameOver-8][cGameOver+10] = '_';
Map[rGameOver-8][cGameOver+11] = '_';
Map[rGameOver-8][cGameOver+12] = '_';
Map[rGameOver-8][cGameOver+14] = '|';
Map[rGameOver-8][cGameOver+16] = '|';
Map[rGameOver-8][cGameOver+18] = '|';
Map[rGameOver-8][cGameOver+20] = '|';
Map[rGameOver-8][cGameOver+22] = '_';
Map[rGameOver-8][cGameOver+23] = '_';
Map[rGameOver-8][cGameOver+24] = '_';
Map[rGameOver-8][cGameOver+25] = '_';
Map[rGameOver-8][cGameOver+26] = '|';
Map[rGameOver-8][cGameOver+29] = '|';
Map[rGameOver-8][cGameOver+31] = '|';
Map[rGameOver-8][cGameOver+32] = '_';
Map[rGameOver-8][cGameOver+33] = '_';
Map[rGameOver-8][cGameOver+34] = '_';
Map[rGameOver-8][cGameOver+35] = '|';
Map[rGameOver-8][cGameOver+37] = '|';
Map[rGameOver-8][cGameOver+38] = '\\';
Map[rGameOver-8][cGameOver+40] = 'V';
Map[rGameOver-8][cGameOver+42] = '/';
Map[rGameOver-8][cGameOver+43] = '|';
Map[rGameOver-8][cGameOver+45] = '_';
Map[rGameOver-8][cGameOver+46] = '_';
Map[rGameOver-8][cGameOver+47] = '_';
Map[rGameOver-8][cGameOver+48] = '_';
Map[rGameOver-8][cGameOver+49] = '|';
Map[rGameOver-8][cGameOver+51] = '|';
Map[rGameOver-8][cGameOver+59] = '_';
Map[rGameOver-7][cGameOver+1] = '\\';
Map[rGameOver-7][cGameOver+2] = '_';
Map[rGameOver-7][cGameOver+3] = '_';
Map[rGameOver-7][cGameOver+4] = '_';
Map[rGameOver-7][cGameOver+5] = '_';
Map[rGameOver-7][cGameOver+6] = '_';
Map[rGameOver-7][cGameOver+7] = '/';
Map[rGameOver-7][cGameOver+8] = '\\';
Map[rGameOver-7][cGameOver+9] = '_';
Map[rGameOver-7][cGameOver+10] = '_';
Map[rGameOver-7][cGameOver+11] = '_';
Map[rGameOver-7][cGameOver+12] = '_';
Map[rGameOver-7][cGameOver+13] = '_';
Map[rGameOver-7][cGameOver+14] = '|';
Map[rGameOver-7][cGameOver+15] = '_';
Map[rGameOver-7][cGameOver+16] = '|';
Map[rGameOver-7][cGameOver+17] = '_';
Map[rGameOver-7][cGameOver+18] = '|';
Map[rGameOver-7][cGameOver+19] = '_';
Map[rGameOver-7][cGameOver+20] = '|';
Map[rGameOver-7][cGameOver+21] = '_';
Map[rGameOver-7][cGameOver+22] = '_';
Map[rGameOver-7][cGameOver+23] = '_';
Map[rGameOver-7][cGameOver+24] = '_';
Map[rGameOver-7][cGameOver+25] = '_';
Map[rGameOver-7][cGameOver+26] = ')';
Map[rGameOver-7][cGameOver+30] = '\\';
Map[rGameOver-7][cGameOver+31] = '_';
Map[rGameOver-7][cGameOver+32] = '_';
Map[rGameOver-7][cGameOver+33] = '_';
Map[rGameOver-7][cGameOver+34] = '_';
Map[rGameOver-7][cGameOver+35] = '_';
Map[rGameOver-7][cGameOver+36] = '/';
Map[rGameOver-7][cGameOver+39] = '\\';
Map[rGameOver-7][cGameOver+40] = '_';
Map[rGameOver-7][cGameOver+41] = '/';
Map[rGameOver-7][cGameOver+43] = '|';
Map[rGameOver-7][cGameOver+44] = '_';
Map[rGameOver-7][cGameOver+45] = '_';
Map[rGameOver-7][cGameOver+46] = '_';
Map[rGameOver-7][cGameOver+47] = '_';
Map[rGameOver-7][cGameOver+48] = '_';
Map[rGameOver-7][cGameOver+49] = ')';
Map[rGameOver-7][cGameOver+50] = '_';
Map[rGameOver-7][cGameOver+51] = '|';
Map[rGameOver-7][cGameOver+58] = '|';
Map[rGameOver-7][cGameOver+59] = '_';
Map[rGameOver-7][cGameOver+60] = '|';
Map[rGameOver-5][cGameOver+5] = '_';
Map[rGameOver-5][cGameOver+11] = '_';
Map[rGameOver-5][cGameOver+28] = '_';
Map[rGameOver-4][cGameOver+4] = '|';
Map[rGameOver-4][cGameOver+6] = '|';
Map[rGameOver-4][cGameOver+10] = '|';
Map[rGameOver-4][cGameOver+12] = '|';
Map[rGameOver-4][cGameOver+27] = '(';
Map[rGameOver-4][cGameOver+28] = '_';
Map[rGameOver-4][cGameOver+29] = ')';
Map[rGameOver-4][cGameOver+48] = '_';
Map[rGameOver-3][cGameOver+4] = '|';
Map[rGameOver-3][cGameOver+6] = '|';
Map[rGameOver-3][cGameOver+7] = '_';
Map[rGameOver-3][cGameOver+8] = '_';
Map[rGameOver-3][cGameOver+9] = '_';
Map[rGameOver-3][cGameOver+10] = '|';
Map[rGameOver-3][cGameOver+12] = '|';
Map[rGameOver-3][cGameOver+14] = '_';
Map[rGameOver-3][cGameOver+15] = '_';
Map[rGameOver-3][cGameOver+16] = '_';
Map[rGameOver-3][cGameOver+19] = '_';
Map[rGameOver-3][cGameOver+23] = '_';
Map[rGameOver-3][cGameOver+28] = '_';
Map[rGameOver-3][cGameOver+36] = '_';
Map[rGameOver-3][cGameOver+37] = '_';
Map[rGameOver-3][cGameOver+38] = '_';
Map[rGameOver-3][cGameOver+42] = '_';
Map[rGameOver-3][cGameOver+43] = '_';
Map[rGameOver-3][cGameOver+44] = '_';
Map[rGameOver-3][cGameOver+46] = '_';
Map[rGameOver-3][cGameOver+47] = '|';
Map[rGameOver-3][cGameOver+49] = '|';
Map[rGameOver-3][cGameOver+50] = '_';
Map[rGameOver-2][cGameOver+4] = '|';
Map[rGameOver-2][cGameOver+5] = '_';
Map[rGameOver-2][cGameOver+6] = '_';
Map[rGameOver-2][cGameOver+7] = '_';
Map[rGameOver-2][cGameOver+8] = '_';
Map[rGameOver-2][cGameOver+9] = '_';
Map[rGameOver-2][cGameOver+12] = '|';
Map[rGameOver-2][cGameOver+13] = '/';
Map[rGameOver-2][cGameOver+15] = '_';
Map[rGameOver-2][cGameOver+17] = '\\';
Map[rGameOver-2][cGameOver+18] = '|';
Map[rGameOver-2][cGameOver+20] = '|';
Map[rGameOver-2][cGameOver+22] = '|';
Map[rGameOver-2][cGameOver+24] = '|';
Map[rGameOver-2][cGameOver+27] = '|';
Map[rGameOver-2][cGameOver+29] = '|';
Map[rGameOver-2][cGameOver+35] = '/';
Map[rGameOver-2][cGameOver+37] = '_';
Map[rGameOver-2][cGameOver+39] = '\\';
Map[rGameOver-2][cGameOver+41] = '/';
Map[rGameOver-2][cGameOver+42] = '_';
Map[rGameOver-2][cGameOver+43] = '_';
Map[rGameOver-2][cGameOver+44] = '_';
Map[rGameOver-2][cGameOver+45] = '|';
Map[rGameOver-2][cGameOver+46] = '_';
Map[rGameOver-2][cGameOver+50] = '_';
Map[rGameOver-2][cGameOver+51] = ')';
Map[rGameOver-1][cGameOver+5] = '_';
Map[rGameOver-1][cGameOver+6] = '_';
Map[rGameOver-1][cGameOver+7] = '_';
Map[rGameOver-1][cGameOver+8] = '_';
Map[rGameOver-1][cGameOver+9] = '_';
Map[rGameOver-1][cGameOver+10] = '|';
Map[rGameOver-1][cGameOver+12] = '|';
Map[rGameOver-1][cGameOver+14] = '|';
Map[rGameOver-1][cGameOver+15] = '_';
Map[rGameOver-1][cGameOver+16] = '|';
Map[rGameOver-1][cGameOver+18] = '|';
Map[rGameOver-1][cGameOver+20] = '|';
Map[rGameOver-1][cGameOver+21] = '_';
Map[rGameOver-1][cGameOver+22] = '|';
Map[rGameOver-1][cGameOver+24] = '|';
Map[rGameOver-1][cGameOver+27] = '|';
Map[rGameOver-1][cGameOver+29] = '|';
Map[rGameOver-1][cGameOver+30] = '_';
Map[rGameOver-1][cGameOver+31] = '_';
Map[rGameOver-1][cGameOver+32] = '_';
Map[rGameOver-1][cGameOver+33] = '_';
Map[rGameOver-1][cGameOver+34] = '|';
Map[rGameOver-1][cGameOver+36] = '|';
Map[rGameOver-1][cGameOver+37] = '_';
Map[rGameOver-1][cGameOver+38] = '|';
Map[rGameOver-1][cGameOver+40] = '|';
Map[rGameOver-1][cGameOver+41] = '_';
Map[rGameOver-1][cGameOver+42] = '_';
Map[rGameOver-1][cGameOver+43] = '_';
Map[rGameOver-1][cGameOver+45] = '|';
Map[rGameOver-1][cGameOver+47] = '|';
Map[rGameOver-1][cGameOver+49] = '|';
Map[rGameOver-1][cGameOver+50] = '_';
Map[rGameOver-0][cGameOver+4] = '(';
Map[rGameOver-0][cGameOver+5] = '_';
Map[rGameOver-0][cGameOver+6] = '_';
Map[rGameOver-0][cGameOver+7] = '_';
Map[rGameOver-0][cGameOver+8] = '_';
Map[rGameOver-0][cGameOver+9] = '_';
Map[rGameOver-0][cGameOver+10] = '_';
Map[rGameOver-0][cGameOver+11] = '_';
Map[rGameOver-0][cGameOver+12] = '|';
Map[rGameOver-0][cGameOver+13] = '\\';
Map[rGameOver-0][cGameOver+14] = '_';
Map[rGameOver-0][cGameOver+15] = '_';
Map[rGameOver-0][cGameOver+16] = '_';
Map[rGameOver-0][cGameOver+17] = '/';
Map[rGameOver-0][cGameOver+18] = '|';
Map[rGameOver-0][cGameOver+19] = '_';
Map[rGameOver-0][cGameOver+20] = '_';
Map[rGameOver-0][cGameOver+21] = '_';
Map[rGameOver-0][cGameOver+22] = '_';
Map[rGameOver-0][cGameOver+23] = '/';
Map[rGameOver-0][cGameOver+27] = '|';
Map[rGameOver-0][cGameOver+28] = '_';
Map[rGameOver-0][cGameOver+29] = '_';
Map[rGameOver-0][cGameOver+30] = '_';
Map[rGameOver-0][cGameOver+31] = '_';
Map[rGameOver-0][cGameOver+32] = '_';
Map[rGameOver-0][cGameOver+33] = '_';
Map[rGameOver-0][cGameOver+34] = '_';
Map[rGameOver-0][cGameOver+35] = ')';
Map[rGameOver-0][cGameOver+36] = '_';
Map[rGameOver-0][cGameOver+37] = '_';
Map[rGameOver-0][cGameOver+38] = '_';
Map[rGameOver-0][cGameOver+39] = '/';
Map[rGameOver-0][cGameOver+40] = '(';
Map[rGameOver-0][cGameOver+41] = '_';
Map[rGameOver-0][cGameOver+42] = '_';
Map[rGameOver-0][cGameOver+43] = '_';
Map[rGameOver-0][cGameOver+44] = '/';
Map[rGameOver-0][cGameOver+48] = '\\';
Map[rGameOver-0][cGameOver+49] = '_';
Map[rGameOver-0][cGameOver+50] = '_';
Map[rGameOver-0][cGameOver+51] = ')';
}

void WINNER(char Map[][500])
{
    int row = 20 ;
    int col = 47 ;

    Map[0][2] = 'G';
    Map[0][3] = 'A';
    Map[0][4] = 'M';
    Map[0][5] = 'E';
    Map[1][2] = 'M';
    Map[1][3] = 'A';
    Map[1][4] = 'D';
    Map[1][5] = 'E';
    Map[1][6] = ' ';
    Map[1][7] = 'B';
    Map[1][8] = 'Y';
    Map[2][2] = 'S';
    Map[2][3] = 'A';
    Map[2][4] = 'L';
    Map[2][5] = 'A';
    Map[2][6] = 'H';
    Map[2][7] = ' ';
    Map[2][8] = 'E';
    Map[2][9] = 'L';
    Map[2][10] = 'A';
    Map[2][11] = 'B';
    Map[2][12] = 'D';


    Map[row-4][col+0] = '_';
Map[row-4][col+1] = '_';
Map[row-4][col+5] = '_';
Map[row-4][col+6] = '_';
Map[row-4][col+18] = '_';
Map[row-4][col+19] = '_';
Map[row-4][col+28] = '_';
Map[row-4][col+29] = '_';
Map[row-4][col+42] = '_';
Map[row-3][col+0] = '\\';
Map[row-3][col+2] = '\\';
Map[row-3][col+4] = '/';
Map[row-3][col+6] = '/';
Map[row-3][col+7] = '_';
Map[row-3][col+8] = '_';
Map[row-3][col+11] = '_';
Map[row-3][col+15] = '_';
Map[row-3][col+18] = '\\';
Map[row-3][col+20] = '\\';
Map[row-3][col+27] = '/';
Map[row-3][col+29] = '/';
Map[row-3][col+30] = '_';
Map[row-3][col+31] = '_';
Map[row-3][col+34] = '_';
Map[row-3][col+36] = '_';
Map[row-3][col+37] = '_';
Map[row-3][col+41] = '|';
Map[row-3][col+43] = '|';
Map[row-2][col+1] = '\\';
Map[row-2][col+3] = 'V';
Map[row-2][col+5] = '/';
Map[row-2][col+7] = '_';
Map[row-2][col+9] = '\\';
Map[row-2][col+10] = '|';
Map[row-2][col+12] = '|';
Map[row-2][col+14] = '|';
Map[row-2][col+16] = '|';
Map[row-2][col+19] = '\\';
Map[row-2][col+21] = '\\';
Map[row-2][col+23] = '/';
Map[row-2][col+24] = '\\';
Map[row-2][col+26] = '/';
Map[row-2][col+28] = '/';
Map[row-2][col+30] = '_';
Map[row-2][col+32] = '\\';
Map[row-2][col+33] = '|';
Map[row-2][col+35] = '\'';
Map[row-2][col+36] = '_';
Map[row-2][col+38] = '\\';
Map[row-2][col+41] = '|';
Map[row-2][col+43] = '|';
Map[row-1][col+2] = '|';
Map[row-1][col+4] = '|';
Map[row-1][col+6] = '(';
Map[row-1][col+7] = '_';
Map[row-1][col+8] = ')';
Map[row-1][col+10] = '|';
Map[row-1][col+12] = '|';
Map[row-1][col+13] = '_';
Map[row-1][col+14] = '|';
Map[row-1][col+16] = '|';
Map[row-1][col+20] = '\\';
Map[row-1][col+22] = 'V';
Map[row-1][col+25] = 'V';
Map[row-1][col+27] = '/';
Map[row-1][col+29] = '(';
Map[row-1][col+30] = '_';
Map[row-1][col+31] = ')';
Map[row-1][col+33] = '|';
Map[row-1][col+35] = '|';
Map[row-1][col+37] = '|';
Map[row-1][col+39] = '|';
Map[row-1][col+41] = '|';
Map[row-1][col+42] = '_';
Map[row-1][col+43] = '|';
Map[row-0][col+2] = '|';
Map[row-0][col+3] = '_';
Map[row-0][col+4] = '|';
Map[row-0][col+5] = '\\';
Map[row-0][col+6] = '_';
Map[row-0][col+7] = '_';
Map[row-0][col+8] = '_';
Map[row-0][col+9] = '/';
Map[row-0][col+11] = '\\';
Map[row-0][col+12] = '_';
Map[row-0][col+13] = '_';
Map[row-0][col+14] = ',';
Map[row-0][col+15] = '_';
Map[row-0][col+16] = '|';
Map[row-0][col+21] = '\\';
Map[row-0][col+22] = '_';
Map[row-0][col+23] = '/';
Map[row-0][col+24] = '\\';
Map[row-0][col+25] = '_';
Map[row-0][col+26] = '/';
Map[row-0][col+28] = '\\';
Map[row-0][col+29] = '_';
Map[row-0][col+30] = '_';
Map[row-0][col+31] = '_';
Map[row-0][col+32] = '/';
Map[row-0][col+33] = '|';
Map[row-0][col+34] = '_';
Map[row-0][col+35] = '|';
Map[row-0][col+37] = '|';
Map[row-0][col+38] = '_';
Map[row-0][col+39] = '|';
Map[row-0][col+41] = '(';
Map[row-0][col+42] = '_';
Map[row-0][col+43] = ')';

}

void Clouds(char Map[][500])
{
    int rCloud = 215;
    int cCloud = 280;
Map[rCloud-8][cCloud+5] = '.';
Map[rCloud-8][cCloud+6] = '-';
Map[rCloud-8][cCloud+7] = '.';
Map[rCloud-8][cCloud+44] = ',';
Map[rCloud-8][cCloud+45] = '-';
Map[rCloud-8][cCloud+46] = '.';
Map[rCloud-7][cCloud+2] = '.';
Map[rCloud-7][cCloud+3] = '-';
Map[rCloud-7][cCloud+4] = '(';
Map[rCloud-7][cCloud+8] = ')';
Map[rCloud-7][cCloud+9] = '-';
Map[rCloud-7][cCloud+10] = '.';
Map[rCloud-7][cCloud+41] = ',';
Map[rCloud-7][cCloud+42] = '-';
Map[rCloud-7][cCloud+43] = '(';
Map[rCloud-7][cCloud+47] = ')';
Map[rCloud-7][cCloud+48] = '-';
Map[rCloud-7][cCloud+49] = '.';
Map[rCloud-6][cCloud+1] = '(';
Map[rCloud-6][cCloud+7] = '_';
Map[rCloud-6][cCloud+8] = '_';
Map[rCloud-6][cCloud+9] = ')';
Map[rCloud-6][cCloud+11] = ')';
Map[rCloud-6][cCloud+12] = '-';
Map[rCloud-6][cCloud+13] = '.';
Map[rCloud-6][cCloud+38] = ',';
Map[rCloud-6][cCloud+39] = '-';
Map[rCloud-6][cCloud+40] = '(';
Map[rCloud-6][cCloud+41] = '_';
Map[rCloud-6][cCloud+48] = '_';
Map[rCloud-6][cCloud+49] = '_';
Map[rCloud-6][cCloud+50] = ')';
Map[rCloud-5][cCloud+2] = '`';
Map[rCloud-5][cCloud+3] = '-';
Map[rCloud-5][cCloud+4] = '(';
Map[rCloud-5][cCloud+12] = '_';
Map[rCloud-5][cCloud+13] = '_';
Map[rCloud-5][cCloud+14] = ')';
Map[rCloud-5][cCloud+37] = '(';
Map[rCloud-5][cCloud+38] = '_';
Map[rCloud-5][cCloud+43] = ')';
Map[rCloud-5][cCloud+46] = '_';
Map[rCloud-5][cCloud+47] = '_';
Map[rCloud-5][cCloud+48] = ')';
Map[rCloud-5][cCloud+49] = '-';
Map[rCloud-5][cCloud+50] = '\'';
Map[rCloud-4][cCloud+4] = '`';
Map[rCloud-4][cCloud+5] = '(';
Map[rCloud-4][cCloud+6] = '_';
Map[rCloud-4][cCloud+7] = '_';
Map[rCloud-4][cCloud+8] = '_';
Map[rCloud-4][cCloud+9] = '_';
Map[rCloud-4][cCloud+10] = ')';
Map[rCloud-4][cCloud+11] = '-';
Map[rCloud-4][cCloud+12] = '\'';
Map[rCloud-4][cCloud+13] = ',';
Map[rCloud-4][cCloud+38] = '`';
Map[rCloud-4][cCloud+39] = '-';
Map[rCloud-4][cCloud+40] = '(';
Map[rCloud-4][cCloud+41] = '_';
Map[rCloud-4][cCloud+42] = '_';
Map[rCloud-4][cCloud+43] = '_';
Map[rCloud-4][cCloud+44] = '_';
Map[rCloud-4][cCloud+45] = ')';
Map[rCloud-4][cCloud+46] = '-';
Map[rCloud-4][cCloud+47] = '\'';
Map[rCloud-3][cCloud+2] = '-';
Map[rCloud-3][cCloud+4] = '-';
Map[rCloud-3][cCloud+7] = ':';
Map[rCloud-3][cCloud+11] = ':';
Map[rCloud-3][cCloud+14] = '-';
Map[rCloud-3][cCloud+16] = '-';
Map[rCloud-2][cCloud+6] = '/';
Map[rCloud-2][cCloud+8] = '`';
Map[rCloud-2][cCloud+9] = '-';
Map[rCloud-2][cCloud+10] = '\'';
Map[rCloud-2][cCloud+12] = '\\';
Map[rCloud-1][cCloud+4] = ',';
Map[rCloud-1][cCloud+9] = '|';
Map[rCloud-1][cCloud+13] = '.';
Map[rCloud-0][cCloud+9] = '.';


 rCloud = 215;
 cCloud = 200;
Map[rCloud-8][cCloud+5] = '.';
Map[rCloud-8][cCloud+6] = '-';
Map[rCloud-8][cCloud+7] = '.';
Map[rCloud-8][cCloud+44] = ',';
Map[rCloud-8][cCloud+45] = '-';
Map[rCloud-8][cCloud+46] = '.';
Map[rCloud-7][cCloud+2] = '.';
Map[rCloud-7][cCloud+3] = '-';
Map[rCloud-7][cCloud+4] = '(';
Map[rCloud-7][cCloud+8] = ')';
Map[rCloud-7][cCloud+9] = '-';
Map[rCloud-7][cCloud+10] = '.';
Map[rCloud-7][cCloud+41] = ',';
Map[rCloud-7][cCloud+42] = '-';
Map[rCloud-7][cCloud+43] = '(';
Map[rCloud-7][cCloud+47] = ')';
Map[rCloud-7][cCloud+48] = '-';
Map[rCloud-7][cCloud+49] = '.';
Map[rCloud-6][cCloud+1] = '(';
Map[rCloud-6][cCloud+7] = '_';
Map[rCloud-6][cCloud+8] = '_';
Map[rCloud-6][cCloud+9] = ')';
Map[rCloud-6][cCloud+11] = ')';
Map[rCloud-6][cCloud+12] = '-';
Map[rCloud-6][cCloud+13] = '.';
Map[rCloud-6][cCloud+38] = ',';
Map[rCloud-6][cCloud+39] = '-';
Map[rCloud-6][cCloud+40] = '(';
Map[rCloud-6][cCloud+41] = '_';
Map[rCloud-6][cCloud+48] = '_';
Map[rCloud-6][cCloud+49] = '_';
Map[rCloud-6][cCloud+50] = ')';
Map[rCloud-5][cCloud+2] = '`';
Map[rCloud-5][cCloud+3] = '-';
Map[rCloud-5][cCloud+4] = '(';
Map[rCloud-5][cCloud+12] = '_';
Map[rCloud-5][cCloud+13] = '_';
Map[rCloud-5][cCloud+14] = ')';
Map[rCloud-5][cCloud+37] = '(';
Map[rCloud-5][cCloud+38] = '_';
Map[rCloud-5][cCloud+43] = ')';
Map[rCloud-5][cCloud+46] = '_';
Map[rCloud-5][cCloud+47] = '_';
Map[rCloud-5][cCloud+48] = ')';
Map[rCloud-5][cCloud+49] = '-';
Map[rCloud-5][cCloud+50] = '\'';
Map[rCloud-4][cCloud+4] = '`';
Map[rCloud-4][cCloud+5] = '(';
Map[rCloud-4][cCloud+6] = '_';
Map[rCloud-4][cCloud+7] = '_';
Map[rCloud-4][cCloud+8] = '_';
Map[rCloud-4][cCloud+9] = '_';
Map[rCloud-4][cCloud+10] = ')';
Map[rCloud-4][cCloud+11] = '-';
Map[rCloud-4][cCloud+12] = '\'';
Map[rCloud-4][cCloud+13] = ',';
Map[rCloud-4][cCloud+38] = '`';
Map[rCloud-4][cCloud+39] = '-';
Map[rCloud-4][cCloud+40] = '(';
Map[rCloud-4][cCloud+41] = '_';
Map[rCloud-4][cCloud+42] = '_';
Map[rCloud-4][cCloud+43] = '_';
Map[rCloud-4][cCloud+44] = '_';
Map[rCloud-4][cCloud+45] = ')';
Map[rCloud-4][cCloud+46] = '-';
Map[rCloud-4][cCloud+47] = '\'';
Map[rCloud-3][cCloud+2] = '-';
Map[rCloud-3][cCloud+4] = '-';
Map[rCloud-3][cCloud+7] = ':';
Map[rCloud-3][cCloud+11] = ':';
Map[rCloud-3][cCloud+14] = '-';
Map[rCloud-3][cCloud+16] = '-';
Map[rCloud-2][cCloud+6] = '/';
Map[rCloud-2][cCloud+8] = '`';
Map[rCloud-2][cCloud+9] = '-';
Map[rCloud-2][cCloud+10] = '\'';
Map[rCloud-2][cCloud+12] = '\\';
Map[rCloud-1][cCloud+4] = ',';
Map[rCloud-1][cCloud+9] = '|';
Map[rCloud-1][cCloud+13] = '.';
Map[rCloud-0][cCloud+9] = '.';


}

// MAZE
void DrawMaze(char Map[][500] , int rMaze , int cMaze)
{
    int constant = 13;
    Map[rMaze - 21][cMaze + constant++] = 'C';
    Map[rMaze - 21][cMaze + constant++] = 'O';
    Map[rMaze - 21][cMaze + constant++] = 'M';
    Map[rMaze - 21][cMaze + constant++] = 'P';
    Map[rMaze - 21][cMaze + constant++] = 'L';
    Map[rMaze - 21][cMaze + constant++] = 'E';
    Map[rMaze - 21][cMaze + constant++] = 'T';
    Map[rMaze - 21][cMaze + constant++] = 'E';
    Map[rMaze - 21][cMaze + constant++] = ' ';
    Map[rMaze - 21][cMaze + constant++] = 'T';
    Map[rMaze - 21][cMaze + constant++] = 'A';
    Map[rMaze - 21][cMaze + constant++] = 'S';
    Map[rMaze - 21][cMaze + constant++] = 'K';
    Map[rMaze - 21][cMaze + constant++] = ' ';
    Map[rMaze - 21][cMaze + constant++] = 'T';
    Map[rMaze - 21][cMaze + constant++] = 'O';
    Map[rMaze - 21][cMaze + constant++] = ' ';
    Map[rMaze - 21][cMaze + constant++] = 'C';
    Map[rMaze - 21][cMaze + constant++] = 'O';
    Map[rMaze - 21][cMaze + constant++] = 'N';
    Map[rMaze - 21][cMaze + constant++] = 'T';
    Map[rMaze - 21][cMaze + constant++] = 'I';
    Map[rMaze - 21][cMaze + constant++] = 'N';
    Map[rMaze - 21][cMaze + constant++] = 'U';
    Map[rMaze - 21][cMaze + constant++] = 'E';



    Map[rMaze-20][cMaze+0] = ',';
Map[rMaze-20][cMaze+1] = '-';
Map[rMaze-20][cMaze+2] = '-';
Map[rMaze-20][cMaze+3] = '-';
Map[rMaze-20][cMaze+4] = '-';
Map[rMaze-20][cMaze+5] = '-';
Map[rMaze-20][cMaze+6] = '-';
Map[rMaze-20][cMaze+7] = '-';
Map[rMaze-20][cMaze+8] = '-';
Map[rMaze-20][cMaze+9] = '-';
Map[rMaze-20][cMaze+10] = '-';
Map[rMaze-20][cMaze+11] = '-';
Map[rMaze-20][cMaze+12] = '-';
Map[rMaze-20][cMaze+13] = '-';
Map[rMaze-20][cMaze+14] = '-';
Map[rMaze-20][cMaze+15] = '-';
Map[rMaze-20][cMaze+16] = '-';
Map[rMaze-20][cMaze+17] = '-';
Map[rMaze-20][cMaze+18] = '-';
Map[rMaze-20][cMaze+19] = '-';
Map[rMaze-20][cMaze+20] = '-';
Map[rMaze-20][cMaze+21] = '-';
Map[rMaze-20][cMaze+22] = '-';
Map[rMaze-20][cMaze+23] = '-';
Map[rMaze-20][cMaze+24] = '-';
Map[rMaze-20][cMaze+25] = '-';
Map[rMaze-20][cMaze+26] = '-';
Map[rMaze-20][cMaze+27] = '-';
Map[rMaze-20][cMaze+28] = '-';
Map[rMaze-20][cMaze+29] = '-';
Map[rMaze-20][cMaze+30] = '-';
Map[rMaze-20][cMaze+31] = '-';
Map[rMaze-20][cMaze+32] = '-';
Map[rMaze-20][cMaze+33] = '-';
Map[rMaze-20][cMaze+34] = '-';
Map[rMaze-20][cMaze+35] = '-';
Map[rMaze-20][cMaze+36] = '-';
Map[rMaze-20][cMaze+37] = '-';
Map[rMaze-20][cMaze+38] = '-';
Map[rMaze-20][cMaze+39] = '-';
Map[rMaze-20][cMaze+40] = '.';
Map[rMaze-20][cMaze+41] = '-';
Map[rMaze-20][cMaze+42] = '-';
Map[rMaze-20][cMaze+43] = '-';
Map[rMaze-20][cMaze+44] = '-';
Map[rMaze-20][cMaze+45] = '-';
Map[rMaze-20][cMaze+46] = '-';
Map[rMaze-20][cMaze+47] = '-';
Map[rMaze-20][cMaze+48] = '-';
Map[rMaze-20][cMaze+49] = '-';
Map[rMaze-20][cMaze+50] = '.';
Map[rMaze-19][cMaze+0] = '|';
Map[rMaze-19][cMaze+40] = '|';
Map[rMaze-19][cMaze+50] = '|';
Map[rMaze-18][cMaze+0] = '|';
Map[rMaze-18][cMaze+5] = ',';
Map[rMaze-18][cMaze+6] = '-';
Map[rMaze-18][cMaze+7] = '-';
Map[rMaze-18][cMaze+8] = '-';
Map[rMaze-18][cMaze+9] = '-';
Map[rMaze-18][cMaze+10] = '-';
Map[rMaze-18][cMaze+11] = '-';
Map[rMaze-18][cMaze+12] = '-';
Map[rMaze-18][cMaze+13] = '-';
Map[rMaze-18][cMaze+14] = '-';
Map[rMaze-18][cMaze+15] = '-';
Map[rMaze-18][cMaze+16] = '-';
Map[rMaze-18][cMaze+17] = '-';
Map[rMaze-18][cMaze+18] = '-';
Map[rMaze-18][cMaze+19] = '-';
Map[rMaze-18][cMaze+20] = '-';
Map[rMaze-18][cMaze+21] = '-';
Map[rMaze-18][cMaze+22] = '-';
Map[rMaze-18][cMaze+23] = '-';
Map[rMaze-18][cMaze+24] = '-';
Map[rMaze-18][cMaze+25] = '-';
Map[rMaze-18][cMaze+26] = '-';
Map[rMaze-18][cMaze+27] = '-';
Map[rMaze-18][cMaze+28] = '-';
Map[rMaze-18][cMaze+29] = '-';
Map[rMaze-18][cMaze+30] = '-';
Map[rMaze-18][cMaze+31] = '-';
Map[rMaze-18][cMaze+32] = '-';
Map[rMaze-18][cMaze+33] = '-';
Map[rMaze-18][cMaze+34] = '-';
Map[rMaze-18][cMaze+35] = '.';
Map[rMaze-18][cMaze+40] = '|';
Map[rMaze-18][cMaze+45] = '.';
Map[rMaze-18][cMaze+50] = '|';
Map[rMaze-17][cMaze+0] = '|';
Map[rMaze-17][cMaze+5] = '|';
Map[rMaze-17][cMaze+35] = '|';
Map[rMaze-17][cMaze+40] = '|';
Map[rMaze-17][cMaze+45] = '|';
Map[rMaze-17][cMaze+50] = '|';
Map[rMaze-16][cMaze+0] = '|';
Map[rMaze-16][cMaze+5] = '|';
Map[rMaze-16][cMaze+10] = ',';
Map[rMaze-16][cMaze+11] = '-';
Map[rMaze-16][cMaze+12] = '-';
Map[rMaze-16][cMaze+13] = '-';
Map[rMaze-16][cMaze+14] = '-';
Map[rMaze-16][cMaze+15] = '-';
Map[rMaze-16][cMaze+16] = '-';
Map[rMaze-16][cMaze+17] = '-';
Map[rMaze-16][cMaze+18] = '-';
Map[rMaze-16][cMaze+19] = '-';
Map[rMaze-16][cMaze+20] = '-';
Map[rMaze-16][cMaze+21] = '-';
Map[rMaze-16][cMaze+22] = '-';
Map[rMaze-16][cMaze+23] = '-';
Map[rMaze-16][cMaze+24] = '-';
Map[rMaze-16][cMaze+25] = '-';
Map[rMaze-16][cMaze+26] = '-';
Map[rMaze-16][cMaze+27] = '-';
Map[rMaze-16][cMaze+28] = '-';
Map[rMaze-16][cMaze+29] = '-';
Map[rMaze-16][cMaze+30] = '.';
Map[rMaze-16][cMaze+35] = '|';
Map[rMaze-16][cMaze+40] = '|';
Map[rMaze-16][cMaze+45] = '|';
Map[rMaze-16][cMaze+50] = '|';
Map[rMaze-15][cMaze+0] = '|';
Map[rMaze-15][cMaze+5] = '|';
Map[rMaze-15][cMaze+10] = '|';
Map[rMaze-15][cMaze+30] = '|';
Map[rMaze-15][cMaze+35] = '|';
Map[rMaze-15][cMaze+40] = '|';
Map[rMaze-15][cMaze+45] = '|';
Map[rMaze-15][cMaze+50] = '|';
Map[rMaze-14][cMaze+0] = '|';
Map[rMaze-14][cMaze+5] = '|';
Map[rMaze-14][cMaze+10] = '`';
Map[rMaze-14][cMaze+11] = '-';
Map[rMaze-14][cMaze+12] = '-';
Map[rMaze-14][cMaze+13] = '-';
Map[rMaze-14][cMaze+14] = '-';
Map[rMaze-14][cMaze+20] = ',';
Map[rMaze-14][cMaze+21] = '-';
Map[rMaze-14][cMaze+22] = '-';
Map[rMaze-14][cMaze+23] = '-';
Map[rMaze-14][cMaze+24] = '-';
Map[rMaze-14][cMaze+30] = '|';
Map[rMaze-14][cMaze+35] = '|';
Map[rMaze-14][cMaze+40] = '|';
Map[rMaze-14][cMaze+45] = '|';
Map[rMaze-14][cMaze+50] = '|';
Map[rMaze-13][cMaze+0] = '|';
Map[rMaze-13][cMaze+5] = '|';
Map[rMaze-13][cMaze+20] = '|';
Map[rMaze-13][cMaze+22] = ' ';

Map[rMaze-13][cMaze+30] = '|';
Map[rMaze-13][cMaze+35] = '|';
Map[rMaze-13][cMaze+40] = '|';
Map[rMaze-13][cMaze+45] = '|';
Map[rMaze-13][cMaze+50] = '|';
Map[rMaze-12][cMaze+0] = '|';
Map[rMaze-12][cMaze+5] = '|';
Map[rMaze-12][cMaze+10] = ',';
Map[rMaze-12][cMaze+11] = '-';
Map[rMaze-12][cMaze+12] = '-';
Map[rMaze-12][cMaze+13] = '-';
Map[rMaze-12][cMaze+14] = '-';
Map[rMaze-12][cMaze+15] = '-';
Map[rMaze-12][cMaze+16] = '-';
Map[rMaze-12][cMaze+17] = '-';
Map[rMaze-12][cMaze+18] = '-';
Map[rMaze-12][cMaze+19] = '-';
Map[rMaze-12][cMaze+20] = '"';
Map[rMaze-12][cMaze+21] = '-';
Map[rMaze-12][cMaze+22] = '-';
Map[rMaze-12][cMaze+23] = '-';
Map[rMaze-12][cMaze+24] = '-';
Map[rMaze-12][cMaze+25] = '-';
Map[rMaze-12][cMaze+26] = '-';
Map[rMaze-12][cMaze+27] = '-';
Map[rMaze-12][cMaze+28] = '-';
Map[rMaze-12][cMaze+29] = '-';
Map[rMaze-12][cMaze+30] = ':';
Map[rMaze-12][cMaze+35] = '|';
Map[rMaze-12][cMaze+40] = '`';
Map[rMaze-12][cMaze+41] = '-';
Map[rMaze-12][cMaze+42] = '-';
Map[rMaze-12][cMaze+43] = '-';
Map[rMaze-12][cMaze+44] = '-';
Map[rMaze-12][cMaze+45] = '\'';
Map[rMaze-12][cMaze+50] = '|';
Map[rMaze-11][cMaze+0] = '|';
Map[rMaze-11][cMaze+5] = '|';
Map[rMaze-11][cMaze+10] = '|';
Map[rMaze-11][cMaze+30] = '|';
Map[rMaze-11][cMaze+35] = '|';
Map[rMaze-11][cMaze+50] = '|';
Map[rMaze-10][cMaze+0] = '|';
Map[rMaze-10][cMaze+5] = '`';
Map[rMaze-10][cMaze+6] = '-';
Map[rMaze-10][cMaze+7] = '-';
Map[rMaze-10][cMaze+8] = '-';
Map[rMaze-10][cMaze+9] = '-';
Map[rMaze-10][cMaze+10] = ':';
Map[rMaze-10][cMaze+15] = ',';
Map[rMaze-10][cMaze+16] = '-';
Map[rMaze-10][cMaze+17] = '-';
Map[rMaze-10][cMaze+18] = '-';
Map[rMaze-10][cMaze+19] = '-';
Map[rMaze-10][cMaze+20] = '-';
Map[rMaze-10][cMaze+21] = '-';
Map[rMaze-10][cMaze+22] = '-';
Map[rMaze-10][cMaze+23] = '-';
Map[rMaze-10][cMaze+24] = '-';
Map[rMaze-10][cMaze+25] = '.';
Map[rMaze-10][cMaze+30] = '|';
Map[rMaze-10][cMaze+35] = '`';
Map[rMaze-10][cMaze+36] = '-';
Map[rMaze-10][cMaze+37] = '-';
Map[rMaze-10][cMaze+38] = '-';
Map[rMaze-10][cMaze+39] = '-';
Map[rMaze-10][cMaze+40] = '-';
Map[rMaze-10][cMaze+41] = '-';
Map[rMaze-10][cMaze+42] = '-';
Map[rMaze-10][cMaze+43] = '-';
Map[rMaze-10][cMaze+44] = '-';
Map[rMaze-10][cMaze+45] = '.';
Map[rMaze-10][cMaze+50] = '|';
Map[rMaze-9][cMaze+0] = '|';
Map[rMaze-9][cMaze+10] = '|';
Map[rMaze-9][cMaze+15] = '|';
Map[rMaze-9][cMaze+25] = '|';
Map[rMaze-9][cMaze+30] = '|';
Map[rMaze-9][cMaze+45] = '|';
Map[rMaze-9][cMaze+50] = '|';
Map[rMaze-8][cMaze+0] = '|';
Map[rMaze-8][cMaze+5] = '.';
Map[rMaze-8][cMaze+10] = '|';
Map[rMaze-8][cMaze+15] = '|';
Map[rMaze-8][cMaze+20] = '.';
Map[rMaze-8][cMaze+25] = '|';
Map[rMaze-8][cMaze+30] = '|';
Map[rMaze-8][cMaze+36] = '-';
Map[rMaze-8][cMaze+37] = '-';
Map[rMaze-8][cMaze+38] = '-';
Map[rMaze-8][cMaze+39] = '-';
Map[rMaze-8][cMaze+40] = '-';
Map[rMaze-8][cMaze+41] = '-';
Map[rMaze-8][cMaze+42] = '-';
Map[rMaze-8][cMaze+43] = '-';
Map[rMaze-8][cMaze+44] = '-';
Map[rMaze-8][cMaze+45] = '\'';
Map[rMaze-8][cMaze+50] = '|';
Map[rMaze-7][cMaze+0] = '|';
Map[rMaze-7][cMaze+5] = '|';
Map[rMaze-7][cMaze+10] = '|';
Map[rMaze-7][cMaze+15] = '|';
Map[rMaze-7][cMaze+20] = '|';
Map[rMaze-7][cMaze+25] = '|';
Map[rMaze-7][cMaze+30] = '|';
Map[rMaze-7][cMaze+50] = '|';
Map[rMaze-6][cMaze+0] = ':';
Map[rMaze-6][cMaze+1] = '-';
Map[rMaze-6][cMaze+2] = '-';
Map[rMaze-6][cMaze+3] = '-';
Map[rMaze-6][cMaze+4] = '-';
Map[rMaze-6][cMaze+5] = '\'';
Map[rMaze-6][cMaze+10] = '|';
Map[rMaze-6][cMaze+15] = '|';
Map[rMaze-6][cMaze+20] = '|';
Map[rMaze-6][cMaze+25] = '|';
Map[rMaze-6][cMaze+30] = '|';
Map[rMaze-6][cMaze+35] = ',';
Map[rMaze-6][cMaze+36] = '-';
Map[rMaze-6][cMaze+37] = '-';
Map[rMaze-6][cMaze+38] = '-';
Map[rMaze-6][cMaze+39] = '-';
Map[rMaze-6][cMaze+40] = '-';
Map[rMaze-6][cMaze+41] = '-';
Map[rMaze-6][cMaze+42] = '-';
Map[rMaze-6][cMaze+43] = '-';
Map[rMaze-6][cMaze+44] = '-';
Map[rMaze-6][cMaze+45] = '-';
Map[rMaze-6][cMaze+46] = '-';
Map[rMaze-6][cMaze+47] = '-';
Map[rMaze-6][cMaze+48] = '-';
Map[rMaze-6][cMaze+49] = '-';
Map[rMaze-6][cMaze+50] = ':';
Map[rMaze-5][cMaze+0] = '|';
Map[rMaze-5][cMaze+10] = '|';
Map[rMaze-5][cMaze+15] = '|';
Map[rMaze-5][cMaze+20] = '|';
Map[rMaze-5][cMaze+25] = '|';
Map[rMaze-5][cMaze+30] = '|';
Map[rMaze-5][cMaze+35] = '|';
Map[rMaze-5][cMaze+50] = '|';
Map[rMaze-4][cMaze+0] = '|';
Map[rMaze-4][cMaze+5] = '.';
Map[rMaze-4][cMaze+10] = '|';
Map[rMaze-4][cMaze+15] = '`';
Map[rMaze-4][cMaze+16] = '-';
Map[rMaze-4][cMaze+17] = '-';
Map[rMaze-4][cMaze+18] = '-';
Map[rMaze-4][cMaze+19] = '-';
Map[rMaze-4][cMaze+20] = '\'';
Map[rMaze-4][cMaze+25] = '|';
Map[rMaze-4][cMaze+30] = '|';
Map[rMaze-4][cMaze+35] = '|';
Map[rMaze-4][cMaze+41] = '-';
Map[rMaze-4][cMaze+42] = '-';
Map[rMaze-4][cMaze+43] = '-';
Map[rMaze-4][cMaze+44] = '-';
Map[rMaze-4][cMaze+45] = '.';
Map[rMaze-4][cMaze+50] = '|';
Map[rMaze-3][cMaze+0] = '|';
Map[rMaze-3][cMaze+5] = '|';
Map[rMaze-3][cMaze+10] = '|';
Map[rMaze-3][cMaze+25] = '|';
Map[rMaze-3][cMaze+30] = '|';
Map[rMaze-3][cMaze+35] = '|';
Map[rMaze-3][cMaze+45] = '|';
Map[rMaze-3][cMaze+50] = '|';
Map[rMaze-2][cMaze+0] = '|';
Map[rMaze-2][cMaze+5] = '`';
Map[rMaze-2][cMaze+6] = '-';
Map[rMaze-2][cMaze+7] = '-';
Map[rMaze-2][cMaze+8] = '-';
Map[rMaze-2][cMaze+9] = '-';
Map[rMaze-2][cMaze+10] = '"';
Map[rMaze-2][cMaze+11] = '-';
Map[rMaze-2][cMaze+12] = '-';
Map[rMaze-2][cMaze+13] = '-';
Map[rMaze-2][cMaze+14] = '-';
Map[rMaze-2][cMaze+15] = '-';
Map[rMaze-2][cMaze+16] = '-';
Map[rMaze-2][cMaze+17] = '-';
Map[rMaze-2][cMaze+18] = '-';
Map[rMaze-2][cMaze+19] = '-';
Map[rMaze-2][cMaze+25] = '|';
Map[rMaze-2][cMaze+30] = '|';
Map[rMaze-2][cMaze+35] = '`';
Map[rMaze-2][cMaze+36] = '-';
Map[rMaze-2][cMaze+37] = '-';
Map[rMaze-2][cMaze+38] = '-';
Map[rMaze-2][cMaze+39] = '-';
Map[rMaze-2][cMaze+40] = '-';
Map[rMaze-2][cMaze+41] = '-';
Map[rMaze-2][cMaze+42] = '-';
Map[rMaze-2][cMaze+43] = '-';
Map[rMaze-2][cMaze+44] = '-';
Map[rMaze-2][cMaze+45] = '\'';
Map[rMaze-2][cMaze+50] = '|';
Map[rMaze-1][cMaze+0] = '|';
Map[rMaze-1][cMaze+25] = '|';
Map[rMaze-1][cMaze+30] = '|';
Map[rMaze-1][cMaze+50] = '|';
Map[rMaze-0][cMaze+0] = '`';
Map[rMaze-0][cMaze+1] = '-';
Map[rMaze-0][cMaze+2] = '-';
Map[rMaze-0][cMaze+3] = '-';
Map[rMaze-0][cMaze+4] = '-';
Map[rMaze-0][cMaze+5] = '-';
Map[rMaze-0][cMaze+6] = '-';
Map[rMaze-0][cMaze+7] = '-';
Map[rMaze-0][cMaze+8] = '-';
Map[rMaze-0][cMaze+9] = '-';
Map[rMaze-0][cMaze+10] = '-';
Map[rMaze-0][cMaze+11] = '-';
Map[rMaze-0][cMaze+12] = '-';
Map[rMaze-0][cMaze+13] = '-';
Map[rMaze-0][cMaze+14] = '-';
Map[rMaze-0][cMaze+15] = '-';
Map[rMaze-0][cMaze+16] = '-';
Map[rMaze-0][cMaze+17] = '-';
Map[rMaze-0][cMaze+18] = '-';
Map[rMaze-0][cMaze+19] = '-';
Map[rMaze-0][cMaze+20] = '-';
Map[rMaze-0][cMaze+21] = '-';
Map[rMaze-0][cMaze+22] = '-';
Map[rMaze-0][cMaze+23] = '-';
Map[rMaze-0][cMaze+24] = '-';
Map[rMaze-0][cMaze+25] = '\'';
Map[rMaze-0][cMaze+30] = '`';
Map[rMaze-0][cMaze+31] = '-';
Map[rMaze-0][cMaze+32] = '-';
Map[rMaze-0][cMaze+33] = '-';
Map[rMaze-0][cMaze+34] = '-';
Map[rMaze-0][cMaze+35] = '-';
Map[rMaze-0][cMaze+36] = '-';
Map[rMaze-0][cMaze+37] = '-';
Map[rMaze-0][cMaze+38] = '-';
Map[rMaze-0][cMaze+39] = '-';
Map[rMaze-0][cMaze+40] = '-';
Map[rMaze-0][cMaze+41] = '-';
Map[rMaze-0][cMaze+42] = '-';
Map[rMaze-0][cMaze+43] = '-';
Map[rMaze-0][cMaze+44] = '-';
Map[rMaze-0][cMaze+45] = '-';
Map[rMaze-0][cMaze+46] = '-';
Map[rMaze-0][cMaze+47] = '-';
Map[rMaze-0][cMaze+48] = '-';
Map[rMaze-0][cMaze+49] = '-';
Map[rMaze-0][cMaze+50] = '\'';

}

void DrawMazeRunner(char Map[][500] , int rMazeRunner , int cMazeRunner)
{
    Map[rMazeRunner][cMazeRunner] = 'X';
}
void MoveMazeRunner(char Map[][500] , char UserMove , int &row , int &col , int &FlagGameOver , int rowMaze , int &cHero , int &IndC)
{

    if (row == rowMaze + 1)
    {
        FlagGameOver = 0;
        IndC+=5;
        cHero +=5;
    }
    if (UserMove == 'a' && Map[row][col-1] == ' ')
    {
        col--;
    }

    if (UserMove == 'd' && Map[row][col+1] == ' ')
    {
        col++;
    }

    if (UserMove == 'w' && Map[row -1][col] == ' ')
    {
        row--;
    }

    if (UserMove == 's' && Map[row+1][col] == ' ')
    {
        row++;
    }
}



// MAIN FUNCTION
int main ()
{

    int StartGame = 0;


    //GAME DIMENSIONS 300 X 500
    char Game[300][500];

    //USER INPUT 
    char UserMove = '-';




    //Tweety's INFORMATION

    int rTweety = 270;
    int cTweety = 17;
    int IndR = rTweety + 9;
    int IndC = cTweety + 5;

    int FlagLookLeft = 0;
    int FlagLookRight = 1;

    int TweetyHealth = 100;
    int TweetyLives = 3;


    // Screen  && SCROLLING UPWARD , DOWNWARD , LEFT , AND RIGHT
    int MapRowStart = rTweety - 25;
    int MapRowEnd = MapRowStart + 40; 
    int MapColStart = cTweety - 10;
    int MapColEnd = MapColStart + 150;
    int TimerBulletsScreen = 0;



    // BAT
    int rBat =  260;
    int cBat = 340;
    int TimerBat = 0;
    int DirectionBat = -2;
    int CountBat = 0;


    // TOM's INFORMATION [CAT] - Final Enemy
    int rowTom = 182;
    int columnTom = 220;
    int DamageTomRow ;
    int DamageTomCol ;
    int TomMovement = 0;
    int FlagMoveTom = 0;
    int StartMovingTom = 0;
    int TomFlagggg = 0;
    int AnimationTomDeath = 1;
    int StartShootingBullets = 1;
    int cBulletTom = columnTom - 4;
    int FlagDeadTom = 0;
    int TomHealth = 50;
    int FlagMovementTom = 0;


    // SPIKE's INFORMATION [RAT] - First Enemy
    int rowSpike = 221;
    int columnSpike = 220;
    int DamageSpikeRow ;
    int DamageSpikeCol ;
    int SpikeMovement = 0;
    int SpikeHealth = 2;
    int FlagMoveSpike = 0;
    int StartMovingSpike = 0;
    int SSpikeFlagggg = 0;
    int AnimationSpikeDeath = 1;

    

    // ROCKET
    int rRocket =205;
    int cRocket =60;
    int FlagRocket = 0;
    int TimerExplosionRocker = 0;




    //BUTTERFLY's INFORMATION - Second Enemy
    int rowButterFly = 200;
    int columnButterFly = 130;
    int ShootingAreaButterFlyRow ;
    int ShootingAreaButterFlyCol ;
    int DirectionButterFly = 2;
    int FlagButterFly = 0;

    int ctcloud = 0;
    int CloudRainCol1 , CloudRainRow1 = 211 , flagrain1 = 0;
    int constantrainrow = 211;



    //LASER ABOVE FIRST FLOOR TRAP INFORMATION - Third Enemy
    int rowLaserAboveFirstFloorTrap = 237;
    int columnLaserAboveFirstFloorTrap = 100;
    int FlagMoveLaser1st = 0;
    int ActivateLaser = 0;
    int countLaser1stFloor = 0;
    int DirectionLaser1stFloor = 1;



    //Teleport INFORMATION
    int FlagTeleport = 0;
    float TeleportTimer = -1;

    //Flags
    int FlagTrapBox = 0;
    int FlagLadderFloorAboveTraps1stLevel = 0;


    //JUMP n GRAVITY
    int ctJump = 0;
    int FlagJump = 0;
    int FlagJumpAgain = 0;

    int FlagJumpLeft = 0;
    int FlagJumpRight = 0;

    int FlagFly = 0;


    // SINGLE BULLET
    int ActivateSingleBullet = 0;
    int bulletX = -1, bulletY = -1;
    int bulletXR = -1, bulletYR = -1;

    // DIAGONAL BULLET
    int ActivateSingleBulletDiag = 0;
    int bulletXDiag = -1, bulletYDiag = -1;
    int bulletXRDiag = -1, bulletYRDiag = -1;


    // Multiple Bullet
    int width = 300;
    int height = 300;
    int numBullets = 0;
    int bulletRows[100];
    int bulletCols[100];
    int bulletActive[100];
    int enemyFlag = 0;
    int ActivateMultipleBullet = 0;

    // ELEVATOR
    int rowElevator = 215;
    int IndElevatorRow = 229;
    int DirectionElevator = 1;
    int columnElevator = 15;
    int FlagHeroElevator = 1;

    int rowElevator2 = 192;
    int DirectionElevator2 = 1;
    int columnElevator2 = 66;
    int FlagHeroElevator2 = 1;


    //SWORD
    int rowSword =190;
    int colSword = 300;
    int MoveSword = 0;
    int MOVE = 1;

    //Cloud Design
    int rCloud = 220;
    int cCloud = 350;

    


    int rTree = rowSword - 10;
    int cTree = 469;

    //MAZE
    int MazeRow = 30;
    int MazeCol = 40;


    //MAZE RUNNER
    int rMazeRunner = MazeRow - 13;
    int cMazeRunner = MazeCol + 22;

    //LEVELS
    int Level = 1;
    int FlagCheckPoint = 1;

    // GAME OVER
    int FlagGameOver = 0;




    // ----------------------
    // ----------------------
    // -     GAME CODE      -
    // ----------------------
    // ----------------------


    for (;;)
    {
        for (; !_kbhit() ;) //auto
        {

            if (StartGame == 0)
            {

                for (int r = 0 ; r < 40 ; r ++)
                {
                    for (int c = 0 ; c < 150 ; c++)
                    {
                        Game[r][c] = ' ';
                    }
                }

                Menu(Game);
                ScreenMenu(Game);
            }
           
            if (StartGame == 1 && FlagGameOver == 0)
            {

                if (FlagCheckPoint == 3 && (IndC + 4 == 280 || IndC + 4 == 281))
                {
                    FlagGameOver = 10;
                }
            ctcloud++;
            TimerBulletsScreen++;
            srand(time(0));


            //CLEAR AND DRAW FRAME
            Clear_and_Draw_Map(Game);





            //BULLETS [Single n Multiple]
            if (ActivateSingleBullet == 1 && bulletX == -1 && bulletY == -1 && FlagCheckPoint == 2) 
            {
                 shootSingleBullet(Game, IndR , IndC ,bulletX, bulletY); // " Y "
            }


            if (ActivateSingleBullet == 1&& bulletX != -1 && bulletY != -1 && FlagCheckPoint == 2) 
            {
                moveSingleBullet(Game, IndR , IndC ,bulletX, bulletY , ActivateSingleBullet , TweetyHealth , DamageSpikeRow , DamageSpikeCol , SpikeHealth);
            }



            // DIAGONAL BULLET

            if (ActivateSingleBulletDiag == 1 && bulletXDiag == -1 && bulletYDiag == -1 && FlagCheckPoint == 2) 
            {
                 shootDiagBullet(Game, IndR , IndC ,bulletXDiag, bulletYDiag); // " R "
            }


            if (ActivateSingleBulletDiag == 1&& bulletXDiag != -1 && bulletYDiag != -1 && FlagCheckPoint == 2) 
            {
                moveDiagBullet(Game, IndR , IndC ,bulletXDiag, bulletYDiag , ActivateSingleBulletDiag , TweetyHealth , DamageSpikeRow , DamageSpikeCol , SpikeHealth);
            }

            //MULTIPLE
            if (ActivateMultipleBullet == 1 && FlagCheckPoint == 3) // " T "
            {

                numBullets++;
                shootMultipleBullets(Game, IndR, IndC, bulletRows, bulletCols, bulletActive, numBullets);
            }

            
            moveMultipleBullets(Game, IndR , IndR, IndC, bulletRows, bulletCols, bulletActive, numBullets, height, enemyFlag , ActivateMultipleBullet , TomHealth , DamageTomCol);
            


            //TRAPS 1st FLOOR
            Traps1stFloor(Game);
            StairToFloorAboveTraps1stLevel(Game , IndR , IndC , FlagLadderFloorAboveTraps1stLevel);
            FloorAboveTraps1stFloor(Game);
            StairsAtEndOf1stFloor(Game);


            // LASER FIRST FLOOR
            DrawLaserAboveTraps1stFloor (Game , rowLaserAboveFirstFloorTrap , columnLaserAboveFirstFloorTrap , ActivateLaser , IndR , IndC , TweetyHealth);
            MoveLaserAboveTraps1stFloor (Game , IndR , IndC , rowLaserAboveFirstFloorTrap , columnLaserAboveFirstFloorTrap , FlagMoveLaser1st, ActivateLaser);
           // LaserBeam1stFloor (Game , rowLaserAboveFirstFloorTrap , columnLaserAboveFirstFloorTrap , countLaser1stFloor , DirectionLaser1stFloor);



            //MYSTERY BOXES
            MysteryTrap(Game , FlagTrapBox);
            DestroyMysteryTrap(Game , IndR , IndC , TweetyHealth , FlagTrapBox);


            //TELEPORTING PROCESS
            TeleportStart(Game , UserMove , rTweety , cTweety, IndR , IndC , FlagTeleport , MapRowStart , MapRowEnd , MapColStart , MapColEnd , TeleportTimer , FlagCheckPoint);
            TeleportEnd (Game);


            //SecondFloor
            DrawSecondFloor(Game);

            //THIRD FLOOR
            DrawThirdFloor(Game , FlagLookLeft , FlagLookRight);

            //ELEVATOR TO THIRD FLOOR
            DrawElevatorHolder(Game , FlagCheckPoint , IndR);
            DrawElevatorToThirdFloor(Game , rowElevator);
            MoveElevatorToThirdFloor(Game , rowElevator , columnElevator , DirectionElevator , rTweety , cTweety , IndR , IndC , MapRowStart , MapRowEnd , FlagHeroElevator);
            


            // DIAGONAL ELEVATOR
            DrawElevatortoElevatorHolder(Game , rowElevator2 , columnElevator2);
            MoveElevatorToElevatorHolder(Game , rowElevator2 , columnElevator2 , DirectionElevator2 , rTweety , cTweety , IndR , IndC , MapRowStart , MapRowEnd , FlagHeroElevator2 , MapColStart , MapColEnd);
            //JUMP AND GRAVITY

            GravityTweety(Game , rTweety , IndR , IndC , ctJump , FlagJumpAgain , MapRowStart , MapRowEnd);
            JumpTweety(Game , FlagJump , rTweety , IndR , IndC , ctJump , MapRowStart , MapRowEnd , FlagJumpAgain );

            
            JumpLeft(Game , FlagJumpLeft , rTweety , cTweety , IndR , IndC , ctJump , MapRowStart , MapRowEnd , FlagJumpAgain , MapColStart , MapColEnd); // " N "
            JumpRight(Game , FlagJumpRight , rTweety , cTweety ,IndR , IndC , ctJump , MapRowStart , MapRowEnd , FlagJumpAgain , MapColStart , MapColEnd); // " M "




            //Tweety
            DrawTweety(Game , UserMove , rTweety , cTweety , IndR , IndC , Level , FlagLookLeft , FlagLookRight , FlagCheckPoint);
            MoveTweety(Game , UserMove , rTweety , cTweety , IndR , IndC , FlagJump , FlagLookLeft , FlagLookRight , MapColStart , MapColEnd , MapRowStart , MapRowEnd , FlagLadderFloorAboveTraps1stLevel , ActivateSingleBullet , ActivateMultipleBullet , FlagJumpRight , FlagJumpLeft , TweetyHealth , MOVE , DirectionBat,ActivateSingleBulletDiag);
            TweetysHealthDamage(Game , IndR , IndC ,TweetyHealth , FlagCheckPoint);
            IndicateTweetyHealth(Game , MapRowStart ,MapColStart , TweetyHealth , TweetyLives , FlagGameOver , FlagCheckPoint , rTweety , cTweety , IndR , IndC , MapRowStart , MapRowEnd , MapColStart , MapColEnd , TimerBulletsScreen);

            //SWORD
            DrawSword(Game , rowSword , colSword , IndC , FlagCheckPoint , MoveSword , UserMove , MOVE , FlagFly , rTree , cTree , IndR , FlagGameOver);


            //BAT

            DrawBat(Game , rBat , cBat);
            MoveBat (DirectionBat , cBat , TimerBat , IndC , FlagCheckPoint , CountBat);
            LaserBat (Game , rBat , cBat , DirectionBat , IndC , TweetyHealth);


            //ROCKET
            DrawRocket(Game , rRocket , cRocket , FlagRocket , TimerExplosionRocker , IndC , TweetyHealth);
            MoveRocket (IndC , rRocket , FlagRocket , FlagCheckPoint);



            //SPIKE [RAT]
            DrawSpike (Game , rowSpike , columnSpike , DamageSpikeRow , DamageSpikeCol , SpikeHealth , FlagMoveSpike , AnimationSpikeDeath);
            MoveSpike (FlagMoveSpike , IndR , IndC , StartMovingSpike , DamageSpikeCol , TweetyHealth , SSpikeFlagggg , SpikeHealth);


            //BUTTERFLY [ENEMY]
            DrawButterFly(Game , rowButterFly , columnButterFly , ShootingAreaButterFlyRow , ShootingAreaButterFlyCol , FlagButterFly);
            MoveButterFly(columnButterFly , DirectionButterFly);


            // TOM [CAT]

            DrawTom(Game , rowTom , columnTom , DamageTomRow , DamageTomCol , TomHealth , FlagMoveTom , AnimationTomDeath);
            TomBullets(Game , IndR , IndC , StartShootingBullets , cBulletTom , FlagDeadTom , TweetyHealth , columnTom , TomHealth);
            TomKnife(TomHealth , TweetyHealth , FlagMovementTom , DamageTomCol , IndC , columnTom);
            TomHealthIndicator(Game , TomHealth , DamageTomRow , DamageTomCol);
            
            
            //Designs
            Clouds(Game);
            DrawMoon(Game);
            Almost(Game);


            if (flagrain1 == 0)
                CloudRainCol1 = randRains(ShootingAreaButterFlyCol - 5, ShootingAreaButterFlyCol + 5);

            rains1(Game , CloudRainRow1 , CloudRainCol1);
            MoveRain1(Game , CloudRainRow1 , CloudRainCol1 , flagrain1 , constantrainrow , ctcloud ,IndR , IndC , TweetyHealth);



            //SHOW SCREEN
            Cout_Map_to_Screen(Game , MapRowStart , MapRowEnd , MapColStart , MapColEnd);
            }


            if (FlagGameOver == 1) // DEFEATED
            {
                
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        Game[r][col] = ' ';
                    }
                }

                GameOver(Game);
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        cout << Game[r][col];
                    }
                }
                system("cls");
            }



            if (FlagGameOver == 2) // VICTORY
            {
                
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        Game[r][col] = ' ';
                    }
                }

                WINNER(Game);
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        cout << Game[r][col];
                    }
                }
                system("cls");
            }

             // MAZE
            if (FlagGameOver == 10)
            {
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        Game[r][col] = ' ';
                    }
                }
                DrawMaze(Game , MazeRow , MazeCol);
                DrawMazeRunner(Game , rMazeRunner , cMazeRunner);




                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        cout << Game[r][col];
                    }
                }
                system("cls");
            }

        }

            


        UserMove = _getch();

        if (FlagGameOver == 10)
        {
            MoveMazeRunner(Game , UserMove , rMazeRunner , cMazeRunner , FlagGameOver , MazeRow , cTweety , IndC);
        }
        // TO START GAME
        if (UserMove == 'q')
        {
            StartGame = 1;
        }
        

        // MOVE TWEETY
        if(StartGame ==1)
            MoveTweety(Game , UserMove , rTweety , cTweety , IndR , IndC , FlagJump , FlagLookLeft , FlagLookRight , MapColStart , MapColEnd , MapRowStart , MapRowEnd , FlagLadderFloorAboveTraps1stLevel , ActivateSingleBullet , ActivateMultipleBullet , FlagJumpRight , FlagJumpLeft , TweetyHealth , MOVE , DirectionBat , ActivateSingleBulletDiag);




        //GAME OVER
        if (FlagGameOver == 1)
            {
                
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        Game[r][col] = ' ';
                    }
                }

                GameOver(Game);
                for (int r = 0 ; r < 40 ; r++)
                {
                    for (int col = 0 ; col < 150 ; col++)
                    {
                        cout << Game[r][col];
                    }
                }
                system("cls");
            }

           

    }

}

