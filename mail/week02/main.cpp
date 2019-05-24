// 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다. 정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을 구하여라.
// Fibonacci sequence starts with 0 and 1 where each fibonacci number is a sum of two previous fibonacci numbers. Given an integer N, find the sum of all even fibonacci numbers.
// 2018 Joosang Kim
#include<iostream>
int fib(int a){
    if ( a == 1) return 1;
    if ( a == 0) return 0;
    return fib(a-1) + fib(a-2);
}

int evenSumFib(int N){
    int sum = 0;
    int cur = 0;
    int x = 1;
    int y = 1;


    while(cur < N){
        cur = x+y;
        if (cur % 2 == 0){
            sum += cur;
        }
        x=y;
        y=cur;
    }
    return sum;
}

int main(void){
    int n, i;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    // i = 0;
    // while (fib(i) < n){
    //     if (fib(i) % 2) {
    //         sum += fib(i);
    //     }
    //     i++;
    // }
    sum = evenSumFib(n);
    printf("Answer is %d", sum);

    return 0;
}


/*
     * int evenFibSum(int N) {
     int sum = 0;
    int x = 1;
    int y = 2;
    while (x <= N) {
        if (x % 2 == 0) {
        sum += x;
        }
        int z = x + y;
        x = y;
        y = z;
    }
    return sum;
    }
 */



// 예제)

// Input: N = 12

// Output: 10 // 0, 1, 2, 3, 5, 8 중 짝수인 2 + 8 = 10.