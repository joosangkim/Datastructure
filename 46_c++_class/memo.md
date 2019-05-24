### 클래스
#### 구조체와 차이 
* 구조체 : 변수만 포함 가능 -> 구조화만 지원 
```cpp
struct Student{
    string name; 
    int score;
}
```
* 클래스 : 변수와 함수 모두 포함 가능 -> 객체지향 디자인 가능 및 상속을 지원
  + 멤버변수 : 속성 혹은 프로퍼티
  + 멤버함수 : 메소드 
  + 클래스를 활용해 만든 변수를 인스턴스라도 불림 : 즉 클래스 정의는 메모리에 할당되지 않지만, 인스턴스화 되었을 때 메모리에 할당. 
    - private : 클래스, 멤버등을 내부에서만 활용 
    - public : 클래스, 멤버등을 외부에서 접근 가능 
    - 클래스는 기본적으로 멤버를 private 으로 간주 
  + this포인터 
    - 상수 포인터 자료형 
    - 현재 인스턴스를 가리킴 
    - 멤버 함수의 경우, 모든 인스턴스가 공유 -> 함수는 공유되어도 문제 없음 
```cpp
class Student {
private: // 객체 외부에서는 접근 불가능 
    string name;
    int score;
public:  // 객체 외부에서 접근 가능 
    Student(string n, int s){name = n; score = s;} // 생성자 
    void Show(){ cout << name << " : " << score << endl;}
}
```