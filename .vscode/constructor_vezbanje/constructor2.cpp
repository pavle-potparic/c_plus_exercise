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

Animal *createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal->setName("Jerry");
    return pAnimal;
}

int main() {
    Animal *mouse = createAnimal();
    
    mouse->speak();

    delete mouse;
    
    return 0;
}
