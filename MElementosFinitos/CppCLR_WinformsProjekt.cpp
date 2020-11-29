#include "pch.h"
#include "Form1.h"
#include "Matrix.h"
#include "Matrix.cpp"


#include <iostream>
//#include "stdafx.h"
//#include "Matrix.cpp"
//#include "Matrix.h"


//int main(array<System::String ^> ^args)
//{
//    return 0;
//}
using namespace std;
using namespace System;

using namespace System::Windows::Forms;


//void leer(int, int, int[][2], int[][2]);
//void calc(int, int, int[][2], int[][2], int[][2]);

[STAThread]
int main() {
/*    int a[2][2] = { {2,4},{3,5} };
    int b[2][2] = { {3,6},{7,5} };
    int c[2][2];
    calc(2, 2, a, b,c);*/

    srand(time(NULL));
    
    int n_rows;
    int n_cols;

    int col_1;
    int col_2;
    int row_1;
    int row_2;
    int scalar;

    cout << "Ingresa nro de filas: " << endl;
    cin >> n_rows;
    cout << "Ingresa nro de columnas: " << endl;
    cin >> n_cols;
    cout << endl;

/*    Matrix<int> a(n_rows, n_cols);
    Matrix<int> b(n_rows, n_cols);

    // Matriz para almacenar el resultado de las operaciones
    Matrix<int> c(n_rows, n_cols);

    a.fill_random();
    b.fill_random();

    cout << "********** Operaciones básicas con la Matriz A **********" << endl;
    cout << "Matriz A " << endl;
    a.print_matrix();

    cout << "El mayor de la Matriz es: " << a.get_max() << endl;
    cout << "El menor de la Matriz es: " << a.get_min() << endl;
    cout << "La moda de la Matrix es: " << a.get_mode() << endl;
    cout << (a.isSymmetric() ? "" : "No") << " Es simétrica." << endl;
    cout << (a.isIdentity() ? "" : "No") << " Es identidad." << endl;
    cout << endl;

    cout << "Ingresa el escalar: " << endl;
    cin >> scalar;
    a.multiply_by_scalar(scalar);
    a.print_matrix();

    cout << "Intercambio: Ingresa 2 columnas del 1 al " << n_cols << endl;
    cout << "Columna 1: " << endl;
    cin >> col_1;
    cout << "Columna 2: " << endl;
    cin >> col_2;
    a.swap_cols(col_1, col_2);
    a.print_matrix();

    cout << "Intercambio: Ingresa 2 filas del 1 al " << n_rows << endl;
    cout << "Fila 1: " << endl;
    cin >> row_1;
    cout << "Fila 2: " << endl;
    cin >> row_2;
    a.swap_rows(row_1, row_2);
    a.print_matrix();

    cout << "Transpuesta de A " << endl;
    a.get_transpose();

    cout << "********** Operaciones con matrices **********" << endl;
    cout << "Matriz A " << endl;
    a.print_matrix();

    cout << "Matriz B " << endl;
    b.print_matrix();

    cout << "Matriz A + B " << endl;
    c = a + b;
    c.print_matrix();

    cout << "Matriz A - B " << endl;
    c = a - b;
    c.print_matrix();

    cout << "Matriz A * B " << endl;
    c = a * b;
    c.print_matrix();

    a.delete_matrix();
    b.delete_matrix();
    c.delete_matrix();
      */
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1());
	return 0;
}

/*
void leer(int c, int f, int a1[][], int a2[][])
{
    int i, j;
    cout << endl << "Elementos de la Matriz A:" << endl;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Leer Elemento [" << i << ";" << j << "]:"; cin >> a1[i][j];
        }
    }
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
            cout << a1[i][j] << " ";
        cout << endl;
    }
    cout << endl << "Elementos de la Matriz B:" << endl;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Leer Elemento [" << i << "," << j << "]:"; cin >> a2[i][j];
        }
    }
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
            cout << a2[i][j] << "  ";
        cout << endl;
    }
}

*/
/*void calc(int f, int c, int a1[2][2], int a2[2][2], int a3[2][2])
{
    int i, j;
    cout << endl << "Elementos de la Matriz C:" << endl;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            a3[i][j] = a1[i][j] + a2[i][j];
            cout << "El elemento [" << i << ";" << j << "];";
            cout << a3[i][j] << endl;
        }
    }
    cout << endl << "La Matriz Resultante es:" << endl;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
            cout << a3[i][j] << "  ";
        cout << endl;
    }
}*/