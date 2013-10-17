// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Created by Thomas Forte
// 
// Self contained file for all output functions required
// - setupOutput()
// - printPiece()
// - printBoard()
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

// Color definitions for output
#define WHITE_COLOR 15 // white on black
#define BLACK_COLOR 8  // gray on black
#define TEXT_COLOR 12  //red on black
HANDLE hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// void setupOutput()
//   sets the font color and background before the game loop is started
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void setupOutput() {
    // Sets the intial color
    SetConsoleTextAttribute(hConsole, TEXT_COLOR);
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// void printPiece()
//   Will print only one charecter per call, this charecter will correspond
//   to the type of piece p it is called with. The peice colors are defined
//   by constants.
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void printPiece (piece p) {
    switch (p){
        case BLANK:
            printf(" ");
			break;
		case PAWN:
            SetConsoleTextAttribute(hConsole, BLACK_COLOR);
            printf("P");
            break;
	    case WPAWN:
            SetConsoleTextAttribute(hConsole, WHITE_COLOR);
            printf("P");
            break;
		case KNIGHT:
            SetConsoleTextAttribute(hConsole, BLACK_COLOR);
			printf("L");
			break;
		case WKNIGHT:
            SetConsoleTextAttribute(hConsole, WHITE_COLOR);
            printf("L");
            break;
		case BISHOP:
            SetConsoleTextAttribute(hConsole, BLACK_COLOR);
			printf("B");
			break;
		case WBISHOP:
            SetConsoleTextAttribute(hConsole, WHITE_COLOR);
            printf("B");
            break;
		case ROOK:
            SetConsoleTextAttribute(hConsole, BLACK_COLOR);
			printf("R");
			break;
		case WROOK:
            SetConsoleTextAttribute(hConsole, WHITE_COLOR);
            printf("R");
            break;
		case QUEEN:
            SetConsoleTextAttribute(hConsole, BLACK_COLOR);
			printf("Q");
			break;
		case WQUEEN:
            SetConsoleTextAttribute(hConsole, WHITE_COLOR);
            printf("Q");
            break;
		case KING:
            SetConsoleTextAttribute(hConsole, BLACK_COLOR);
			printf("K");
			break;
		case WKING:
            SetConsoleTextAttribute(hConsole, WHITE_COLOR);
            printf("K");
            break;
    }
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// void printBoard()
//   Will print the entire board with labeled rows and columns from color c's
//   perspective. 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void printBoard (piece board[8][8], color c){
    if (c == WHITE) { // white veiw
        SetConsoleTextAttribute(hConsole, TEXT_COLOR);
        printf("  a   b   c   d   e   f   g   h\n");
        printf(" -------------------------------\n");
        for (int row = 0; row < 8; row++) {
            SetConsoleTextAttribute(hConsole, TEXT_COLOR);
            printf("|");
            for (int col = 0; col < 8; col++) {
                SetConsoleTextAttribute(hConsole, TEXT_COLOR);
                printf(" ");
                printPiece(board[row][col]);
                SetConsoleTextAttribute(hConsole, TEXT_COLOR);
                printf(" |");
            }
            SetConsoleTextAttribute(hConsole, TEXT_COLOR);
            printf(" %d\n", row + 1);
        }
        SetConsoleTextAttribute(hConsole, TEXT_COLOR);
        printf(" -------------------------------\n");
    } else { // black veiw
        SetConsoleTextAttribute(hConsole, TEXT_COLOR);
        printf("  h   g   f   e   d   c   b   a\n");
        printf(" -------------------------------\n");
        for (int row = 7; row > -1; row--) {
            SetConsoleTextAttribute(hConsole, TEXT_COLOR);
            printf("|");
            for (int col = 7; col > -1; col--) {
                SetConsoleTextAttribute(hConsole, TEXT_COLOR);
                printf(" ");
                printPiece(board[row][col]);
                SetConsoleTextAttribute(hConsole, TEXT_COLOR);
                printf(" |");
            }
            SetConsoleTextAttribute(hConsole, TEXT_COLOR);
            printf(" %d\n", row+1);
        }
        SetConsoleTextAttribute(hConsole, TEXT_COLOR);
        printf(" -------------------------------\n");
    }
}
