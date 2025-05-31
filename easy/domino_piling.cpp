#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
  int m, n =0;
  cin >> m >> n;

  int board[m][n];
  
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      board[i][j] = 0;
    }
  }
  
  int x = 0;
  
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      if( board[i][j] == 0 && board[i][j + 1] == 0 && (j + 1 < n)) {
        x++;
        board[i][j] = x;
        board[i][j + 1] = x;
      }
 
      if( board[i][j] == 0 && board[i + 1][j] == 0 && (i + 1 < m)) {
        x++;
        board[i + 1][j] = x;
        board[i][j] = x;
      } 
    }
  }
 
  cout << x;
}
