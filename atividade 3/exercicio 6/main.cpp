#include <iostream>

using namespace std;

int somatorio(int n){
    int soma = 0;
    if(n <= 0){
        return -1;
    }
    else if(n == 1){
        soma = 1;
    }
    else{
        soma = somatorio(n-1) + n;
    }
    return soma;
}

int main()
{
    int n, soma;
    cout << "Informe o valor de N: ";
    cin >> n;
    soma = somatorio(n);
    cout << "Somatorio: " << soma << endl;
    return 0;
}
