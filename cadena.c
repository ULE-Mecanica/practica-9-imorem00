#include <stdio.h>
#include <string.h>
int main(){
char cadena1[100];
char cadena2[100];
printf("Cadena 1: "); 
fgets(cadena1,100,stdin);
printf("Cadena 2: ");
fgets(cadena2,100,stdin);
if (strlen(cadena1)==strlen(cadena2))
{
printf("Cadenas de igual tamaño \n");
if(strcmp(cadena1,cadena2)==0)
{
printf("cadenas iguales\n");
}
else{
strcpy(cadena1,cadena2);
strcat(cadena1,cadena2);
printf("cadena1: %s",cadena1);
printf("cadena2: %s",cadena2);
}
}
else{
printf("Cadenas de otro tamaño \n");
strcpy(cadena1,cadena2);
strcat(cadena1,cadena2);
printf("cadena1: %s",cadena1);
printf("cadena2: %s",cadena2);
}
return 0;
  }
