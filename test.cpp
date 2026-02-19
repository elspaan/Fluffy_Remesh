/* compile code : g++ <file_name> -o name-of-program
run code: ./name-of-program
*/


#include <iostream>
#include <CGAL/Simple_cartesian.h> // a struct - https://doc.cgal.org/latest/Kernel_23/structCGAL_1_1Simple__cartesian.html

// Beginner tutorials: https://doc.cgal.org/latest/Manual/tutorial_hello_world.html

// define CGAL kernel with double type coordinates and create an alias (Kernel)
typedef CGAL::Simple_cartesian<double> Kernel;  // Cartesian grid
typedef Kernel::Point_2 Point_2; // This is a type representing points in 2D with the alias Point_2
typedef Kernel::Segment_2 Segment_2; // THis is a type representing segments in 2D with the alias Segment_2


int main() {
    /* Create some points and segments in 2D space and compute
        - distance btwn points
        - distance btwn point and segment
        - 
    
    */
    // create 2D points and print its
    Point_2 p(1.0, 1.0), q(10.0, 10.0);  // coordinates (x, y)

    // print point to the terminal. Note: std::endl = << "\n", where the latter is actually slightly faster
    std::cout << "p = " << p << std::endl;
    std::cout << "q = " << q << std::endl;
    std::cout << "q is also " << q.x() << " " << q.y() << std::endl;
    
    // "Shortest euclidian distance between two geometric object"
    // = the shortest, straightest distance
    std::cout << "Squared-distance(p,q) = " << CGAL::squared_distance(p, q) << std::endl;
    
    // segment time - create a segment of points p and q, and compute the distance between
    // it and a 3rd point m.
    Segment_2 s(p,q);
    Point_2 m(5, 9);

    std::cout << "m = " << m << std::endl;
    std::cout << "distance segment to m = " << CGAL::squared_distance(s,m) << std::endl;
    

    
    return 0; // if successful, return 0
}