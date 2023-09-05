# Simple many dimensional point class

```bash
mkdir ThirdParty
cd ThirdParty
git submodule add https://github.com/tereshkinvadimst/SimplePoint
```

Cmake reciept to add point class in your project:

```cmake
target_link_libraries(project_name point)
```
```c++
#include <Point.hpp>
//....
```

Example of using a class:

```c++
/**
 * some coordynate system structure
*/
struct Cartesian {
    /*...*/
};

int main() {
    /// dimensional of point
    const std::size_t DIM = 3;
    simple_point::Point<double,     // data type
                        DIM,        // dimensional
                        Cartesian   // coordynate system
                        > point_xyz(10 /*init value*/);

    point_xyz.set<0>(33.);  // set new value in some dimensional
    point_xyz.get<0>();     // get value
    return 0;
}
```

