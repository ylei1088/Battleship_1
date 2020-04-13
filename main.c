#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int board[ 10 ][ 10 ]; // Two-dimensional array for gameboard.

        // Function to initialize the gameboard.
        
        // create a blank board   
        for (int x=0; x<10; x++) {
            for (int y=0; y<10; y++) {
                board[x][y] = 0;//0 = empty slot
               
            }  
               
        }     
        
        for(int x = 0;  x < 5; x++)
        {
     
            board[rand() % 10][rand() % 10] = 1;
            
        }

              std::cout << "\n";
         for (int x=0; x<10; x++) {
            for (int y=0; y<10; y++) {
                std::cout << board[x][y] << " ";
            }    
            std::cout << "\n";
        }  
}

