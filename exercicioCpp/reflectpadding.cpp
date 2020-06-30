#include <iostream>

#define LINHAS 3
#define COLUNAS 3

void destroiMatriz(int** matriz, int linhas) {
	for (int i = 0; i < linhas; i++) {
		free(matriz + i);
	}
	free(matriz);
}

void preencherMatriz(int **matrix, int rows, int cols)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf_s("%d", (*(matrix + i) + j));
		}
	}
}

void imprimirMatriz(int ** matriz, int rows, int cols) {
	for (int linha = 0; linha < rows; linha++)
	{
		for (int coluna = 0; coluna < cols; coluna++)
		{
			std::cout << " " << *(*(matriz + linha) + coluna) << " ";
		}
		std::cout << "\n";
	}
}

int** geradorDeMatriz(int linhas, int colunas) {
	int** matriz = (int**)malloc(sizeof(int*) * LINHAS);
	for (int i = 0; i < linhas; i++) {
		*(matriz + i) = (int*)malloc(sizeof(int) * colunas);
		for (int j = 0; j < colunas; j++) {
			*(*(matriz + i) + j) = 0;
		}
	}
	return matriz;
}

int ** applyReflectPadding(int** matriz, int rows, int cols, int verticalPadding, int horizontalPadding) {
	int** matrizNova = geradorDeMatriz(rows + (verticalPadding * 2), cols + (horizontalPadding * 2));
	for (int linha = 0; linha < rows; linha++) {
		// Anda pelas linhas
		for (int coluna = 0; coluna < cols; coluna++) {
			//Anda pelas colunas
			*(*(matrizNova + linha + verticalPadding) + coluna + horizontalPadding) = *(*(matriz + linha) + coluna);
		}
	}
	return matrizNova;
}

void criaMatriz() {
	int** matriz = geradorDeMatriz(LINHAS, COLUNAS);
	int paddingVertical = 1;
	int paddingHorizontal = 2;

	preencherMatriz(matriz, LINHAS, COLUNAS);

	//imprimirMatriz(matriz, LINHAS, COLUNAS);

	int** matrizNova = applyReflectPadding(matriz, LINHAS, COLUNAS, paddingVertical, paddingHorizontal);

	imprimirMatriz(matrizNova, LINHAS + 2, COLUNAS + 4);

	

}