#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {

	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int random_number = std::rand() % 3;

	switch (random_number) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return nullptr;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "* Actual type object is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "* Actual type object is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "* Actual type object is C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p) {
	// // Call identify function with the pointer to p
	// identify(&p);

	for(int i = 0; i < 3; i++){
		try
		{
			switch (i)
			{
				case 0 : {
					A a = dynamic_cast<A&>(p);
					std::cout << "& Actual type object is A" << std::endl;
					break;
				}
				case 1 : {
					B b = dynamic_cast<B&>(p);
					std::cout << "& Actual type object is B" << std::endl;
					break;
				}
				case 2 : {
					C c = dynamic_cast<C&>(p);
					std::cout << "& Actual type object is C" << std::endl;
					break;
				}
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}

int main() {
	Base* ptr = generate();
	
	identify(ptr);
	identify(*ptr);
	
	delete ptr;

	return 0;
}
