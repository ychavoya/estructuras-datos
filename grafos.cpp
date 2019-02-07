/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grafos.cpp
 * Author: yael
 *
 * Created on February 7, 2019, 3:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

#include "classes/Nodo.h"
#include "classes/ListaSimple.h"

#define MAX_INPUT 20

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ListaSimple * lista = new ListaSimple(); 
    char input[MAX_INPUT];
    Nodo * nuevo;
    
    const int elementos = 10;
    
    // Insertar elementos
    for(int i = 0; i < elementos; i++) {
        cout << "Ingrese dato " << (i + 1) << ": ";
        cin.getline(input, MAX_INPUT);
        nuevo = new Nodo(input);
        
        // Ejemplo para usar ambas funciones
        if(i < elementos/2) {
            lista->insertarFin(nuevo);
        }
        else {
            lista->insertarInicio(nuevo);
        }
    }
    
    
    // Mostrar la lista
    lista->imprimir();

    // Eliminar elementos
    for(int i = 0; i < elementos; i++) {
        
        // Ejemplo para usar ambas funciones
        if(i < elementos/2){
            lista->eliminarFin();
        }
        else {
            lista->eliminarInicio();
        }

        lista->imprimir();
    }
    
    


    return 0;
}

