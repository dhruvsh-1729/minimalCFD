#include "grid.h"
#include "solver.h"

int main() {
    cfd::Grid grid(10, 10);
    cfd::solve(grid);
    return 0;
}
