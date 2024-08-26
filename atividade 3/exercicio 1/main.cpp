#include <iostream>

using namespace std;


int quantosanos(int &dias){
    int c = 0;
    while(dias >= 365){
        dias -= 365;
        c++;
    }
    return c;
}

int quantosmeses(int &dias){
    int c = 0;
    while(dias >= 30){
        dias -= 30;
        c++;
    }
    return c;
}

int main()
{
    int dias, meses, anos;
    cout << "Informe a idade em dias: ";
    cin >> dias;
    anos = quantosanos(dias);
    meses = quantosmeses(dias);
    cout << "anos :" << anos << " meses: " << meses << " dias: " << dias << endl;
    return 0;
}
