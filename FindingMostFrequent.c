// Aim: Finding most frequent number in given sorted array
// Time Complexity (worst, avg, best): O(n)
// Space Complexity: O(1)

int migratoryBirds(int arr_count, int* arr) {
    int i;
    int count = 1;
    int max = 1;
    int max_id = 0;
    for (i = 1; i < arr_count; i++){
        if (*(arr+i) == *(arr+i-1)){
            count++;
            if (count > max)
            max = count;
            max_id = *(arr+i);
        }
        else 
        count = 1;
    }
    return max_id;
}
