/* MANUEL GIOVANNI CORTAZAR DE LA CRUZ
Matricula: 2193001368 */
#include <iostream>
using namespace std;
struct Datos
{
    string matricula;
    int edad;
};

int main()
{
    int n, mayores = 0, sedad = 0, grande = 0, alsg[0];
    do
    {

        cout << "Ingrese la cantidad de alumnos a trabajar en el programa" << endl;
        cin >> n;
    } while ((n < 0) || (n > 10));
    Datos alumnos[n];
    cin.ignore(100, '\n');
    cout << "A continuacion se ingresara matricula y edad de los alumnos..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese matricula de alumno " << i + 1 << endl;
        getline(cin, alumnos[i].matricula);
        cout << "Ingrese edad de alumno " << i + 1 << endl;
        cin >> alumnos[i].edad;
        cin.ignore(100, '\n');
    }

    for (int i = 0; i < n; i++)
    {
        sedad += alumnos[i].edad;

        if (alumnos[i].edad > grande)
        {
            grande = alumnos[i].edad;
        }

        cout << "Alumno: " << i+1 << " Matricula: " << alumnos[i].matricula << " Edad: " << alumnos[i].edad << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (alumnos[i].edad > 20)
        {
            mayores++;
        }
    }
    cout << "Cantidad de alumnos mayores de 20 anos: " << mayores << endl;
    cout << "Promedio de edad del grupo de alumnos: " << float(sedad / n) << endl;
    cout << "Edad mas grande que se tiene en el grupo: " << grande << endl;
    cout << "Datos de los alumnos que tienen la edad de " << grande << endl;

    for (int i = 0; i < n; i++)
    {
        if (alumnos[i].edad >= grande)
        {
            cout << "Matricula: " << alumnos[i].matricula << " Edad: " << alumnos[i].edad << endl;
        }
    }
    return 0;
}
