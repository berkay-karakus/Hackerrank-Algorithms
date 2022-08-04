int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
      int i;
      int j;
      int result = 0;
      for (i = 0; i < ar_count-1; i++){
          int first = *(ar+i);
          int x = first % k;
          for (j = i+1; j < ar_count; j++){
              int second = *(ar+j);
              int y = second % k;
              if ((x + y) % k == 0)
              result++;
          }
      }
      return result;
}
