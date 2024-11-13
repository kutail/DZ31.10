#include <iostream>
#include <stdlib.h>
#include <Windows.h>

//Zadaniye_1
void FindMinSum10Chisel(const int size, int arr[], int summ1, int summ2, int index, int ItogIndex)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int j = 0; j < size; j++)
    {
        if (summ1 < summ2)
        {
            ItogIndex = index;
            summ1 = summ2;
            index += 1;
        }
        else
        {
            summ2 = 0;
            for (int j = 0; j < 10; j++)
            {
                summ2 += arr[index + j];
            }
            index += 1;
        }
    }
    std::cout << "Индекс числа с которого начинается минимальная сумма чисел\t" << ItogIndex;
}






int main()
{
    srand(time(NULL));
    int ItogIndex = 0;
    int index = 0;
    int summ1 = 0;
    int summ2 = 0;
    const int size = 100;
    int maxchislo = 9;
    int minchislo = 1;
    int arr[size];
    for (int j = 0; j < size; j++)
    {
        arr[j] = rand() % maxchislo + minchislo;
        std::cout << arr[j] << " ";
    }

    FindMinSum10Chisel(size, arr, summ1, summ2, index, ItogIndex);
    for (int j = 0; j < 10; j++)
    {
        summ1 += arr[j];
    }
    
    return 0;
}

