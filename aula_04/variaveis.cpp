#include <iostream>

using namespace std;

int main() {
    /*  
        Tipo Nome
        Tipo Nome = valor
    */
    int vidas = 0; // 10, 25, 7, 25041
    char letra='B'; // "B", "D"
    double decimal1 = 5.2999; // 2.4999999
    float decimal2 = 5.3; // 2.5
    bool vivo = true; // True, False
    string nome = "Ze"; // "Bruno"

    cout << "Digite o numero de vidas do player: ";
    cin >> vidas;

    cout << "Digite a letra do player: ";
    cin >> letra;

    cout << "Digite o decimal do player: ";
    cin >> decimal1;

    cout << "Digite o nome do player: ";
    cin >> nome;

    cout << "\nVidas: " << vidas;
    cout << "\nLetra: " << letra;
    cout << "\nDecimal 1:" << decimal1;
    cout << "\nDecimal 2:" << decimal2;
    cout << "\nVivo: " << vivo;
    cout << "\nNome:" << nome;


    return 0;
}
