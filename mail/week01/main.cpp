// 정수 배열(int array)가 주어지면 가장 큰 이어지는 원소들의 합을 구하시오. 단, 시간복잡도는 O(n).
// Given an integer array, find the largest consecutive sum of elements.
// 2018 Joosang Kim
#include<iostream>
#include <typeinfo>
using namespace std;

int getMaxSum(int* arr, unsigned long len){
    int i = 0;
    int sum = 0;
    while ((arr[i] < 0) && (i < len)) {
        i++;
    }
    if (i == len){
        return arr[len-1];
    }

    while (i<len){
        sum += arr[i];
        i++;
    }
    return (sum < arr[len-1]) ? arr[len-1]:sum;
}


int main(void){
    int arr1[4] = {-1, 3, -1, 5};
    int arr2[3] = {-5, -3, -1};
    int arr3[5] = {2, 4, -2 ,-3, 8};
    printf("%d\n", getMaxSum(arr1, sizeof(arr1)/sizeof(arr1[0])));
    printf("%d\n", getMaxSum(arr2, sizeof(arr2)/sizeof(arr2[0])));
    printf("%d\n", getMaxSum(arr3, sizeof(arr3)/sizeof(arr3[0])));


    return 0;
}
// 예제}

// Input: [-1, 3, -1, 5]

// Output: 7 // 3 + (-1) + 5



// Input: [-5, -3, -1]

// Output: -1 // -1



// Input: [2, 4, -2, -3, 8]

// Output: 9 // 2 + 4 + (-2) + (-3) + 8