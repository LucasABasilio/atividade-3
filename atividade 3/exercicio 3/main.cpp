#include <iostream>

using namespace std;

int quantashoras(int &segundos){
    int horas = 0;
    while(segundos >= 3600){
        segundos -= 3600;
        horas++;
    }
    return horas;
}

int quantosminutos(int &segundos){
    int minutos = 0;
    while(segundos >= 60){
        segundos -= 60;
        minutos++;
    }
    return minutos;
}

int main()
{
    int segundos, minutos, horas;
    cout << "Informe o tempo em segundos: ";
    cin >> segundos;
    horas = quantashoras(segundos);
    minutos = quantosminutos(segundos);
    cout << horas << ":" << minutos << ":" << segundos <<endl;
    return 0;
}
