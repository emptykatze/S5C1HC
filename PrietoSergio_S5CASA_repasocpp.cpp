#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <array>
//1) Inicializar dos variables globales (con valores escogidos por ustedes), una entera y otra flotante.
int variable1=5; double variable2=2.718;
//8) Haga una función que reciba dos variables una flotante llamada mivarflotante y una entera llamada mivarentera y retorne la variable flotante dividida por la variable entera.    
double funcion(double mivarflotante, int mivarentera){
    return mivarflotante/mivarentera;
}

//10) Haga una función que retorne el mínimo del arreglo de números aleatorios antes creado
template <size_t N>
int minimo(std::array<int, N>& arr) {
    int minimo=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<minimo)
        {
            minimo=arr[i];
        }
    }
    return minimo;
}
//11) Haga una función que reciba el arreglo de números aleatorios antes creado, imprima los números impares y pare de imprimir al encontrar un número mayor a 800
template <size_t N>
int funcion2(std::array<int, N>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]%2!=0)
        {
            std::cout<<arr[i]<<" ";
        } 
        else if (arr[i]>800)
        {
            break;
        }
        
    }
    return 0;
}


int main() {
    //2) Imprimir los valores de las variables en un mensaje: "la primera tiene un valor de XX y la segunda variable tiene un valor de YY"
    std::cout << "La primera variable tiene un valor de "<< variable1<< " y la segunda variablee tiene un valor de "<< variable2 <<"\n";
    //3) Calcular el valor de la segunda variable dividida por la primera e imprimir : "El resultado es ZZ" 
    double sum=variable1+variable2;
    std::cout<<"El resultado de la suma es "<< sum<< "\n";
    //4) Crear un arreglo con 300 números enteros aleatorios entre 0 y 900. ejemplos en: https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/ o https://www.cplusplus.com/reference/cstdlib/rand/ o rand - C++ Reference entre otros)
    //5) Hacer una iteración para recorrer dicho arreglo e imprimir todos sus elementos. 
    std::array<int, 300> arreglo;
    std::cout<<"\n"<<"La longitud del arreglo es "<<sizeof(arreglo);
    for (int i = 0; i <= 300; i++)
    {
        arreglo[i]=rand()%901;
        std::cout << arreglo[i]<<" ";
    }
    //6) Imprimir el quinto elemento del arreglo
    std::cout<<"\n"<<arreglo[4];
    //7) Obtener la longitud del arreglo e imprimir: "la longitud del arreglo es XX" (use la función size(), mire cppreference)
    std::cout<<"\n"<<"La longitud del arreglo es "<<arreglo.size();
    //9) Llame su función desde la función main e imprima lo que retorna su función para mivarflotante=17.5 y mivarentera=5.
    std::cout <<"\n"<< funcion(17.5,5);
    //10
    std::cout<<"\n"<< "El minimo del array es "<<minimo(arreglo)<<"\n";
    //11
    funcion2(arreglo);
    return 0;
}


/*para ver mas ejemplos: https://www.w3schools.com/CPP/cpp_variables.asp*/





