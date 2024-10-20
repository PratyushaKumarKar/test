#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

##USER_CODE_HERE##

int main() {
  std::ifstream file("/dev/problems/binary-search/tests/inputs/##INPUT_FILE_INDEX##.txt");
  std::vector<std::string> lines;
  std::string line;
  while (std::getline(file, line)) lines.push_back(line);

  file.close();
  int size_nums;
std::istringstream(lines[0]) >> size_nums;
std::vector<int> nums(size_nums);
for (int i = 0; i < size_nums; i++) {
  std::istringstream(lines[1]) >> nums[i];
}
  int target;
std::istringstream(lines[1]) >> target;
  int result = search(nums, target);
  std::cout << result << std::endl;
  return 0;
}
