// 정수 배열과 타겟 숫자가 주어지면, 합이 타겟값이 되는 두 원소의 인덱스를 찾으시오.
// 단, 시간복잡도 O(n) 여야 합니다.
// Given an array of integers and a target integer, find two indexes of the array element that sums to the target number.
//Input: [2, 5, 6, 1, 10], 타겟 8

//Output: [0, 2] // 배열[0] + 배열[2] = 8

#include<stdio.h>
#include<map>
#include<array>

using namespace std;

int* getTwoIndexes(array<int, 5> arr, int t){
    // 2 5 6 1 10  -> 8
    // 6 3 2 7 -2 
    map<int, int> m;
    for(int i =0; i <arr.size(); i++){
        m.insert(make_pair(t - arr.at(i), ))
    }


}

int main(){
    array<int, 5> myarr ={2, 5, 6, 1, 10};
    return 0;
}