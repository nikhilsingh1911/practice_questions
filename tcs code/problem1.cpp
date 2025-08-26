#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Cell
{
   int row, col, steps;
};
vector<pair<int, int>> getDirection(int x, int y)
{
   vector<pair<int, int>> dirs;
   dirs.push_back({x, y});
   dirs.push_back({y, -x});
   dirs.push_back({-y, x});
   dirs.push_back({-x, -y});
   return dirs;
}
bool isValid(int row, int col, int M, int N, const vector<vector<int>> &grid, const vector<vector<bool>> &visit)
{
   return row >= 0 && row < M && col >= 0 && col < N &&
          grid[row][col] == 0 && !visit[row][col];
}
int minMoves(
    const vector<vector<int>> &grid,
    int startRow, int startCol,
    int endRow, int endCol,
    int x, int y)
{
   int M = grid.size(), N = grid[0].size();
   auto directions = getDirection(x, y);
   vector<vector<bool>> visited(M, vector<bool>(N, false));
   queue<Cell> q;
   q.push({startRow, startCol, 0});
   visited[startRow][startCol] = true;
   while (!q.empty())
   {
      Cell cell = q.front();
      q.pop();
      if (cell.row == endRow && cell.col == endCol)
         return cell.steps;
      for (auto dir : directions)
      {
         int newRow = cell.row + dir.first;
         int newCol = cell.col + dir.second;
         if (isValid(newRow, newCol, M, N, grid, visited))
         {
            visited[newRow][newCol] = true;
            q.push({newRow, newCol, cell.steps + 1});
         }
      }
   }
   return -1;
}
int main()
{
   int M, N;
   cin >> M >> N;
   vector<vector<int>> grid(M, vector<int>(N));
   for (int i = 0; i < M; ++i)
   {
      for (int j = 0; j < N; ++j)
      {
         cin >> grid[i][j];
      }
   }
   int startRow, startCol, endRow, endCol, x, y;
   cin >> startRow >> startCol >> endRow >> endCol >> x >> y;
   cout << minMoves(grid, startRow, startCol, endRow, endCol, x, y) << endl;
   return 0;
}