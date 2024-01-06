class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        def contain_duplicates(n):
            d = {}
            for i in n:
                if i == ".":
                    continue
                elif d.get(i) is not None:
                    return True
                else:
                    d[i] = 1
            return False

        for row in board:
            if contain_duplicates(row):
                return False

        for n_col in range(len(board)):
            a = []
            for col in range(len(board)):
                a.append(board[col][n_col])

            if contain_duplicates(a):
                return False

        boxes = []
        for i in range(0, 9, 3):
            for j in range(0, 9, 3):
                b = []
                b.append(board[i][j])
                b.append(board[i][j + 1])
                b.append(board[i][j + 2])
                b.append(board[i + 1][j])
                b.append(board[i + 1][j + 1])
                b.append(board[i + 1][j + 2])
                b.append(board[i + 2][j])
                b.append(board[i + 2][j + 1])
                b.append(board[i + 2][j + 2])

                boxes.append(b)

        for b in boxes:
            if contain_duplicates(b):
                return False

        return True
        
        