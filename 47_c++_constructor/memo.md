
### 생성자와 소멸자 
#### 생성자 
* 클래스로부터 객체를 생성하며, 멤버변수를 초기화 
* 생성자는 **특별한 메소드**로 클래스와 동일한 이름으로 구현 
* 반환값이 없음 
* 별도 생성자가 없다면, 모든 멤버를 null 혹은 0으로 초기화하는 기본 생성자를 사용 
```cpp
...
Class Character{
private:
    string name;
    int hp;
    int damage;
public:
    Character(string name, int hp){
        this->name = name;
        this->hp = hp;
        this->damage=0;
    }
}
...
```
#### 복사생성자 
* 다른 인스턴스의 참조를 인수로 받아, 그 참조를 이용하여 자신의 인스턴스를 초기화 
* 깊은 복사를 이용할 경우, 기존 인스턴스와는 독립적인 다른 메모리 공간에 할당
```cpp
...
Class Character{
private:
    string name;
    int hp;
    int damage;
public:
    // 생성자 선언의 간단한 방법
    Character(string name, int hp) : name(name), hp(hp), damage(0){} 
    Character(const &Character other){
        this->name = other.name;
        this->hp = other.hp;
        this->damage=other.damage;
    }
}
...
```
#### 소멸자 
* 객체의 수명이 끝났을 때 컴파일러가 소멸자 함수를 호출 
* 클래스 이름 앞에 ~만 붙임
```cpp
...
Class Character{
private:
    string name;
    int hp;
    int damage;
public:
    // 생성자 선언의 간단한 방법
    Character(string name, int hp) : name(name), hp(hp), damage(0){} 
    Character(const &Character other){
        this->name = other.name;
        this->hp = other.hp;
        this->damage=other.damage;
    }
    // 소멸자 
    ~Character(){}
}
...
```