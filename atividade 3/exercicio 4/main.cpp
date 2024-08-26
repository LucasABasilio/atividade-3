#include <iostream>

using namespace std;

void montarmatriz(int m, int n, int matriz[20][25]){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << "informe o valor da linha " << i << " e da coluna " << j << ": ";
            cin >> matriz[i][j];
        }
     }
     for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void montartransposta(int m, int n, int matriz[20][25]){
    int i, j;
    cout << "\t Matriz transposta: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void multiplicarmatriz(int m, int n, int matriz[20][25]){
    int i, j, k;
    cout << "Informe o valor que a matriz sera multiplicada:";
    cin >> k;
    cout << "\t Matriz multiplicada por " << k << ": " << endl;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << matriz[i][j] * k << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void adicionarmatriz(int m, int n, int matriz[20][25]){
    int i, j, matriz2[20][25];
     for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << "informe o valor da linha " << i << " e da coluna " << j << " da segunda matriz: ";
            cin >> matriz2[i][j];
        }
     }
    cout << "\t Soma das matrizes: " << endl;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << matriz[i][j] + matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int M, N, matriz[20][25];
    cout << "Informe o valor de linhas: ";
    cin >> M;
    while(M > 20 || M < 0){
        cout << "O valor de linhas deve ser entre 0 e 20!" << endl;
        cout << "Informe o valor de linhas: ";
        cin >> M;
    }
    cout << "Informe o valor de colunas: ";
    cin >> N;
    while(N > 25 || N < 0){
        cout << "O valor de colunas deve ser entre 0 e 25!" << endl;
        cout << "Informe o valor de colunas: ";
        cin >> N;
    }
    montarmatriz(M, N, matriz);
    montartransposta(M, N, matriz);
    multiplicarmatriz(M, N, matriz);
    adicionarmatriz(M, N, matriz);

    return 0;
}
