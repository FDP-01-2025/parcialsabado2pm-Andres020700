#include <iostream>
using namespace std;
int main()
{
    int opcion; // Se declara una variable de tipo entero

    cout << "Hola, este es un bot que te ayudara a conocer cuantos dias tiene cada mes del anio (sin anio bisiesto)" << endl;
    cout << "_________________________________________________________________________________" << endl;
    cout << "Digita el mes que quisieras conocer cuantos dias tiene" << endl;
    cout << " 1. Enero" << endl;
    cout << " 2. Febrero" << endl;
    cout << " 3. Marzo" << endl;
    cout << " 4. Abril" << endl;
    cout << " 5. Mayo" << endl;
    cout << " 6. Junio" << endl;
    cout << " 7. Julio" << endl;
    cout << " 8. Agosto" << endl;
    cout << " 9. Septiembre" << endl;
    cout << "10. Octubre" << endl;
    cout << "11. Noviembre" << endl;
    cout << "12. Diciembre" << endl;
    cin >> opcion;
    // Es un menu interactivo para que el usuario digite la opcion que guste

    switch (opcion)
    {
    case 1: // Se mostrara en el caso que el usuario digite la primera opcion
        cout << "Digitastes el numero 1 que corresponde al mes de Enero, Enero tiene 31 dias" << endl;
        break;

    case 2: // Se mostrara en el caso que el usuario digite la segunda opcion
        cout << "Digitastes el numero 2 que corresponde al mes de Febrero, Febrero tiene 28 dias" << endl;
        break;

    case 3: // Se mostrara en el caso que el usuario digite la tercera opcion
        cout << "Digitastes el numero 3 que corresponde al mes de Marzo, Marzo tiene 31 dias" << endl;
        break;

    case 4: // Se mostrara en el caso que el usuario digite la cuarta opcion
        cout << "Digitastes el numero 4 que corresponde al mes de Abril, Abril tiene 30 dias" << endl;
        break;

    case 5: // Se mostrara en el caso que el usuario digite la quinta opcion
        cout << "Digitastes el numero 5 que corresponde al mes de Mayo, Mayo tiene 31 dias" << endl;
        break;

    case 6: // Se mostrara en el caso que el usuario digite la sexta opcion
        cout << "Digitastes el numero 6 que corresponde al mes de Junio, Junio tiene 30 dias" << endl;
        break;

    case 7: // Se mostrara en el caso que el usuario digite la septima opcion
        cout << "Digitastes el numero 7 que corresponde al mes de Julio, Julio tiene 31 dias" << endl;
        break;

    case 8: // Se mostrara en el caso que el usuario digite la octava opcion
        cout << "Digitastes el numero 8 que corresponde al mes de Agosto, Agosto tiene 31 dias" << endl;
        break;

    case 9: // Se mostrara en el caso que el usuario digite la novena opcion
        cout << "Digitastes el numero 9 que corresponde al mes de Septiembre, Septiembre tiene 30 dias" << endl;
        break;

    case 10: // Se mostrara en el caso que el usuario digite la decima opcion
        cout << "Digitastes el numero 10 que corresponde al mes de Octubre, Octubre tiene 31 dias" << endl;
        break;

    case 11: // Se mostrara en el caso que el usuario digite la decimo primera opcion
        cout << "Digitastes el numero 11 que corresponde al mes de Noviembre, Noviembre tiene 30 dias" << endl;
        break;

    case 12: // Se mostrara en el caso que el usuario digite la decimo segunda opcion
        cout << "Digitastes el numero 12 que corresponde al mes de Diciembre, Diciembre tiene 31 dias" << endl;
        break;

    default: // Se mostrara en el caso que el usuario digite una opcion que no este dentro de las opciones valida
        cout << "Digite una opcion que este dentro de las ocpiones" << endl;
        break;
    }

    return 0;
}