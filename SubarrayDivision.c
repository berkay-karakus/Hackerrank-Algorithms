int birthday(int s_count, int* s, int d, int m) {
      int optimum = 0;
      int result = 0;
      int i;       
      for (i = 0; i < m; i++){
          optimum += *(s + i); 
      }
      if (d == optimum)
      result++;
      for (i = m; i < s_count; i++){
          int close = *(s+i) - *(s+i-m);
          if (close == d - optimum)
          result++;
          optimum += close;
      }
      return result;
}
