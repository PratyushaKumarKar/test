##USER_CODE_HERE##

const input = require('fs').readFileSync('/dev/problems/binary-search/tests/inputs/##INPUT_FILE_INDEX##.txt', 'utf8').trim().split('\n').join(' ').split(' ');
const size_nums = parseInt(input.shift());
const nums = input.splice(0, size_nums).map(Number);
  const target = parseInt(input.shift());
const result = search(nums, target);
console.log(result);
    