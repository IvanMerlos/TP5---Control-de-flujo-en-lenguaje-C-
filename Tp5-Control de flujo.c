/*Link de repo:
https://github.com/IvanMerlos/TP5---Control-de-flujo-en-lenguaje-C-
*/

#include <stdio.h>
int n;
float nota,max,min,promedio = 0;
int main()
{
 
    printf(" Ingrese c/de notas: ");
    scanf("%d",&n);
    
    while(n<0){
    printf(" Ingrese c/de notas *POSITIVAS*: ");
    scanf("%d",&n);
    }
    
for(int i=1;i<=n;i++){
  printf(" Ingrese nota del alumno:");
    scanf("%f",&nota);
    
    while(nota<0 || nota>100){
     printf(" ERROR: Ingrese nota de 0 a 100\n");
     printf(" Ingrese nota del alumno:");
     scanf("%f",&nota);
    }
     
      if (i == 1) {
        max = min = nota;
    }
    else {
        if (nota > max){
         max = nota;
        } 
        if (nota < min){
         min = nota;
        } 
    }

    promedio += nota;
}
        float resultado = promedio/n;
        printf(" La nota menor es %.2f y la mayor %.2f\n ",min,max);
        printf(" El promedio es %.2f\n",resultado);
    return 0;
}
