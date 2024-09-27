#include <iostream>

using namespace std;

int n1, n2; // Variaveis Globais

int main() {
    // Operadores de Matematica -> +, -, /, *, %, ()

    int n3, n4; // Variaveis Locais
    int res, res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4= 2;

    res = (n1 + n2 +n3 + n4) - 10;
    cout << "A soma das variaveis e: " << res << "\n\n";

    res = n1 + n2 * n4;
    cout << "Valor de res e: " << res << "\n\n";

    res1 = n1 / n2;
    res2 = n1 % n2;
    cout << "Valor de res1 e: " << res1 << "\n";
    cout << "Valor de res2 e: " << res2 << "\n\n";

    return 0;
}