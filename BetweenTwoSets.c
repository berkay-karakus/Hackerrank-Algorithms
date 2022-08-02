int getTotalX(int a_count, int* a, int b_count, int* b) {
      int result = 0;
      int number;
      for (number = a[a_count-1]; number <= b[0]; number += a[a_count-1]){
          int isContinue = 1;
          int i = 0;
          while(isContinue == 1 && i < a_count){
              if (number % a[i] != 0)
                  isContinue = 0;    
                  i++;
          }
          i = 0;
          while(isContinue == 1 && i < b_count){
              if (b[i] % number != 0)
                    isContinue = 0;    
                i++;
          }
          if (isContinue == 1){
              result++;   
          }
          
      }
      return result;
}
