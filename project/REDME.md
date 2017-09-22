Sudoku is a puzzle solved using a logical placement of numbers. The goal is to place numbers from 1 to 9 in each of the  empty  cells in a big square that’s 9×9, made of subcells that are 3×3 called regions. The puzzle initially includes some clues, which are the numbers inserted in some cells, in such a way that the player can deduce the numbers which are to be placed in the empty cells. Each row,column, and region can only contain thae numbers 1 to 9.
The figures show, respectively, the initial clues used to solve the puzzle and the final solution:

 The objective of the project is to create an automatic solver of the puzzle SUDOKU the following way:
 
1. Each puzzle has a fixed  starting point that includes  9 lines. There will be 9 lines, all which have clues in them.The cells where there a ZERO indicates that the numbers in those places are supposed to be deduced according to the clues. For the example above, the initial puzzle and clues would be as following:
 
5 3 0 0 7 0 0 0 0

6 0 0 1 9 5 0 0 0

0 9 8 0 0 0 0 6 0

8 0 0 0 6 0 0 0 3

4 0 0 8 0 3 0 0 1

7 0 0 0 2 0 0 0 6

0 6 0 0 0 0 2 8 0

0 0 0 4 1 9 0 0 5

0 0 0 0 8 0 0 7 9
 
 
 
For each empty cell, there shall be a list containing the possible numbers that could be placed in these cells.Initially,  the list should include the numbers among 1 to 9. Following that, the algorithm should eliminate numbers fromt he list according to the following rules:
o Each region should contain the numbers 1 to 9 without repetition.
o Each line should contain the numbers 1 to 9 without repetion.
o Each column should contain the numbers 1 to 9 without repetion.
Each cell will have a structure of the number present and the list of numbers which are possilbe to be filled in that cell.
2.When the cell is filled with a number, this number shall be removed from the list of possilbe numbers possible for that region, row and column. If  by any chance the solution you have come to isn’t part of the code, the words “ no solution” will be printed out. It may be that the numbers you have put in aren’t the corrct in the cells they are in. If everything is correct then the correct answer will be written as follows:
 
5 3 4 6 7 8 9 1 2

6 7 2 1 9 5 3 4 8

1 9 8 3 4 2 5 6 7

8 5 9 7 6 1 4 2 3

4 2 6 8 5 3 7 9 1

7 1 3 9 2 4 8 5 6

9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9

Obs.: The final table is the correct solution for the given example above.
