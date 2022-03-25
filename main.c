int findBombs(int rows, int cols, int matrix[rows][cols]) {
  int count = 0;
  
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      int o = 0;
      int c = matrix[i][j];
      int l = j > 0 ? matrix[i][j - 1] : -1;
      int r = j < cols ? matrix[i][j + 1] : -1;
      int u = i > 0 ? matrix[i - 1][j] : -1;
      int d = (i + 1) < rows ? matrix[i + 1][j] : -1;

      if (l == -1 || c < l) {
        o++;
      }
      if (r == -1 || c < r) {
        o++;
      }
      if (u == -1 || c < u) {
        o++;
      }
      if (d == -1 || c < d) {
        o++;
      }
      if (o == 4) {
        count++;
      }
    }
  }
  
  return count;
}
