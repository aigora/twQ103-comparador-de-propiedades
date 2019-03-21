#include<stdio.h>
int main(){
int opcion;
do {	printf(" Bienvenido al comparador de propiedades, selecccione una opccion.\n");
	printf("1-propiedades\n");
	printf("2-comparador\n");
	printf("0-salir del programa\n");
	scanf("%d",&opcion);
switch (opcion){
	case 1 : printf("introduzca el elemento para saber sus propiedades:\n");
	  break;
    case 2 : printf("introduzca los dos elemntos que desee comparar:\n");
	  break;
	  case 0: return 0;
	default : printf("la opcion es incorrecta\n");
	}
}    while(opcion!=0);

}
