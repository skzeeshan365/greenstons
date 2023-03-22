#include<iostream>

class section {
    private:
    char section;
    int students;

    public:
    void initialize(const char sect, int stu) {
        section = sect;
        students = stu;
    }

    void print() {
        std::cout<<"Section: "<<section<<std::endl<<"Studetns: "<<students;
    }
};

class students{
private:
    char * name;

public:
    students(char * name) {
        students::name = name;
    }

    char * getName() {
        return name;
    }
};

class test {
    private:
    int num1, num2;

    public:
    test(int x, int y) {
        num1 = x;
        num2 = y;
    }

    test operator + (const test &obj) {
        test test1(num1 + obj.num1, num2 + obj.num2);
        return test1;
    }

    void print() {
        std::cout<<"num1: "<<num1<<std::endl<<"num2: "<<num2<<std::endl;
    }
};

int main() {
    
    test d1(3, 4), d2(4, 5);
    d1.print();
    d2.print();
    test d3 = d1+d2;
    d3.print();
}