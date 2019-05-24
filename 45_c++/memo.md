### Basic
#### 표준 라이브러리 변경 
```cpp
#include<iostream> //#include<stdio.h>

int main(void){
    return 0;
}
```
#### namespace 지원 
* namespace를 정의 및 사용함으로써 객체화가 더욱 편리해짐 
* 문자열 자료형 제공
* 동적할당 : ```new```
* 할당제거 : ```delete```
```cpp
#include<iostream>
#include<string> // 문자열을 사용하기 위한 헤더
using namespace std;  // std namespace 를 사용함

// namespace A 정의 
namespace A{
    void func(){
        //cout 과 endl은 std namespace 의 함수 
        //using namespace std가 선언되었기 때문에
        //std::cout 과 같이 namespace 지정자 사용 불필요
        cout << "In A namespace" << endl; 
    }
}
int main(void){
    A::func(); // A namespace의 func()를 사용

    string s;
    cin >> s; // 공백을 만나면 입력멈춤 
    cout << s << endl;

    string input; 
    getline(cin, input); // 공백을 만나더라도 힌 줄을 계속 입력받음
    cout << input << endl;
    return 0;
}
```