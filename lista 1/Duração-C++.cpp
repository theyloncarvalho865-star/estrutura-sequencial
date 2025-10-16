#include <iostream>

using namespace std;

int main() {
    int segundosTotais;
    
    cout << "Digite a duracao em segundos: ";
    cin >> segundosTotais;
    int horas = segundosTotais / 3600;
    int resto = segundosTotais % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
    
    return 0;
}