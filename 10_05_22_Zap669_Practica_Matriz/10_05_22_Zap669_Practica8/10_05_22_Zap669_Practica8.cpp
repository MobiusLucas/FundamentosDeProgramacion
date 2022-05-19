// 10_05_22_Zap669_Practica8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{


    int matriz[3][3];
    //Modulo de Relleno
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            matriz[i][j] = (rand() % 9) + 1;

        }
    }
    //Modulo de Impresion
        for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
        {
            for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
            {
                std::cout << "[" << i << "]" << "[" << j << "] = " << matriz[i][j] << std::endl;

            }

        }
        std::cout << "\n";
        for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
        {
            for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
            {
                std::cout << matriz[i][j] << " ";

            }
            std::cout << "\n";
        }
    }
  

