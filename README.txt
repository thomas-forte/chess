To-Do
=====

-check moves for validation
-build isGameOver()
-toy with gui

About
=====

A simple chess game.

Algorithm
=========

while (there is no winner and there is a valid move and players want to play) do

    |if (its whites turn)

    ||display the board from the turns prospective

    ||ask for input for the turn

    ||check if this is a valid move for this player to make

    ||execute move

    |else (its blacks turn)

    ||same as if but with black as the turns player

    |end

    |check if there are avalible moves

    |check if there is a winner
    
    |check if the game still wants to be played
    
    end

Implementation
==============

board[row][col] = board[a-h][1-8] = board[a..h - a][1..8 - 1]

    a   b   c   d   e   f   g   h
   -------------------------------
  | R | L | B | K | Q | B | L | R | 1
  | P | P | P | P | P | P | P | P | 2
  |   |   |   |   |   |   |   |   | 3
  |   |   |   |   |   |   |   |   | 4
  |   |   |   |   |   |   |   |   | 5
  |   |   |   |   |   |   |   |   | 6
  | P | P | P | P | P | P | P | P | 7
  | R | L | B | K | Q | B | L | R | 8
   -------------------------------
