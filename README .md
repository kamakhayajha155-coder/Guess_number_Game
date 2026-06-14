# 🎯 Number Guessing Game (C)

A simple console-based number guessing game written in C. The program randomly selects a number between 1 and 100, and the player has to guess it correctly using "too large" / "too small" hints.

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

SAMPLE CODE
===== NUMBER GUESSING GAME =====
I'm thinking of a number between 1 and 100.
Can you guess it?

Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37

Correct! The number was 37.
You guessed it in 3 attempt(s).

Play again? (1 = Yes, 0 = No): 0
