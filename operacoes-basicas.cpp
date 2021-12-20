#include<iostream>
using namespace std;

int main()
{
    float x, y, soma, prod, dif, divis;
    
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "Digite o segundo número: ";
    cin >> y;
    
    soma = x+y;
    prod = x*y;
    dif = x-y;
    
    cout << "\n";
    
    cout << "Soma: " << soma << endl;
    cout << "Produto: " << prod << endl;
    cout << "Diferença: " << dif << endl;
    
    if(y != 0){
        divis = x/y;
        cout << "Divisão: " << divis << endl;
    } else {
        cout << "Divisão indeterminada" << endl;
    }
    
    return 0;
}
