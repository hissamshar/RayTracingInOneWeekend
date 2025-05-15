# Ray Tracing in One Weekend — C++ Implementation

This project is a C++ implementation of Peter Shirley’s [*Ray Tracing in One Weekend*](https://raytracing.github.io/books/RayTracingInOneWeekend.html), a foundational guide to building a simple yet powerful ray tracer from scratch. It serves as both a learning exercise and a stepping stone for more advanced rendering techniques.

---

## Using CMake

This project uses **CMake** to manage the build process. CMake is a cross-platform tool that generates native build files for your compiler and IDE.

### Installing CMake on Arch Linux

If you're using Arch Linux (or an Arch-based distro like Manjaro), install CMake using `pacman`:

```bash
sudo pacman -S cmake
```

You can verify the installation with:

```bash
cmake --version
```

---

## Building and Running

### Prerequisites

- A C++17 compatible compiler (e.g., `g++`, `clang++`)
- `cmake` installed (see above)

### Build Steps

1. Clone the Repository:

```bash
git clone https://github.com/hissamshar/RayTracingInOneWeekend.git
cd RayTracingInOneWeekend
```

2. Generate Build Files and Compile:

```bash
cmake -B build
cmake --build build
```

3. Run the Executable:

```bash
./build/RayTracingInOneWeekend
```

This will generate a PPM image file such as `hisam.ppm`.

---

## Current Implementation Status

The current version implements:

- Basic ray-sphere intersections  
- Normal visualization shading  
- Simple camera system  
- Two spheres in the scene (one small sphere and one large ground sphere)  

---

## Next Steps

Future improvements could include:

- Adding materials (diffuse, metal, dielectric)  
- Implementing antialiasing  
- Adding more geometric primitives  
- Implementing depth of field  
- Adding lighting models  

---

## Learning Objectives

This project helps build knowledge of:

- Ray-object intersection logic  
- Surface normal computation  
- Basic shading and rendering techniques  
- Camera simulation  
- Foundational concepts in 3D graphics  

---

## What I'm Learning

While working on this ray tracer, I'm also deepening my understanding of several important C++ and math concepts:

- **Modern C++ features** — Using C++17 features to write clean and efficient code.
- **Smart pointers** — Leveraging `std::shared_ptr` and `std::make_shared` for safe and automatic memory management.
- **Type aliasing** — Using the `using` keyword to improve readability and simplify complex types.
- **Operator overloading** — Implementing mathematical operators (`+`, `-`, `*`, etc.) for custom vector classes to make math expressions more natural and intuitive.
- **`auto` keyword** — Reducing boilerplate and improving code clarity through type inference.
- **Math through code** — Applying geometric and vector math directly in code to simulate physical light behavior and 3D space interactions.

This project has been both a coding and mathematical learning experience.

---

## Acknowledgments

This project is based on the *Ray Tracing in One Weekend* book series by **Peter Shirley**.  
Special thanks to the author for making this excellent learning resource available for free.
