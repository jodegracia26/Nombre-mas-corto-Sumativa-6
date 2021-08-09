#include <stdio.h>
#include <string.h>

/* Aplicacion que lea los nombres de 5 personas por teclado
y determine cual es el nombre mas corto*/

int main()
{
    int i, tmp, pos, matlen[100];
    char matnom[5][100]; //Array of strings

    for(i=0;i<5;i++){
        printf("Nombre de la persona %d: ", i+1);
        scanf("%s", &matnom[i]);
        matlen[i]=strlen(matnom[i]);
    }

    tmp=matlen[0];
    for(i=0;i<5;i++){
        if (tmp > matlen[i]){
           tmp = matlen[i];
           pos=i;
        }
    }

    printf("El nombre mas corto es: %s. tiene %d caracteres", matnom[pos], tmp);

    return 0;
}