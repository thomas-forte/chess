// Created by Tommy Forte
//
// This is currently a work in progress
//
// Current assumptions:
// -proper input of [a-h][1-8][a-h][1-8]
// -the move is legal and of your peice
//

#include <stdio.h>
#include <windows.h>

#include "structuresAndDataTypes.h"
#include "output.h"            

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Fucntions, functions, functions!
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// sets the board to the default set up
void setupBoard(piece board[8][8]) {
    for(int row = 0; row < 8; row++)
        for(int col = 0; col < 8; col++)
            board[row][col] = templatee[row][col];
}

bool isGameOver(piece board[8][8]){
    return false;
}

// asks the user for a move and puts it into these two
// objects
void getMove(struct coordinates *from, struct coordinates *to) {
    
    printf("Enter move:");
        
    from->x = getchar();
    from->y = getchar() - '0';
    
    to->x = getchar();
    to->y = getchar() - '0';
    
    //removes trailing whitespace            
    char ch;
    while (ch = getchar() != '\n'){
    }
}

// executes a move on the board
void makeMove (struct coordinates *from, struct coordinates *to, piece board[8][8]){
    board[to->y - 1][to->x - 'a'] = board[from->y - 1][from->x - 'a'];
    board[from->y - 1][from->x - 'a'] = BLANK;
}

bool legalMove (struct coordinates from, struct coordinates to, piece board[8][8], color c) {
    
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Main
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main () {
    // The game board
    piece gameBoard[8][8];
    
    // Move coordinates
    struct coordinates  entryFrom;
    struct coordinates  entryTo;
    
    // Sets up the board to default values
    setupBoard(gameBoard);
    
    // Sets up the output
    setupOutput();
    
    // Turn counter
    int turn = 1;
    
    // Game loop
    while(!isGameOver()) {
        if (turn % 2 == 1) { // is WHITE turn
            printf("White's %d turn:\n", (turn +1)/2);
            printBoard(gameBoard, WHITE);
            getMove(&entryFrom, &entryTo);
            makeMove(&entryFrom, &entryTo, gameBoard);
        } else { // is BLACK turn
            printf("Black's %d turn:\n", (turn +1)/2);
            printBoard(gameBoard, BLACK);
            getMove(&entryFrom, &entryTo);
            makeMove(&entryFrom, &entryTo, gameBoard);
        }
        printf("\n");
        turn++;
    }
    
    // End program
    return 0;
}
