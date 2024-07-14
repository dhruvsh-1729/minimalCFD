#include "grid.h"
#include <iostream>

namespace cfd {

Grid::Grid(int nx, int ny)
    : nx_(nx), ny_(ny) {
    data_ = new double[nx_ * ny_];
}

Grid::~Grid() {
    delete[] data_;
}

void Grid::initialize() {
    std::fill(data_, data_ + nx_ * ny_, 0.0);
    std::cout << "Grid initialized.\n";
}

} // namespace cfd
