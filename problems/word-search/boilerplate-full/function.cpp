#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

##USER_CODE_HERE##

int main() {
  std::ifstream file("/dev/problems/word-search/tests/inputs/##INPUT_FILE_INDEX##.txt");
  std::vector<std::string> lines;
  std::string line;
  while (std::getline(file, line)) lines.push_back(line);

  file.close();
  int outer_size_board;
std::istringstream(lines[0]) >> outer_size_board;
std::vector<std::vector<int>> board(outer_size_board);
for (int i = 0; i < outer_size_board; i++) {
  int inner_size;
  std::istringstream(lines[1 + i]) >> inner_size;
  board[i] = std::vector<int>(inner_size);
  for (int j = 0; j < inner_size; j++) {
    std::istringstream(lines[2 + i]) >> board[i][j];
  }
}
  std::string word;
std::istringstream(lines[1]) >> word;
  bool result = exist(board, word);
  std::cout << result << std::endl;
  return 0;
}
