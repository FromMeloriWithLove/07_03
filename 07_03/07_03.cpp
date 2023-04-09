//Ползающее: жук, паук, змея
//Плавающее: рыба, человек, акула
//Прыгающее: кенгуру, кролик, воробей

//Транспортное средство: автомобиль, автобус, мотоцикл
//Животное: кошка, собака, слон
//Дом: квартира, вилла, дача
#include <iostream>

using namespace std;

class Heart {
    int beatsPerMinute;
public:
    Heart() {
        srand(time(NULL));
        beatsPerMinute = rand() % 240;
    }
    int GetBeat() {
        return beatsPerMinute;
    }
};

class Person {
    string name;
    int age;
    Heart heart;
public:
    
    Person(string name, int age, Heart heart) {
        this->name = name;
        this->age = age;
    }

    void Print() {
        cout << "Hello, world! My name is " << name << ". I'm " << age << " years old and my beats per minute is " << heart.GetBeat() << endl;
        if (heart.GetBeat() <= 30 || heart.GetBeat() >= 220) {
            cout << "Thats bad :(" << endl;
        }
        else if (heart.GetBeat() == 0) {
            cout << "I'm dead x(" << endl;
        }
    }
};

int main()
{
    Heart bit;
    Person pers("Oleg", 20, bit);
    pers.Print();
}