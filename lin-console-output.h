// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Created by Thomas Forte
// 
// Self contained file for all output functions required
// - setupOutput()
// - printPiece()
// - printBoard()
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

// Color definitions for output
#define WHITE_COLOR "\033[0;37m" // white on black
#define BLACK_COLOR "\033[0;34m"  // blue on black
#define TEXT_COLOR "\033[0;31m"  //red on black

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// void setupOutput()
//   sets the font color and background before the game loop is started
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void setupOutput() {
    // Sets the intial color
    printf(BLACK_COLOR);
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
            printf(BLACK_COLOR);
            printf("P");
            break;
	    case WPAWN:
            printf(WHITE_COLOR);
            printf("P");
            break;
		case KNIGHT:
            printf(BLACK_COLOR);
			printf("L");
			break;
		case WKNIGHT:
            printf(WHITE_COLOR);
            printf("L");
            break;
		case BISHOP:
            printf(BLACK_COLOR);
			printf("B");
			break;
		case WBISHOP:
            printf(WHITE_COLOR);
            printf("B");
            break;
		case ROOK:
            printf(BLACK_COLOR);
			printf("R");
			break;
		case WROOK:
            printf(WHITE_COLOR);
            printf("R");
            break;
		case QUEEN:
            printf(BLACK_COLOR);
			printf("Q");
			break;
		case WQUEEN:
            printf(WHITE_COLOR);
            printf("Q");
            break;
		case KING:
            printf(BLACK_COLOR);
			printf("K");
			break;
		case WKING:
            printf(WHITE_COLOR);
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
        printf(TEXT_COLOR);
        printf("  a   b   c   d   e   f   g   h\n");
        printf(" -------------------------------\n");
        for (int row = 0; row < 8; row++) {
            printf(TEXT_COLOR);
            printf("|");
            for (int col = 0; col < 8; col++) {
                printf(TEXT_COLOR);
                printf(" ");
                printPiece(board[row][col]);
                printf(TEXT_COLOR);
                printf(" |");
            }
            printf(TEXT_COLOR);
            printf(" %d\n", row + 1);
        }
        printf(TEXT_COLOR);
        printf(" -------------------------------\n");
    } else { // black veiw
        printf(TEXT_COLOR);
        printf("  h   g   f   e   d   c   b   a\n");
        printf(" -------------------------------\n");
        for (int row = 7; row > -1; row--) {
            printf(TEXT_COLOR);
            printf("|");
            for (int col = 7; col > -1; col--) {
                printf(TEXT_COLOR);
                printf(" ");
                printPiece(board[row][col]);
                printf(TEXT_COLOR);
                printf(" |");
            }
            printf(TEXT_COLOR);
            printf(" %d\n", row+1);
        }
        printf(TEXT_COLOR);
        printf(" -------------------------------\n");
    }
}
