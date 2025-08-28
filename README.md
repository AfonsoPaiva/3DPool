# 3DPool - 3D Billiards Simulation


A 3D pool game implementation using OpenGL and C++ featuring animation, collision detection, and 3D rendering.

[![3dpoolgiff.gif](https://i.postimg.cc/vHzZ95sh/3dpoolgiff.gif)](https://postimg.cc/w71zYy3R)

## Features

- Realistic 3D pool table and balls rendering
- Physics-based ball movement and collision system
- Interactive cue stick control with precise aiming mechanics
- Multiple camera perspectives
- Standard 8-ball pool rules implementation
- Game state tracking and scoring system

## Installation

### Prerequisites
- C++ Compiler (GCC, Clang, or MSVC)
- CMake (version 3.10 or higher)
- OpenGL (version 3.3 or higher)
- GLFW
- GLAD
- GLM

### Build Instructions

1. Clone the repository:
``` bash
git clone https://github.com/AfonsoPaiva/3DPool.git
cd 3DPool
```
3. Build the project:
 ``` bash
mkdir build && cd build
cmake ..
make
```
5. Run the game:
 ``` bash
./3DPool
```

## Controls

- Mouse Movement: Aim the cue stick
- Left Mouse Button: Charge and take a shot (hold to increase power)
- Right Mouse Button: Switch camera views
- WASD Keys: Move the camera in free view mode
- Space: Reset the camera to default position
- ESC: Exit the game



## Contributing

Contributions are welcome. Please follow these steps:

1. Fork the project
2. Create your feature branch (git checkout -b feature/NewFeature)
3. Commit your changes (git commit -m 'Add NewFeature')
4. Push to the branch (git push origin feature/NewFeature)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- LearnOpenGL for OpenGL tutorials
- GLFW, GLAD, and GLM libraries
- All project contributors
