#include <iostream>
#include <cstdlib>

int main(){
    while (true) {
        int x = rand() % 2;
        std::cout << x;
    }
    return 0;
}
