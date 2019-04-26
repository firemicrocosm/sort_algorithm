#include <iostream>
#include <ctime>
#include <cstdlib>

#include "bubble_sort.h"
#include "select_sort.h"
#include "insert_sort.h"

using namespace std;

template<typename T>
void printArr(T arr[], int n){
    for(int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template<typename T>
void generateRandomArr(T arr[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
        arr[i] = rand()%n;
}

template<typename T>
void generateNearlySortedArr(T arr[], int n, int swapTimes)
{
    for(int i=0; i<n; i++)
        arr[i] = i;
    
    srand(time(NULL));
    for(int i=0; i<swapTimes; i++)
    {
        int randx = rand()%n;
        int randy = rand()%n;
        swap(arr[randx], arr[randy]);
    }
}

int main()
{
    cout << "bubble sort demo" << endl;
    int n;
    cout << "please input an integer: ";
    cin >> n;
    int *arr = new int[n];
    // generateRandomArr(arr,n);
    generateNearlySortedArr(arr, n, 10);

    cout << "before sort" << endl;
    // printArr(arr, n);

    clock_t start = clock();
   // bubble_sort(arr,n);
    // select_sort(arr,n);
    insert_sort(arr, n);
    clock_t endtime = clock();
    cout << "bubble sort take " << double(endtime - start)/CLOCKS_PER_SEC << "s" << endl;
    cout << "after sort" << endl;
    // printArr(arr, n);

    delete[] arr;


    return 0;
}
