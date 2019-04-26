#ifndef INSERT_SORT_H
#define INSERT_SORT_H

template<typename T>
void insert_sort(T arr[], int n)
{
    for(int i=0;i<n; i++){
        T cur = arr[i];
        int insert_p = i;
        for(int j=i-1; j>=0; j--)
        {
            if(cur < arr[j])
                insert_p--;
            else
            {
                break;
            }
            
        }
        if (insert_p < i){
            for(int k = i; k>insert_p; k--)
                arr[k] = arr[k-1];
        
            arr[insert_p] = cur;
        }
    }
}

#endif