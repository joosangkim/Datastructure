// 정수 n이 주어지면, n개의 여는 괄호 "("와 n개의 닫는 괄호 ")"로 만들 수 있는 괄호 조합을 모두 구하시오. (시간 복잡도 제한 없습니다).
// Given an integer N, find the number of possible balanced parentheses with N opening and closing brackets.
#include<iostream>
#include<cmath>
using namespace std;

void setBraces(int left, int right, string cur, int *ans, int* N){
    if(right < left){
        setBraces(left, right+1, cur+")", ans, N);
    }
    if (left < (*N)){
        setBraces(left+1, right, cur+"(", ans, N);
    }
    cout << cur <<"\n";
    if (cur.length() == 2*(*N)){
        (*ans)++;
        return;
    }
}
int main(void){
    int N;
    // printf("Enther the N : ");
    // scanf("%d",&N);
    N =4;
    int ans = 0;
    setBraces(0, 0, "", &ans, &N);

    cout << "Answer is " << ans;
    return 0;
}


// 예제)

// Input: 1

// Output: ["()"]



// Input: 2

// Output: ["(())", "()()"]



// Input: 3

// Output: ["((()))", "(()())", "()(())", "(())()", "()()()"]