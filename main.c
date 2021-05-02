#include <stdio.h>
#include <stdlib.h>

// Matriz de transicion

int main()
{
    // Section - leer archivo
    char ch;
    const char *file_name;
    FILE *fp;

    file_name = "entrada.txt";

    fp = fopen(file_name, "r");

    if (fp == NULL)
    {
        perror("Error abriendo el archivo, veificar que existe.\n");
        exit(EXIT_FAILURE);
    }

    while((ch = fgetc(fp)) != EOF)  
    printf("%c", ch);

    fclose(fp);
    // End of section - leer archivo

    return 0;
}