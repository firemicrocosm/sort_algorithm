
#ifndef BUBBLE_H
#define BUBBLE_H

#include <iostream>

using namespace std;

template<typename T>
void bubble_sort(T arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                T tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

#endif