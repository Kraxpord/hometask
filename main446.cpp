#include <iostream>

void printStars(int n) {
    if (n <= 0) {  
        return;
    }
    else {  
        std::cout << "*";
        printStars(n - 1);
    }
}

int main() {
    int n;
    std::cout << "¬вед≥ть к≥льк≥сть з≥рок: ";
    std::cin >> n;
    printStars(n);
    std::cout << std::endl;
    return 0;
}