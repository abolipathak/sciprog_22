int isMagicSquare(int **square, const int n)
{
  // Eliminate the case for negative n
  if(n<0){
    return 0;
  }

  int magic_number = 0;
  int off_diag_sum = 0;
  int i,j;
  for(i=0;i<n;i++){
    //diagonal summation
    magic_number += square[i][i];
    off_diag_sum += square[i][n-i-1];
  }

  if(off_diag_sum != magic_number){
    return 0;
  }

  for(i=0;i<n;i++){
    int rowsum = 0;
    int colsum = 0;

    for(j=0;j<n;j++){
      rowsum += square[i][j];
      colsum += square[j][i];
    }

    if(rowsum != magic_number || colsum != magic_number){
      return 0;
      //return 0 if not a magic square
    }
  }
  // If passed all checks, it is a magic square
  return 1;
}
