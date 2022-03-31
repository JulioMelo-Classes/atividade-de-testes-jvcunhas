#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int aux = 0;
    int n;
    for(int i = 0; i < SIZE;i++){
        std::cin >> n;
        if(n < 0){
            aux++;
        }
    }
    std::cout << aux << '\n';
    return 0;
}
