use std::fs::read_to_string;
use std::io::{self};
use std::str::Lines;

##USER_CODE_HERE##

fn main() -> io::Result<()> {
  let input = read_to_string("/dev/problems/word-search/tests/inputs/##INPUT_FILE_INDEX##.txt")?;
  let mut lines = input.lines();
  let outer_size_board: usize = lines.next().unwrap().parse().unwrap();
let mut board: Vec<Vec<i32>> = Vec::new();
for _ in 0..outer_size_board {
  let inner_size: usize = lines.next().unwrap().parse().unwrap();
  let innerList: Vec<i32> = lines.next().unwrap().split_whitespace().filter_map(|x| x.parse().ok()).collect();
  board.push(innerList);
}
  let word: String = lines.next().unwrap().parse().unwrap();
  let result = exist(board, word);
  println!("{}", result);
  Ok(())
}
