# Filler

A basic algorithm trying to outcompete its opponent.

The concept of the game: Two players gain points by placing pieces on a board. The pieces are obtained by the game master, an executable Ruby program.

## Installation:

`git clone https://github.com/fpetras/filler.git && cd filler && make`

## Usage:

`./filler_vm -f <map_file> -p1 <player1.filler> -p2 <player2.filler>`

### Game rules:

 - Two players fight each other. They play one after the other.
 - The goal is to collect as many points as possible by placing the highest number of pieces of the game board.
 - The board is defined by X columns and Y rows.
 - At the beginning of each turn, the player will receive a game piece.
 - A piece is defined by X columns and Y rows. Each piece includes a shape of one or more cells.
 - To be able to place a piece on the board, it is mandatory that one, and only one cell of the shape of the piece covers the cell of a previously placed piece.
 - The shape must not exceed the dimensions of the board.
 - When the game starts, the board already contains one shape.
 - The game stops either when a game piece cannot be placed anymore or when it has been wrongly placed.

 #### Example of a board:

 ```
Plateau 14 30:
     012345678901234567890123456789
000 ..............................
001 ..............................
002 ..............................
003 ..............................
004 ..............................
005 ..............................
006 ..............................
007 ..O...........................
008 ..............................
009 ..............................
010 ..............................
011 ...........................X..
012 ..............................
013 ..............................
```

#### Example of a piece:

```
Piece 4 5:
.**..
.***.
..*..
.....
```

### In action:

![GIF](http://g.recordit.co/l60MbDGhlO.gif)

## Code snippet:

Checking whether a piece can be placed:

```C
int   ft_check_coordinate(int i, int j, char enemy_piece, t_filler *f)
{
    int i2;
    int j2;
    int is_valid;

    i2 = 0;
    is_valid = 0;
    while (i2 < f->piece_height)
    {
        j2 = 0;
        while (j2 < f->piece_width)
        {
            if (f->map[i + i2][j + j2] == enemy_piece &&
                f->piece[i2][j2] == '*')
                return (0);
            if ((f->map[i + i2][j + j2] == f->my_piece ||
                f->map[i + i2][j + j2] == f->my_piece + 32) &&
                f->piece[i2][j2] == '*')
                is_valid++;
            if (is_valid > 1)
                return (0);
            j2++;
        }
        i2++;
    }
    return (is_valid);
```

## [Subject](https://github.com/fpetras/42-subjects/blob/master/filler.en.pdf "filler.en.pdf")
