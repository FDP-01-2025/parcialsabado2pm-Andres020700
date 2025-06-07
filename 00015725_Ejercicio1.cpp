#include <iostream>
using namespace std;
int main()
{
    float nota; // Declaracion de variables de tipo flotante, porque se trabajara con notas

    cout << "Digita la nota que obtuviste en el examen, recuerda que va desde 0 a 100" << endl; // Se le pide al usuario ingresar una nota
    cin >> nota;

    if (nota >= 90 && nota <= 100) // Se verifica que la nota cumpla esos parametros
    {
        cout << "Obtuviste una calificacion excelente, felicidades" << endl;
    }
    else if (nota >= 75 && nota <= 89) // Se verifica que la nota introducida por el usuario este entre esos parametros
    {
        cout << "Obtuviste una nota buena, buen trabajo" << endl;
    }
    else if (nota >= 60 && nota <= 74) // Se verifica si la nota introducida por el usuario cumple esos parametros
    {
        cout << "Obtuviste una nota regular, puedes hacerlo mejor" << endl;
    }
    else if (nota >= 0 && nota < 60) // Se verifica si la nota introducida por el usuario cumple esos parametros
    {
        cout << "Obtuviste una nota mala, esfuerzate mas " << endl;
    }
    else // Si la nota que escribio el usuario no se encuentra en ninguna de las opciones, se muestra este mensaje
    {
        cout << "La nota que escribiste no esta dentro de los parametros" << endl;
    }

    return 0;
}