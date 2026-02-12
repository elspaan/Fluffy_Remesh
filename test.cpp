#include <iostream>
#include <CGAL/Simple_cartesian.h>

// Beginner tutorials: https://doc.cgal.org/latest/Manual/tutorial_hello_world.html

// define CGAL kernel with double type coordinates and create an alias (Kernel)
typedef CGAL::Simple_cartesian<double> Kernel; 
typedef Kernel::Point_2 Point_2;
typedef Kernel::Segment_2 Segment_2;


int main() {
    // create a 2D point and print it
    Kernel::Point_2 p(1.0, 2.0);  // create 2D point with coordinates 1.0, 2.0
    // print point to the terminal. Note: std::endl = << "\n", where the latter is actually slightly faster
    std::cout << p << std::endl; 
    
    // create a second point
    Kernel::Point_2 q(2.0, 0.0);

    // compute distance
    
    
    
    return 0; // if successful, return 0
}