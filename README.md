# Tic-Tac-Toe (Console)

A two-player Tic-Tac-Toe game for the terminal, written in plain C++ with no dependencies.

## Features

- Two human players enter their names and take turns.
- Board positions are chosen by number (1 to 9), matching a printed layout.
- Input validation rejects occupied or out-of-range cells.
- Detects wins across rows, columns, and diagonals, and announces the winner.

## Build and run

```bash
g++ -std=c++17 -o tictactoe "source code.cpp"
./tictactoe
```

On Windows with MinGW:

```bash
g++ -o tictactoe.exe "source code.cpp"
tictactoe.exe
```

## Example

```
select the number which you wanted to insert
 1 2 3
 4 5 6
 7 8 9
|_ _ _ |
|_ _ _ |
|_ _ _ |
```

Written as an early C++ practice project.
