#ifndef SELECT_SORT_H
#define SELECT_SORT_H

template<typename T>
void select_sort(T arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int max_id=0;
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[max_id])
                max_id = j;
        }

        swap(arr[max_id], arr[n-i-1]);

    }
}

#endif