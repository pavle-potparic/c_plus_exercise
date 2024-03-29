#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    void setName(string name) {this-> name = name;}
    void speak() const {cout << "My name is: " << name << endl;}

    Animal() {
        cout << "Animal created" << endl;
    }

    Animal(const Animal&  other) :
        name(other.name) {
            cout << "Animal crated by copying" << endl;
        }

    ~Animal() {
        cout << "Destructor called" << endl;
    }
    


};

int main() {
    Animal *animal = new Animal();
    animal->setName("Zoja");
    animal->speak();
    delete animal;
    
    return 0;
}
