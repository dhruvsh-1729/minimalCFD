#ifndef GRID_H
#define GRID_H

namespace cfd {

class Grid {
public:
    Grid(int nx, int ny);
    ~Grid();

    void initialize();

private:
    int nx_, ny_;
    double* data_;
};

} // namespace cfd

#endif // GRID_H
