#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void swap(char &from, char &to);

int main() {

  string row[5] = { "0 0 0 0 0",
"0 0 0 0 0",
"0 0 0 0 0",
"0 0 0 0 0",
"0 0 0 0 1"};
  
  for(int i = 0; i < 5; i++) {
    // getline(cin, row[i]);
    row[i].erase(remove_if(row[i].begin(), row[i].end(), ::isspace), row[i].end());
  }

  // swap(row[1][4], row[1][3]);

  for(int i = 0; i < 5; i++) {
    cout << row[i] << endl;
  }

  int count = 0;

  while (row[2][2] != '1') {
    for(int i = 0; i < 5; i++) {
      for(int j = 0; j < row[i].length(); j++) {
        
        if(i == 2 && j == 2 && row[i][j] == 1) {
        break;
        }
        if(row[i][j] == '1' && row[i][j + 1] == '0' && j < 2) {
          swap(row[i][j], row[i][j + 1]);
          count++;
        }

        if(row[i][j] == '1' && row[i][j - 1] == '0' && j > 2) {
          swap(row[i][j], row[i][j - 1]);
          count++;
        }

        if(row[i][j] == '1' && row[i + 1][j] == '0' && i < 2) {
          swap(row[i][j], row[i + 1][j]);
          count++;
        }

        if(row[i][j] == '1' && row[i - 1][j] == '0' && i > 2) {
          swap(row[i][j], row[i - 1][j]);
          count++;
        }
      }
    }
  }

  cout << count << endl;
  
}

void swap(char &from, char &to) {
  char temp = to;
  to = from;
  from = temp;
}
