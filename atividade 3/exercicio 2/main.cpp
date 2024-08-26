#include <iostream>

using namespace std;

int quantashoras(int &minutos){
    int horas = 0;
    while(minutos >= 60){
        minutos -= 60;
        horas++;
    }
    return horas;
}

int main()
{
    int minutos, horas;
    cout << "Informe o valor de minutos passados desde meia-noite: ";
    cin >> minutos;
    horas = quantashoras(minutos);
    cout << horas << ":" << minutos << endl;
    return 0;
}
