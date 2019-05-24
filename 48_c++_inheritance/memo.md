### 상속 
* 자식클래스가 부모클래스의 속성을 그래로 물려받아(상속) 사용가능 
* 부모클래스에서 선언한 메소드를 자식클래스에서 사용가능 
* 자식클래스는 ':' 을 이용하여 부모와 연결됨 
* 자식클래스 생성시 부모클래스의 생성자가 먼저호출된 뒤 자식클래스의 생성자 호출 
* 소멸자의 호출은 자식클래스가 먼저 호출되고 부모클래스가 다음에 호출
```cpp
...
using namespace std;

Class Person{
private:
    string name;
public:
    Person(string name):name(name){}
}
...
Class Student : Person, temp { // Person, temp class 상속받음
private:
    int ID;
public:
    Student(int ID, string name): Person(name){
        this->ID = ID
    }
}
...
```
### 오버라이딩 
* 자식클래스에서 부모클래스의 특정 멤버 메소르를 재정의 하여 사용가능
### 다중상속 
* 여러개의 클래스로부터 멤버를 상속 -> 부모가 여러명 