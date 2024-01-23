#include <stdio.h>
#include <string.h>
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
    //Mediante una estructura designo los valores para cada uno de las variables
};
int main()
{
    int menu;
    struct alumno estudiante[50];
    int num_estudiantes = 0;
    FILE*archivo;
    archivo=fopen("Examen.txt","a");
    while (menu != 3)
    //Mediante un bucle while, hago que mi menu se repita infinitamente hasta que el usuario quiera salir
    {
       
        case 2:
        break;
        default:
            break;
        }
    }
    return 0;
}
