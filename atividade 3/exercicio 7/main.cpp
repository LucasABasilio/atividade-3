#include <iostream>

using namespace std;

int sequenciafibonacci(int n){
    int valor;
    if(n < 0){
        return -1;
    }
    else if(n == 0){
        valor = 0;
    }
    else if(n == 1 || n == 2){
        valor = 1;
    }
    else{
        valor = sequenciafibonacci(n-1) + sequenciafibonacci(n-2);
    }
    return valor;
}

int main()
{
    int n, valor;
    cout << "Informe o valor de N: ";
    cin >> n;
    valor = sequenciafibonacci(n);
    cout << "O valor " << n << " da sequencia de fibonacci e: " << valor<< endl;
    return 0;
}
