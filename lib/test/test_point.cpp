#include <iostream>
#include <Point.hpp>


struct Cartesian {
};



int main() {
    const std::size_t DIM = 3;
    simple_point::Point<double, DIM, Cartesian> point_xyz(10);

    std::cout << "dimensional = " << point_xyz.DIM << '\n';

    std::cout << point_xyz.get<0>() << '\n';
    point_xyz.set<0>(33.);
    std::cout << point_xyz.get<0>() << '\n';
    return 0;
}