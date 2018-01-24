#include <algorithm>
#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class Maze {

private:

    static const int _S=20, U=1, R=2, D=4, L=8;
    int dx[_S], dy[_S], opposite[_S], directions[4];
    
    int width, height;
    string algo;
    vector<vector<int>> maze;

public:
    
    Maze(int _height, int _width);
    bool out_of_bounds(int nx, int ny);
    void reset();
    void draw_ascii();

    void _recursive_backtrack_dfs(int x, int y);
    void recursive_backtracker();

    void krusal();
};