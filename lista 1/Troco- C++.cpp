#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double precoUnitario, dinheiroRecebido, troco;
    int quantidade;
    cout << "Preco unitario do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;
    double total = precoUnitario * quantidade;
    troco = dinheiroRecebido - total;
    cout << fixed << setprecision(2);
    cout << "TROCO = R$ " << troco << endl;

    return 0;
}
