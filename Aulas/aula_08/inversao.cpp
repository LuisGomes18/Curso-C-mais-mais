#include <iostream>

using namespace std;

int main() {
    int num = 10;
    cout << num << "\n\n";

    num = num * -1;
    cout << num << "\n\n";

    /*
    cout << -num << "\n\n";
    */ // Nao recomendado por nao modificar a variavel

    num = -num;
    cout << num << "\n\n";

    return 0;
}