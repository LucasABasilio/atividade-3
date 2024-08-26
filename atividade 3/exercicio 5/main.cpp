#include <iostream>

using namespace std;

void buscabinaria(int vetor[10], int valorpesquisado){
    if(valorpesquisado == vetor[5]){
        cout << "Valor encontrado na posicao 5!";
    }
    else if(valorpesquisado < vetor[5]){
        if(valorpesquisado == vetor[2]){
            cout << "Valor encontrado na posicao 2!";
        }
        else if(valorpesquisado < vetor[2]){
            if(valorpesquisado == vetor[1]){
                cout << "Valor encontrado na posicao 1!";
            }
            else if(valorpesquisado == vetor[0]){
                cout << "Valor encontrado na posicao 0!";
            }
            else{
                cout << "Valor nao encontrado!";
            }
        }
        else if(valorpesquisado > vetor[2]){
            if(valorpesquisado == vetor[3]){
                cout << "Valor encontrado na posicao 3!";
            }
            else if(valorpesquisado == vetor[4]){
                cout << "Valor encontrado na posicao 4!";
            }
            else{
                cout << "Valor nao encontrado!";
            }
        }
    }
    else if(valorpesquisado > vetor[5]){
        if(valorpesquisado == vetor[8]){
            cout << "Valor encontrado na posicao 8!";
        }
        else if(valorpesquisado < vetor[8]){
            if(valorpesquisado == vetor[6]){
                cout << "Valor encontrado na posicao 6!";
            }
            else if(valorpesquisado == vetor[6]){
                cout << "Valor encontrado na posicao 7!";
            }
            else{
                cout << "Valor nao encontrado!";
            }
        }
        else if(valorpesquisado > vetor[8]){
            if(valorpesquisado == vetor[9]){
                cout << "Valor encontrado na posicao 9!";
            }
            else{
                cout << "Valor nao encontrado!";
            }
        }
    }
}

int main()
{
    int n, vetor[10] = {0,18,22,25,34,40,51,66,75,87};
    cout << "Informe o valor a ser pesquisado: ";
    cin >> n;
    cout << endl;
    buscabinaria(vetor, n);
    cout << endl;
    return 0;
}
