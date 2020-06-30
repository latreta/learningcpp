#include <iostream>
#include <time.h>
#include <string>
#include "reflectpadding.h"

#define MATRIZ_SIZE 3
#define MAX 50
#define LOWER -50

using namespace std;


/*
    Exercicio: Gerar matriz 3x3 com numeros randomizados de -50 a 50 e informar a qtd de Zeros presentes
*/
int geraMatriz() {
    int matriz[MATRIZ_SIZE][MATRIZ_SIZE];
    int zeros = 0;
    srand(time(NULL));

    for (int i = 0; i < MATRIZ_SIZE; i++) {
        for (int j = 0; j < MATRIZ_SIZE; j++) {
            matriz[i][j] = rand() % (MAX - LOWER + 1) + LOWER;
            printf("[%d][%d]: ", i, j);
            cout << matriz[i][j] << "\n";
            if (matriz[i][j] == 0)
                zeros++;
        }
        cout << "\n";
    }

    return zeros;
}

/*
    Crie uma função (de preferência recursiva) que retorne a soma dos N
    elementos da sequência onde o próximo elemento é o dobro do anterior. Exemplo: 1, 2, 4, 8, 16, 32, 64…
*/
long soma(int n) {
    long total = 0;
    int max = n * n;
    for (int i = 1; i < max; i *= 2) {
        total += i;
    }
    return total;
}

long somaRecursiva(int i, int n) {
    if (i >= (n*n)) {
        return 0;
    }
    return i + somaRecursiva(i * 2, n);
}

int verificaMencionado(string brinquedo, string mencoes[], int mencoesSize) {
    int qtd = 0;
    for (int i = 0; i < mencoesSize; i++) {
        if (mencoes[i].find(brinquedo) != string::npos) {
            qtd++;
        }
    }
    return qtd;
}


void VerificaBrinquedos(string toys[], string quotes[], int toySize, int quotesSize) {
    for (int i = 0; i < toySize; i++) {
        int qtd = verificaMencionado(toys[i], quotes, quotesSize);
        cout << toys[i] << ": (" << qtd << ")" << "\n";
    }
}


int main()
{
    int qtdZeros = geraMatriz();
    cout << "Zeros: " << qtdZeros << endl;

    long somaTotal = soma(6);
    long somaTotalRec = somaRecursiva(1, 6);
    cout << "Soma: " << somaTotal << "\n\n\n";
    cout << "Soma Recursiva: " << somaTotalRec << "\n\n\n";

    string brinquedos[] = { "anacell", "betacellular", "cetracular", "deltacellular", "eurocell" };
    string citacoes[] = { "Best, anacell", "betacellular", "anacell cetracular", "Best, anacell!","betacellular" };
    VerificaBrinquedos(brinquedos, citacoes, 5, 5);

    cout << "\n\n\n";
    // Desafio
    criaMatriz();
}