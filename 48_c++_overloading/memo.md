### 함수오버로딩 
* 이름이 같은 함수에 대해서 오버로딩하여 사용가능
* 아래 예 처럼 인스턴스 생성 시 초기값이 있는경우와 없는 경우 모두 정의 가능.
```cpp
...
Class Person{
private:
    string name;
public:
    Person(){name = "ABC";}
    Person(string name):name(name){}
}
...
```
### 연산자오버로딩 
* 기존에 존재하는 연사자만 정의(+,-,...)
* 멤버 연산자(.), 범위지정연산자(::) 는 오버로딩 처리 불가 
```cpp
...
Class Person{
private:
    string name;
public:
    Person(){name = "ABC";}
    Person(string name):name(name){}
    // 연산자 오버로딩 
    Person operator +(const Person& other){return Person(name + "&" + other.name);}
}
...
```
