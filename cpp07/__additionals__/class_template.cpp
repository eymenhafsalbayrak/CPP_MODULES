#include <iostream>
using namespace std;

// Class template for a generic Pair
template<typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() {
        cout << "(" << first << ", " << second << ")" << endl;
    }

    // Getter methods
    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};

int main() {
    // Create a Pair of int and double
    Pair<int, double> myPair(5, 3.14);
    cout << "Pair values: ";
    myPair.display();
    cout << "First value: " << myPair.getFirst() << endl;
    cout << "Second value: " << myPair.getSecond() << endl;

    // Create a Pair of char and string
    Pair<char, string> myPair2('A', "Hello");
    cout << "Pair values: ";
    myPair2.display();
    cout << "First value: " << myPair2.getFirst() << endl;
    cout << "Second value: " << myPair2.getSecond() << endl;

    return 0;
}
