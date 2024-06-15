#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
    char nombreDirectorio[16];
    int ret = 0;

    printf("Ingrese el nombre del directorio: ");
    scanf("%s", nombreDirectorio);

    ret = mkdir(nombreDirectorio, 0755);

    if (ret == 0)
        printf("Directorio creado exitosamente\n");
    else
        printf("No se pudo crear el directorio %s\n", nombreDirectorio);

    return 0;
}
