#include <iostream>

class Creature {

    protected:
    std::string name;

    public:
    void SetName(std::string name) {
        Creature::name = name;
        std::cout<<"\nName: "<<name<<std::endl;
    }
    void sleep() {
        std::cout<<"Can sleep"<<std::endl;
    }

    void eat() {
        std::cout<<"Can eat"<<std::endl;
    }
};

class dog: public Creature {
    public:
    void getName() {
        std::cout<<name<<std::endl;
    }
    void walk() {
        std::cout<<"Can walk"<<std::endl;
    }

    void bark() {
        std::cout<<"Can bark"<<std::endl;
    }

};

class human: public Creature {
    public:
    void walk() {
        std::cout<<"Can walk"<<std::endl;
    }

    void think() {
        std::cout<<"Can think"<<std::endl;
    }
};

int main() {
    dog husky;
    husky.SetName("Husky");
    husky.sleep();
    husky.eat();
    husky.walk();
    husky.bark();

    human zeeshan;
    zeeshan.SetName("Zeeshan");
    zeeshan.sleep();
    zeeshan.eat();
    zeeshan.walk();
    zeeshan.think();
}