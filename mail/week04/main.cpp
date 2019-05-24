#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool IsPalindrome (int n ){
    if (n < 0 || n/10 == 0 || n % 10 == 0){
        return false;
    }
    int half = 0;
    while( n > half){
        half = half * 10 + n%10 ;
        n /=10;
    }
    return half == n || (half/10) == n;
}

int main() {
    int half = 0;
    int num1 = 12321;
    int num2 = 1221;
    int num3 = 2211;
    cout << IsPalindrome(num1) << "\n";
    cout << IsPalindrome(num2) << "\n";
    cout << IsPalindrome(num3) << "\n";

    return 0;
}

// int main(){
//     int div = 1;
//     int num = 12321;

//     while (num / div != 0){
//         div*=10;
//     }
    
//     div /= 10;

//     int mul = 1;
//     int sum = 0;
//     int next = num;
//     while (div != 0){
//         sum += (next / div) * mul;
//         next %= div;
//         div /=10;
//         mul *=10;
//     }

//     cout << (sum - num == 0 ? true : false);
//     return 0;
// }

// 정수(int)가 주어지면, 팰린드롬(palindrome)인지 알아내시오. 팰린드롬이란, 앞에서부터 읽으나 뒤에서부터 읽으나 같은 단어를 말합니다. 단, 정수를 문자열로 바꾸면 안됩니다.
// Given an integer, check if it is a palindrome.
// 예제)
// Input: 12345
// Output: False
// Input: -101
// Output: False
// Input: 11111
// Output: True
// Input: 12421
// Output: True
