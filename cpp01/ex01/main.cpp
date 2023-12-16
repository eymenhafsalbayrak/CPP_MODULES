#include "Zombie.hpp"

int main(){

    int N = 5;
    std::string zombieName = "foofoo";
    Zombie* zombieArray = zombieHorde(N, zombieName);

    for(int i = 0; i < N; i++){
        zombieArray[i].announce();
    }

    delete[] zombieArray;

    return 0;
}