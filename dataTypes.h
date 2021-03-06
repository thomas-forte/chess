// Some enums
enum color {BLACK, WHITE};
enum piece {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN, 
            BLANK, 
            WPAWN, WKNIGHT, WBISHOP, WROOK, WQUEEN, WKING};
            
// "new" board
piece templatee[8][8] = {{ROOK, KNIGHT, BISHOP, KING, QUEEN, BISHOP, KNIGHT, ROOK}, {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN}, {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}, {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}, {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}, {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}, {WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN}, {WROOK, WKNIGHT, WBISHOP, WKING, WQUEEN, WBISHOP, WKNIGHT, WROOK}};

// coordinate sturcture
struct coordinates {
    char x;
    int y;
};
