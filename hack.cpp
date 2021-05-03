#include <iostream>
#include <cstdlib>

int main(){
    int x;
    while (true) {
        x = rand() % 2;
        std::cout << x;
    }
    return 0;
}
