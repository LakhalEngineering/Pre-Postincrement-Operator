#include <iostream>


int main(){

    int x = 0;

    x++;
    ++x;

    x = x + 1;

    std::cout << ++x << std::endl; // ++x (4) =! x++ (3)
}