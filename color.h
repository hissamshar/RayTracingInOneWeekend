#ifndef COLOR_H
#define COLOR_H
#include "vec3.h"
#include <iostream>


// another alias of vec3 class
using color = vec3;

void write_color(std::ostream& out, const color& pixel_color){


      auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // logic to change bit value to component value 
    int rbyte = int(255.999 * r);
int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    // Write out the pixel color components.
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif

