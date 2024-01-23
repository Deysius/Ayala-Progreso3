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
        printf("Bienvenido al menú\n");
        printf("(1) Agregar estudiantes\n");
        printf("(2) Ver lista de estudiantes\n");
        printf("(3) Salir\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Ingrese la matrícula: ");
            scanf("%d", &estudiante[num_estudiantes].matricula);
            // Pido al usuario que añada los datos del estudiante
            fprintf(archivo,"Matricula: %d\n",estudiante[num_estudiantes].matricula);
            // La funcion fprintf me permite ingresar datos al archivo
            // en este caso primero pido al usuario que ingrese el dato, luego con la funcion la envio al archivo
            fflush(stdin);
            printf("Ingrese el nombre: ");
            fgets(estudiante[num_estudiantes].nombre, 50, stdin);
            fprintf(archivo,"Nombre: %s\n",estudiante[num_estudiantes].nombre);
            //utilizo la funcion fgets, para pedir que se añada caracteres, funcionan como un scanf
            fflush(stdin);
            // con la funcion fflush limpio la memoria, evitando errores 

            printf("Ingrese la dirección: ");
            fgets(estudiante[num_estudiantes].direccion, 50, stdin);
            fprintf(archivo,"Direccion: %s\n",estudiante[num_estudiantes].direccion);
            fflush(stdin);
            // utilizo la funcion fgets, ya que el código no compila función gets() porque  está obsoleta en C99 y C11

            printf("Ingrese la materia: ");
            fgets(estudiante[num_estudiantes].materia, 50, stdin);
            fprintf(archivo,"Materia: %s\n",estudiante[num_estudiantes].materia);
            fflush(stdin);

            printf("Ingrese la nota: ");
            scanf("%f", &estudiante[num_estudiantes].nota);
            fprintf(archivo,"Nota: %f\n",estudiante[num_estudiantes].nota);
            fflush(stdin);

            num_estudiantes++;
            fflush(stdin);
            fclose(archivo);
            break;

        case 2:
        char caracter;
        archivo=fopen("Examen.txt","r");
        while (!feof(archivo))
        {
            caracter=fgetc(archivo);
            putchar(caracter);
            }
            fclose(archivo);
            break;
            default:
            break;
        }
    }
    return 0;
}
