# tetris
This is my 1st semester project where i created a tetris game
## Introduction

The project revolves around a game development task focusing on programming fundamentals. It entails the creation of pieces within an array, loading images into texture objects, and implementing functionalities for a game window using SFML (Simple and Fast Multimedia Library).

## Working

The main function initializes essential components like the game window, textures, sprites, and a clock for timing functionalities. It continuously listens for events such as key presses (UP, LEFT, RIGHT, and DOWN keys), window closure, and handles corresponding actions like piece rotation, movement, and delay adjustments. The program maintains a game grid and renders elements based on their positions and textures.

### Function Calls

#### `move()`
Handles the movement of game elements.

#### `spin(rotate)`
Executes rotation logic based on the 'rotate' flag.

#### `fallingPiece(timer, delay)`
Manages the falling of game pieces based on timer and delay.

#### `Line()`
Handles the formation of lines within the game grid.

## Technology

### SFML Library
The project leverages SFML for graphics rendering, event handling, and window management. SFML provides a robust framework for creating interactive multimedia applications.

### C++
The programming language used for this project is C++, known for its performance and versatility, particularly in game development.

### Textures and Sprites
Images are loaded into texture objects (`obj1`, `obj2`, `obj3`) from the "img" directory, including frames, tiles, and backgrounds, which are then rendered as sprites within the game window.

## Conclusion

This project demonstrates fundamental programming concepts in game development, including event handling, graphical rendering, and game logic implementation using C++ and the SFML library. It emphasizes the creation and manipulation of game elements, incorporating user input for interactive gameplay. The adherence to best practices, such as separating functionalities into header files, enhances the project's readability and maintainability.

*Note: The report can be further detailed with additional explanations or specific insights into individual functions and their functionalities.*
