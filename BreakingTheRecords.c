int* breakingRecords(int scores_count, int* scores, int* result_count) {
       int i;
       int min, max = scores[0];
       int count_min, count_max = 0;
       *result_count = 2;
       int *result = malloc(sizeof(int) * (*result_count));
       for (i = 1; i < scores_count; i++){ 
           if (scores[i] < min){
               min = scores[i];
               count_min++;
           }
           if (scores[i] > max){
               max = scores[i];
               count_max++;
           }
       }
       *result = count_max;
       *(result+1) = count_min;
       return result;
}
