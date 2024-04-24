/*1-Crie e leia uma matriz dinâmica de inteiros cuja quantidade de linhas e
colunas é informada pelo usuário e depois imprima a matriz e a transposta da matriz. */

#include <iostream>
using namespace std;

int** criarMatriz(int l, int c) {
	int** m = new int* [l];
	for (int i = 0; i < l; i++)
	{
		m[i] = new int[c];
	}

	return m;
}


void ler_matriz(int** m, int l, int c) {
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "informe os numeros nas posicoes [" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}


}


void imprimir(int** m, int l, int c) {
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}



}

void transposta(int** m, int l, int c) {
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << m[j][i] << " ";
		}
		cout << endl;
	}

}



int main() {
	int** matriz;
	int l, c;
	
	cout << "imforme a quantidade de linhas: ";
	cin >>l;

	cout << "imforme a quantidade de lcolunas: ";
	cin >>c;

	matriz = criarMatriz(l, c);


	ler_matriz(matriz, l, c);

	cout << "Matriz: " << endl;
	imprimir(matriz, l, c);

	cout << "matriz transposta: " << endl;
	transposta(matriz, l, c);

	return 0;


}
