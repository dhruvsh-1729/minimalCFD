#include "grid.h"
#include <iostream>

namespace cfd {

void solve(Grid& grid) {
    grid.initialize();
    std::cout << "Solving CFD problem...\n";
}

} // namespace cfd
