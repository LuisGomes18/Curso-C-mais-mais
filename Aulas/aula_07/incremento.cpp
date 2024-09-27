#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;

    // Pos Incremento
    cout << "Pos Incremento" << "\n\n";

    n1 = 0;
    n2 = 10;

    cout << n1 << "\n";
    cout << n2 << "\n\n";
    n1 = n1 + 1;
    n2 += 1;

    cout << n1 << "\n";
    cout << n2 << "\n\n";

    n1 = n1 - 5;
    n2 -= 5;

    cout << n1 << "\n";
    cout << n2 << "\n\n";

    n1++;
    n2--;

    cout << n1 << "\n";
    cout << n2 << "\n\n";

    n1 *= 2;
    n2 /= 4;

    cout << n1 << "\n";
    cout << n2 << "\n\n";

    // Pre Incremento
    cout << "Pre Incremento" << "\n\n";

    n3 = 5;
    n4 = 30;

    cout << n3++ << "\n";
    cout << ++n4 << "\n";


    return 0;
}