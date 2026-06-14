# 🎯 Number Guessing Game (C)

A simple console-based number guessing game written in C. The program randomly selects a number between 1 and 100, and the player has to guess it correctly using "too high" / "too low" hints.

## Features
- Random number generation using 'rand()' and 'srand()'
- Tracks how many attempts the player takes
- "Play again" option without restarting the program
- Input validation with clear console feedback

## Tech Stack
- **Language:** C
- **Concepts used:** loops, conditionals, random number generation, standard I/O

## How to Run
```bash
gcc number_guessing_game.c -o guess
./guess
