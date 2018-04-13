/*
 *bubble sort 
 */
void bubble_sort(int *array, int length)
{
    int i, j, temp;
    for (i = 0; i < length; i++){
        for (j = 1; j < length - i; j++){
            if (array[j - 1] > array[j]){
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}
//end bubble_sort
/*
 *quick_sort
 */
void quick_sort(int *array, int left, int right){
    if(left < right){
        int key = array[left];
        int low = left;
        int high = right;
        while(low < high){
            while(low < high && array[high] >= key){
                high--;
            }
            array[low] = array[high];
            while(low < high && array[low] <= key){
                low++;
            }
            array[high] = array[low];
        }
        array[low] = key;
        quick_sort(array,left,low-1);
        quick_sort(array,low+1,right);
    }
}
//end quick_sort
