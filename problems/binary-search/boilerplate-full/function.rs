use std::fs::read_to_string;
use std::io::{self};
use std::str::Lines;

##USER_CODE_HERE##

fn main() -> io::Result<()> {
  let input = read_to_string("/dev/problems/binary-search/tests/inputs/##INPUT_FILE_INDEX##.txt")?;
  let mut lines = input.lines();
  let size_nums: usize = lines.next().unwrap().parse().unwrap();
let nums: Vec<i32> = lines.next().unwrap().split_whitespace().filter_map(|x| x.parse().ok()).collect();
  let target: i32 = lines.next().unwrap().parse().unwrap();
  let result = search(nums, target);
  println!("{}", result);
  Ok(())
}
