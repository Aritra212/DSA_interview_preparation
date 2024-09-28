// Rotate Image LeetCode - 48

const rotate = function (matrix) {
  const m = matrix.length;
  const n = m;

  // make tanspose matrix
  for (let i = 0; i < m; ++i) {
    for (let j = i; j < n; ++j) {
      const tmp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = tmp;
    }
  }

  //reverse rows
  for (let i = 0; i < m; ++i) {
    matrix[i].reverse();
  }
};
