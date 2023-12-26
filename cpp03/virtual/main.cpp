#include <iostream>

class A{
    public:
        A() { std::cout << "A Constructor Called" << std::endl;} 
        ~A(){ std::cout << "A Destructor Called" << std::endl;};
};


class B: virtual public A{
    public:
        B(){ std::cout << "B Constructor Called" << std::endl;};
        ~B(){ std::cout << "B Destructor Called" << std::endl;};
};


class C : virtual public A{
    public:
        C(){ std::cout << "C Constructor Called" << std::endl;};
        ~C(){ std::cout << "C Destructor Called" << std::endl;};
};

class D: public B, public C{
    public:
        D(){ std::cout << "D Constructor Called" << std::endl;};
        ~D(){ std::cout << "D Destructor Called" << std::endl;};
};

int main(){

    D object;
    return 0;
}