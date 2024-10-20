##USER_CODE_HERE##

const input = require('fs').readFileSync('/dev/problems/word-search/tests/inputs/##INPUT_FILE_INDEX##.txt', 'utf8').trim().split('\n').join(' ').split(' ');
const outer_size_board = parseInt(input.shift());
const board = [];
for (let i = 0; i < outer_size_board; i++) {
  const inner_size = parseInt(input.shift());
  const innerList = input.splice(0, inner_size).map(Number);
  board.push(innerList);
}
  const word = parseInt(input.shift());
const result = exist(board, word);
console.log(result);
    