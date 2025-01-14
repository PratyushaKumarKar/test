import java.io.*;
import java.util.*;

public class Main {

    ##USER_CODE_HERE##

    public static void main(String[] args) {
        String filePath = "/dev/problems/word-search/tests/inputs/##INPUT_FILE_INDEX##.txt";
        List<String> lines = readLinesFromFile(filePath);
        int outerSize_board = Integer.parseInt(lines.get(0).trim());

          List<List<Integer>> board = new ArrayList<>();

          for (int i = 0; i < outerSize_board; i++) {

            int innerSize = Integer.parseInt(lines.get(1).trim());

            List<Integer> innerList = new ArrayList<>();

            String[] inputStream = lines.get(2).trim().split("\s+");

            for (String inputChar : inputStream) {

              innerList.add(Integer.parseInt(inputChar));

            }

            board.add(innerList);

          }

  String word = String.parseString(lines.get(3).trim());
        boolean result = exist(board, word);
        System.out.println(result);
    }

    public static List<String> readLinesFromFile(String filePath) {
        List<String> lines = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = br.readLine()) != null) {
                lines.add(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return lines;
    }
}