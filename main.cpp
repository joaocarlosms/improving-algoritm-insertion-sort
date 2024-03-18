/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

void swap(int* x, int* y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

void insertion_sort(int s[], int n)
{
    if(n <= 0)
        return; //ja esta ordenado
    else {
        int lastElement = s[n-1];
        insertion_sort(s, n-1);
        int j = n-2; //recebe o antepenultimo elemento do array
        
        while(j >= 0 && s[j] < lastElement) { // indice j compara com o ultimo elemento
            swap(&s[j + 1], &s[j]);
            j--;
        }
        s[j + 1] = lastElement;
    }
}

int main()
{
    int array[]  = {6, 5, 3, 1, 8, 7, 2, 4};
    int n = 8;
    
    insertion_sort(array, n);
   
    for(int i = n - 1; i >= 0; i--) {
        std::cout << array[i] << " ";
    }
    return 0;
}
