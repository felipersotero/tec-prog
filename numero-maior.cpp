#include<iostream>
using namespace std;

int main()
{
    int x, y;
    
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "Digite o segundo número: ";
    cin >> y;
    
    if(x>y){
        cout << x << " é maior.";
    } else if(x<y){
        cout << y << " é maior.";
    } else {
        cout << "Estes números são iguais.";
    }
    
    return 0;
}
