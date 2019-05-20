#include<stdio.h>
#include<string.h>

int main(){
int opcion,numatomico,i,numatomico2;
char nombre[15],usuario[50],nombre2[15],nombre1[15];

printf("Bienvenido al comparador de propiedades, introduzca su nombre de usuario:\n");
gets(usuario);

do {printf("\n- Selecccione una opccion.\n");
	printf("1-propiedades\n");
	printf("2-comparador\n");
	printf("0-salir del programa\n");
	scanf("%d",&opcion);
switch (opcion){
  case 1  : printf("Introduzca el nombre del elemento, en minusculas y sin tildes si tuviera, para  saber sus propiedades:\n");
	         scanf("%s",&nombre);
	        if (strcmp(nombre,"hidrogeno")==0){
	        printf("-Su numero atomico es 1 y su simbolo es H. ");
	        printf("\n-El %s es el elemnto mas abundante al constituir el 75 por ciento de la   materia de todo el universo");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gaseoso");
			printf("\n  Estructura: Hexagonal");
			printf("\n  Densidad: 0,0899 kg/m3");
			printf("\n  Punto de fusion: -259ºC");
			printf("\n  Punto de ebullicion: -253ºC\n");
			}
	        else if (strcmp(nombre,"litio")==0){
	        printf("\n-Su numero atomico es 3 y su simbolo es Li. ");
	        printf("\n-El %s se utiliza en abundancia en las aplicaciones de calor, y gracias a su  alto potecial electro quimico es usado como anodo en baterias electricas.");
	        printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido");
			printf("\n  Estructura: Cubica centrada en el cuerpo");
			printf("\n  Densidad: 535 kg/m3");
			printf("\n  Punto de fusion: 181ºC");
			printf("\n  Punto de ebullicion: 1342ºC\n");	        
			}
			else if (strcmp(nombre,"helio")==0){
	        printf("\n-Su numero atomico es 2 y su simbolo es He.");
	        printf("\n-El %s tiene el punto de solidificacion mas bajo de todos los elementos quimicos, siendo el unico liquido que no puede solidificarse bajando la temperatura.");
	        printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gaseoso. ");
			printf("\n  Estructura: Hexagonal. ");
			printf("\n  Densidad: 0,1785 kg/m3. ");
			printf("\n  Punto de fusion: -272ºC (a 2.5 MPa) ");
			printf("\n  Punto de ebullicion:-269ºC ");
			}
			else if (strcmp(nombre,"berilio")==0){
	        printf("\n-Su numero atomico es 4 y su simbolo es Be. ");
	        printf("\n-El principal uso del %s metalico se encuentra en la manufactura de aleaciones berilio-cobre y en el desarrollo de materiales moderadores y reflejantes para reactores nucleares.");
	        printf("\n-Propiedades: ");
		    printf("\n  Estado ordinario: Solido. ");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 1848 kg/m3.");
			printf("\n  Punto de fusion: 1287ºC. ");
			printf("\n  Punto de ebullicion: 2469ºC.");
			}
			else if (strcmp(nombre,"boro")==0){
	        printf("\n-Su numero atomico es 5 y su simbolo es B .");
	        printf("\n-El %s");
		     printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Romboedrica.");
			printf("\n  Densidad: 2460 kg/m3.");
			printf("\n  Punto de fusion: 2076ºC.");
			printf("\n  Punto de ebullicion: 3927ºC.");
			}			
			else if (strcmp(nombre,"carbono")==0){
	        printf("\n-Su numero atomico es 6 y su simbolo es C.");
	        printf("\n-El principal uso industrial del %s es como un componente de hidrocarburos, especialmente los combustibles fosiles. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 2267 kg/m3.");
			printf("\n  Punto de fusion: 3567ºC(grafito).");
			printf("\n  Punto de ebullicion: 4827ºC.");
			}
			else if (strcmp(nombre,"nitrogeno")==0){
	        printf("\n-Su numero atomico es 7 y su simbolo es N.");
	        printf("\n-El %s constituye del orden del 78 por ciento del aire atmosferico y la aplicacion comercial mas importante del nitrogeno diatomico es la obtencion de amoniaco por el proceso de Haber.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gaseoso.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 1,2506 kg/m3.");
			printf("\n  Punto de fusion: -210ºC.");
			printf("\n  Punto de ebullicion: -196ºC.");
			}
			else if (strcmp(nombre,"oxigeno")==0){
	        printf("\n-Su numero atomico es 8 y su simbolo es O.");
	        printf("\n-El 55 por ciento de la produccion mundial de %s se consume en la produccion de acero, otro 25 por ciento se dedica a la industria quimica y Del 20 por ciento restante la mayor parte se usa para aplicaciones medicinales.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gaseoso.");
			printf("\n  Estructura: Cubica.");
			printf("\n  Densidad: 1,429 kg/m3.");
			printf("\n  Punto de fusion: -223ºC.");
			printf("\n  Punto de ebullicion: -183ºC.");
			}
			else if (strcmp(nombre,"fluor")==0){
	        printf("\n-Su numero atomico es 9 y su simbolo es F.");
	        printf("\n-El %s es el elemento mas electronegativo y reactivo y forma compuestos con practicamente todo el resto de elementos.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gaseoso.");
			printf("\n  Estructura: Cubica.");
			printf("\n  Densidad: 1,696 kg/m3.");
			printf("\n  Punto de fusion: -220ºC.");
			printf("\n  Punto de ebullicion: -188ºC.");
			}
			else if (strcmp(nombre,"neon")==0){
	        printf("\n-Su numero atomico es 10 y su simbolo es Ne.");
	        printf("\n-El %s se usa abundantemente para los indicadores publicitarios. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gaseoso.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 	0,8999 kg/m3.");
			printf("\n  Punto de fusion: -249ºC.");
			printf("\n  Punto de ebullicion: -246ºC.");
			}
	    	else if (strcmp(nombre,"sodio")==0){
	        printf("\n-Su numero atomico es 11 y su simbolo es Na.");
	        printf("\n-El %s es muy reactivo, se oxida en presencia de oxigeno y reacciona violentamente con el agua.El sodio es un componente de muchos minerales y un elemento esencial para la vida. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubico centrado en las caras.");
			printf("\n  Densidad: 968 kg/m3. ");
			printf("\n  Punto de fusion: 98ºC.");
			printf("\n  Punto de ebullicion: 883ºC.");
			}
			else if (strcmp(nombre,"magnesio")==0){
	        printf("\n-Su numero atomico es 12 y su simbolo es Mg.");
	        printf("\n-El %s no se encuentra en la naturaleza en estado libre, sino que forma parte de numerosos compuestos, en su mayoria oxidos y sales. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 1738 kg/m3.");
			printf("\n  Punto de fusion: 650ºC.");
			printf("\n  Punto de ebullicion: 1090ºC.");
			}
			else if (strcmp(nombre,"aluminio")==0){
	        printf("\n-Su numero atomico es 13 y su simbolo es Al.");
	        printf("\n-El %s se usa en forma pura, aleado con otros metales o en compuestos no metalicos el alumino es uno de los más importantes, tanto en cantidad como en variedad de usos. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 2698,4 kg/m3.");
			printf("\n  Punto de fusion: 660ºC.");
			printf("\n  Punto de ebullicion: 2519ºC.");
			}
			else if (strcmp(nombre,"silicio")==0){
	        printf("\n-Su numero atomico es 14 y su simbolo es Si.");
	        printf("\n-El %s se utiliza en aleaciones, en la preparacion de las siliconas, y debido a que es un material semiconductor muy abundante, tiene un interes especial en la industria electronica. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Diamante.");
			printf("\n  Densidad: 2330 kg/m3.");
			printf("\n  Punto de fusion: 1414ºC.");
			printf("\n  Punto de ebullicion: 2900ºC.");
			}
			else if (strcmp(nombre,"fosforo")==0){
	        printf("\n-Su numero atomico es 15 y su simbolo es P.");
	        printf("\n-El %s es el segundo mineral mas abundante en el cuerpo humano y un componente esencial en los organismos. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Monoclinica.");
			printf("\n  Densidad: 1823 kg/m3.");
			printf("\n  Punto de fusion: 44ºC.");
			printf("\n  Punto de ebullicion: 277ºC.");
			}
			else if (strcmp(nombre,"azufre")==0){
	        printf("\n-Su numero atomico es 16 y su simbolo es S.");
	        printf("\n-El %s se usa en multitud de procesos industriales, como la produccion de acido sulfurico para baterias, la fabricacion de polvora y el vulcanizado del caucho.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Ortorrombica.");
			printf("\n  Densidad: 1960 kg/m3.");
			printf("\n  Punto de fusion: 115ºC.");
			printf("\n  Punto de ebullicion: 445ºC.");
			}
			else if (strcmp(nombre,"cloro")==0){
	        printf("\n-Su numero atomico es 17 y su simbolo es Cl.");
	        printf("\n-El %s es un quimico importante para la purificacion del agua, en desinfectantes, y en la lejia.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gas.");
			printf("\n  Estructura: Ortorrombica.");
			printf("\n  Densidad: 3,214 kg/m3.");
			printf("\n  Punto de fusion: -102ºC.");
			printf("\n  Punto de ebullicion: -34ºC.");
			}
			else if (strcmp(nombre,"argon")==0){
	        printf("\n-Su numero atomico es 18 y su simbolo es Ar.");
	        printf("\n-El %s se emplea como gas de relleno en lamparas incandescentes ya que no reacciona con el material del filamento incluso a alta temperatura y presion, prolongando de este modo la vida util de la bombilla.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gas.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 1.784 kg/m3.");
			printf("\n  Punto de fusion: -189ºC.");
			printf("\n  Punto de ebullicion: -186ºC.");
			}
			else if (strcmp(nombre,"potasio")==0){
	        printf("\n-Su numero atomico es 19 y su simbolo es K.");
	        printf("\n-El %s al igual que otros metales alcalinos reacciona violentamente con el agua desprendiendo hidrogeno, incluso puede inflamarse espontaneamente en presencia de agua.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubico centrdo en el cuerpo.");
			printf("\n  Densidad: 856 kg/m3.");
			printf("\n  Punto de fusion: 63ºC.");
			printf("\n  Punto de ebullicion: 759ºC.");
			}
			else if (strcmp(nombre,"calcio")==0){
	        printf("\n-Su numero atomico es 20 y su simbolo es Ca.");
	        printf("\n-Las superficies de %s recientes son de color blanco plateado pero presenta un cambio fisico rapidamente, cambiando a un color levemente amarillo expuestas al aire y en ultima instancia grises o blancas por la formacion de hidroxido al reaccionar con la humedad ambiental.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubico centrado en las caras.");
			printf("\n  Densidad: 1550 kg/m3.");
			printf("\n  Punto de fusion: 842ºC.");
			printf("\n  Punto de ebullicion: 1527ºC.");
			}
			else if (strcmp(nombre,"escandio")==0){
	        printf("\n-Su numero atomico es 21 y su simbolo es Sc.");
	        printf("\n-El %s se utiliza en luces de alta intensidad y añadiendo yoduro de escandio en las lamparas de vapor de mercurio se consigue una luz solar artificial de muy alta calidad.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 2985 kg/m3.");
			printf("\n  Punto de fusion: 1541ºC.");
			printf("\n  Punto de ebullicion: 2830ºC.");
			}
			else if (strcmp(nombre,"titanio")==0){
	        printf("\n-Su numero atomico es 22 y su simbolo es Ti.");
	        printf("\n-El %s es el elemento metalico que posee la mayor proporcion de dureza-densidad.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 4507 kg/m3.");
			printf("\n  Punto de fusion: 1668ºC.");
			printf("\n  Punto de ebullicion: 3287ºC.");
			}
			else if (strcmp(nombre,"vanadio")==0){
	        printf("\n-Su numero atomico es 23 y su simbolo es V.");
	        printf("\n-El 85 por ciento del vanadio producido se emplea como ferrovanadio o como aditivo en aceros.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en el cuerpo.");
			printf("\n  Densidad: 6110 kg/m3.");
			printf("\n  Punto de fusion: 1902ºC.");
			printf("\n  Punto de ebullicion: 3409ºC.");
			}
			else if (strcmp(nombre,"cromo")==0){
	        printf("\n-Su numero atomico es 24 y su simbolo es Cr.");
	        printf("\n-El %s se utiliza principalmente en metalurgia para aportar resistencia a la corrosion y un acabado brillante.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en el cuerpo.");
			printf("\n  Densidad: 7140 kg/m3.");
			printf("\n  Punto de fusion: 1857ºC.");
			printf("\n  Punto de ebullicion: 2672ºC.");
			}			
			else if (strcmp(nombre,"manganeso")==0){
	        printf("\n-Su numero atomico es 25 y su simbolo es Mn.");
	        printf("\nEl traquetreo de los motores se reduce mediante el uso de un compuesto de manganeso que se añade a la gasolina sin plomo."); 
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en el cuerpo.");
			printf("\n  Densidad: 7430 kg/m3.");
			printf("\n  Punto de fusion: 1246ºC.");
			printf("\n  Punto de ebullicion: 2061ºC.");
			}
			else if (strcmp(nombre,"hierro")==0){
	        printf("\n-Su numero atomico es 26 y su simbolo es Fe.");
	        printf("\n-El %s tiene su gran aplicacion para formar los productos siderurgicos y la produccion de aceros.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en el cuerpo.");
			printf("\n  Densidad: 7874 kg/m3.");
			printf("\n  Punto de fusion: 1535ºC.");
			printf("\n  Punto de ebullicion: 2750ºC.");
			}
			else if (strcmp(nombre,"cobalto")==0){
	        printf("\n-Su numero atomico es 27 y su simbolo es Co.");
	        printf("\n-El %s se utiliza en su mayoria para protegr de la corrosion a otros metales.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 8900 kg/m3. ");
			printf("\n  Punto de fusion: 1495ºC.");
			printf("\n  Punto de ebullicion: 2927ºC.");
			}
			else if (strcmp(nombre,"niquel")==0){
	        printf("\n-Su numero atomico es 28 y su simbolo es Ni.");
	        printf("\n-El %s es un metal de transicion de color blanco con un ligerisimo tono amarillo, conductor de la electricidad y del calor, muy ductil y maleable ");
		    printf("\n-Propiedades: Solido.");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 8908 kg/m3.");
			printf("\n  Punto de fusion: 1455ºC.");
			printf("\n  Punto de ebullicion: 2457ºC");
			}
			else if (strcmp(nombre,"cobre")==0){
	        printf("\n-Su numero atomico es 29 y su simbolo es Cu.");
	        printf("\n-El %s es un material importante en multitud de actividades economicas ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 8960kg/m3.");
			printf("\n  Punto de fusion: 2562ºC.");
			printf("\n  Punto de ebullicion: 2562ºC.");
			}
			else if (strcmp(nombre,"Zinc")==0){
	        printf("\n-Su numero atomico es 30 y su simbolo es Zn.");
	        printf("\n-La principal aplicacion del zinc es el galvanizado del acero para protegerlo de la corrosion.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 7140 kg/m3.");
			printf("\n  Punto de fusion: 420ºC.");
			printf("\n  Punto de ebullicion: 907ºC.");
			}
			else if (strcmp(nombre,"galio")==0){
	        printf("\n-Su numero atomico es 31 y su simbolo es Ga.");
	        printf("\n-El %s es un metal blando, grisaceo en estado liquido y plateado brillante al solidificar, solido deleznable a bajas temperaturas que funde a temperaturas cercanas a la del ambiente.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Ortorrombica.");
			printf("\n  Densidad: 5904 kg/m3.");
			printf("\n  Punto de fusion: 29,7646°C.");
			printf("\n  Punto de ebullicion: 2204ºC.");
			}
			else if (strcmp(nombre,"germanio")==0){
	        printf("\n-Su numero atomico es 32 y su simbolo es Ge.");
	        printf("\n-El %s presenta la misma estructura cristalina que el diamante y resiste a los acidos y alcalis.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 5323 kg/m3.");
			printf("\n  Punto de fusion: 938ºC.");
			printf("\n  Punto de ebullicion: 2820ºC.");
			}
			else if (strcmp(nombre,"arsenico")==0){
	        printf("\n-Su numero atomico es 33 y su simbolo es As.");
	        printf("\n-El %s se presenta en tres estados alotropicos, gris o metalico, amarillo y negro.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Romboedrica.");
			printf("\n  Densidad: 5727 kg/m3.");
			printf("\n  Punto de fusion: 614ºC.");
			printf("\n  Punto de ebullicion: 817ºC.");
			}
			else if (strcmp(nombre,"selenio")==0){
	        printf("\n-Su numero atomico es 34 y su simbolo es Se.");
	        printf("\n-El %s se usa en la fabricacion de vidrio ademas, se usa en lociones y champues como tratamiento para la dermatitis seborreica.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 4790 kg/m3.");
			printf("\n  Punto de fusion: 221ºC.");
			printf("\n  Punto de ebullicion: 685ºC.");
			}
			else if (strcmp(nombre,"bromo")==0){
	        printf("\n-Su numero atomico es 35 y su simbolo es Br.");
	        printf("\n-El %s se usa detectar la presencia de compuestos organicos insaturados.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Liquido.");
			printf("\n  Estructura: Ortorrombica.");
			printf("\n  Densidad: 3119 kg/m3.");
			printf("\n  Punto de fusion: -7ºC.");
			printf("\n  Punto de ebullicion: 59ºC.");
			}
			else if (strcmp(nombre,"kripton")==0){
	        printf("\n-Su numero atomico es 36 y su simbolo es Kr.");
	        printf("\n-El %s es usado para la fotografia los flash de las camaras y en proyectores.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Gas.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 3,708 kg/m3.");
			printf("\n  Punto de fusion: -157ºC.");
			printf("\n  Punto de ebullicion: -153ºC.");
			}
			else if (strcmp(nombre,"rubidio")==0){
	        printf("\n-Su numero atomico es 37 y su simbolo es Rb.");
	        printf("\n-El %s se puede ionizar con facilidad por lo que se ha estudiado su uso en motores ionicos para naves espaciales.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 1532 kg/m3.");
			printf("\n  Punto de fusion: 39ºC.");
			printf("\n  Punto de ebullicion: 688ºC.");
			}
			else if (strcmp(nombre,"estroncio")==0){
	        printf("\n-Su numero atomico es 38 y su simbolo es 	Sr.");
	        printf("\n-El uso mas destacado del estroncio dentro de la ciencia es el de la construccion de los relojes atomicos.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Cubica centrada en las caras.");
			printf("\n  Densidad: 2630 kg/m3.");
			printf("\n  Punto de fusion: 777ºC.");
			printf("\n  Punto de ebullicion: 1382ºC.");
			}
			else if (strcmp(nombre,"itrio")==0){
	        printf("\n-Su numero atomico es 39 y su simbolo es Y.");
	        printf("\n-El %s se usa para eliminar oxigeno e impurezas de otros materiales; esto le permite reducir el oxido de vanadio y otros metales no ferrosos.");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 4472 kg/m3.");
			printf("\n  Punto de fusion: 1526ºC.");
			printf("\n  Punto de ebullicion: 3336ºC.");
			}
			else if (strcmp(nombre,"circonio")==0){
	        printf("\n-Su numero atomico es 40 y su simbolo es Zr.");
	        printf("\n-El %s se utiliza, generalmente aleado (zircaloy) en reactores nucleares, debido su resistencia a la corrosion y su muy baja seccion de captura de neutrones. ");
		    printf("\n-Propiedades:");
		    printf("\n  Estado ordinario: Solido.");
			printf("\n  Estructura: Hexagonal.");
			printf("\n  Densidad: 6,501 kg/m3.");
			printf("\n  Punto de fusion: 3098ºC.");
			printf("\n  Punto de ebullicion: 4409ºC.");
			}
			else if(strcmp(nombre,"niobio")==0){
	        printf("-Su numero atomico es 41 y su simbolo es Nb. ");
	        printf("\n-El %s se usa para la produccion de acero");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Tetraedrica");
	        printf("\n Densidad: 8570kg/m3");
	        printf("\n Punto fusión: 2750ºC");
	        printf("\n Punto de ebullicion: 3000ºC");
  	        }
	        else if(strcmp(nombre,"molibdeno")==0){
	        printf("-Su numero atomico es 42 y su simbolo es Mo. ");
            printf("\n-El %s usa para aleaciones");
	        printf("\n-Propiedades:");
     	    printf("\n Estado ordinario: sólido");
	        printf("\n Estructura: tetraedrica");
	        printf("\n Densidad: 10280kg/m3");
			printf("\n Punto fusión: 2896ºC");
			printf("\n Punto de ebullicion: 4912ºC");
			}
			else if(strcmp(nombre,"tecnecio")==0){
			printf("-Su numero atomico es 43 y su simbolo es Tc. ");
			printf("\n-El %s es el mas ligero");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 11500kg/m3");
			printf("\n Punto fusión: 2430ºC");
			printf("\n Punto de ebullicion: 4538ºC");
			}
			else if(strcmp(nombre,"rutenio")==0){
			printf("-Su numero atomico es 44 y su simbolo es Ru. ");
			printf("\n-El %s se usa en aleaciones");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: solido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 12370kg/m3");
			printf("\n Punto fusión: 2607ºC");
			printf("\n Punto de ebullicion: 4423ºC");
			}
			else if(strcmp(nombre,"rodio")==0){
			printf("-Su numero atomico es 45 y su simbolo es Rh. ");
			printf("\n-El %s se usa como catalizador en aleaciones con platino");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: solido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 12450kg/m3");
			printf("\n Punto fusión: 2237ºC");
			printf("\n Punto de ebullicion: 3968ºC");
			}
			else if(strcmp(nombre,"paladio")==0){
			printf("-Su numero atomico es 46  y su simbolo es Pd. ");
			printf("\n-El %s se usa en joyeria");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 12023kg/m3");
			printf("\n Punto fusión: 1828ºC");
			printf("\n Punto de ebullicion: 3236ºC");
			}
			else if(strcmp(nombre,"plata")==0){
			printf("-Su numero atomico es 47 y su simbolo es Ag. ");
			printf("\n-La %s es buen conductor");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: piramidal");
			printf("\n Densidad: 10490kg/m3");
			printf("\n Punto fusión: 1234.93ºC");
			printf("\n Punto de ebullicion: 2435ºC");
			}
			else if(strcmp(nombre,"cadmio")==0){
			printf("-Su numero atomico es 48 y su simbolo es Cd. ");
			printf("\n-El %s se usa en aleaciones");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 8650kg/m3");
			printf("\n Punto fusión: 594ºC");
			printf("\n Punto de ebullicion: 1040ºC");
			}
			else if(strcmp(nombre,"indio")==0){
			printf("-Su numero atomico es 49 y su simbolo es In. ");
			printf("\n-El %s se usa en aleaciones");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: bipiramidal");
			printf("\n Densidad: 7310kg/m3");
			printf("\n Punto fusión: 429.75ºC");
			printf("\n Punto de ebullicion: 2345ºC");
			}
			else if(strcmp(nombre,"estaño")==0){
			printf("-Su numero atomico es 50 y su simbolo es Sn. ");
			printf("\n-El %s es buen conductor");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 7310kg/m3");
			printf("\n Punto fusión: 505.8ºC");
			printf("\n Punto de ebullicion: 2875ºC");
			}
			else if(strcmp(nombre,"antimonio")==0){
			printf("-Su numero atomico es 51 y su simbolo es Sb. ");
			printf("\n-El %s se usa en imprentas");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: bipiramidal");
			printf("\n Densidad: 6697kg/m3");
			printf("\n Punto fusión: 903ºC");
			printf("\n Punto de ebullicion: 1860ºC");
			}
			else if(strcmp(nombre,"telurio")==0){
			printf("-Su numero atomico es 52 y su simbolo es Te. ");
			printf("\n-El %s se usa en quimica organica");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 6240kg/m3");
			printf("\n Punto fusión: 722ºC");
			printf("\n Punto de ebullicion: 1261ºC");
			}
			else if(strcmp(nombre,"yodo")==0){
			printf("-Su numero atomico es 53 y su simbolo es I. ");
			printf("\n-El %s se emplea en medicina");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 4940kg/m3");
			printf("\n Punto fusión: 386ºC");
			printf("\n Punto de ebullicion: 457ºC");
			}
			else if(strcmp(nombre,"xenon")==0){
			printf("-Su numero atomico es 54 y su simbolo es Xe. ");
			printf("\n-El %s se usa en dispositivos que emiten luz");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: gaseoso");
			printf("\n Estructura: ");
			printf("\n Densidad: 5.9kg/m3");
			printf("\n Punto fusión: 161ºC");
			printf("\n Punto de ebullicion: 165ºC");
			}
			else if(strcmp(nombre,"cesio")==0){
			printf("-Su numero atomico es 55 y su simbolo es Cs. ");
			printf("\n-El %s se usa ne celulas fotovoltaicas ");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 1879kg/m3");
			printf("\n Punto fusión: 301ºC");
			printf("\n Punto de ebullicion: 944ºC");
			}
			else if(strcmp(nombre,"bario")==0){
			printf("-Su numero atomico es 56 y su simbolo es Ba. ");
			printf("\n-El %s se oxida rapido en el agua");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: piramidal");
			printf("\n Densidad: 3510kg/m3");
			printf("\n Punto fusión: 1000ºC");
			printf("\n Punto de ebullicion: 2143ºC");
			}
			else if(strcmp(nombre,"hafnio")==0){
			printf("-Su numero atomico es 72 y su simbolo es Hf. ");
			printf("\n-El %s es muy ductil");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 13310kg/m3");
			printf("\n Punto fusión: 2506ºC");
			printf("\n Punto de ebullicion: 4876ºC");
			}
			else if(strcmp(nombre,"tantalio")==0){
			printf("-Su numero atomico es 73 y su simbolo es Ta. ");
			printf("\n-El %s se usa en telefonos moviles");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 16650kg/m3");
			printf("\n Punto fusión: 3290ºC");
			printf("\n Punto de ebullicion: 5731ºC");
			}
			else if(strcmp(nombre,"wolframio")==0){
			printf("-Su numero atomico es 74 y su simbolo es W. ");
			printf("\n-El %s tambien se llama tungsteno");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 19250kg/m3");
			printf("\n Punto fusión: 3696ºC");
			printf("\n Punto de ebullicion: 5828ºC");
			}
			else if(strcmp(nombre,"renio")==0){
			printf("-Su numero atomico es 75 y su simbolo es Re. ");
			printf("\n-El %s se usa en joyeria");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 21020kg/m3");
			printf("\n Punto fusión: 3459ºC");
			printf("\n Punto de ebullicion: 5869ºC");
			}
			else if(strcmp(nombre,"osmio")==0){
			printf("-Su numero atomico es 76 y su simbolo es Os. ");
			printf("\n-El %s se usa en aleaciones con platino");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: piramidal");
			printf("\n Densidad: 22610kg/m3");
			printf("\n Punto fusión: 3306ºC");
			printf("\n Punto de ebullicion: 5285ºC");
			}
			else if(strcmp(nombre,"iridio")==0){
			printf("-Su numero atomico es 77 y su simbolo es Ir. ");
			printf("\n-El %s es el metal mas resistente a la corrosion");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: bipiramidal");
			printf("\n Densidad: 22650kg/m3");
			printf("\n Punto fusión: 2739ºC");
			printf("\n Punto de ebullicion: 4700ºC");
			}
			else if(strcmp(nombre,"platino")==0){
			printf("-Su numero atomico es 78 y su simbolo es Pt. ");
			printf("\n-El %s se usa como catalizador en la industria del petroleo");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 21090kg/m3");
			printf("\n Punto fusión: 2041ºC");
			printf("\n Punto de ebullicion: 4098ºC");
			}
			else if(strcmp(nombre,"oro")==0){
			printf("-Su numero atomico es 79 y su simbolo es Au. ");
			printf("\n-El %s el mas bonito");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 19300kg/m3");
			printf("\n Punto fusión: 1337ºC");
			printf("\n Punto de ebullicion: 3129ºC");
			}
			else if(strcmp(nombre,"mercurio")==0){
			printf("-Su numero atomico es 80 y su simbolo es Hg. ");
			printf("\n-El %s se usaba en los termómetros");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: líquido");
			printf("\n Estructura: piramidal");
			printf("\n Densidad: 13534 kg/m3");
			printf("\n Punto fusión: 234ºC");
			printf("\n Punto de ebullicion: 629ºC");
			}
			else if(strcmp(nombre,"talio")==0){
			printf("-Su numero atomico es 81 y su simbolo es Tl. ");
			printf("\n-El %s es tóxico");
			printf("\n-Propiedades:");
			printf("\n Estado ordinario: sólido");
			printf("\n Estructura: tetraedrica");
			printf("\n Densidad: 11850kg/m3");
			printf("\n Punto fusión: 577ºC");
			printf("\n Punto de ebullicion: 1746ºC");
			}			
	        else if(strcmp(nombre,"plomo")==0){
	        printf("-Su numero atomico es 82 y su simbolo es Pb. ");
            printf("\n-El %s es un metal pesado y toxico");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Cubica");
	        printf("\n Densidad: 11340 kg/m3");
	        printf("\n Punto fusion: 327,65ºC");
	        printf("\n Punto de ebullicion: 1750ºC");
   	        }
	        else if(strcmp(nombre,"bismuto")==0){
	        printf("-Su numero atomico es 83 y su simbolo es Bi. ");
	        printf("\n-El %s es uno de los diez metales que fueron descubiertos");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Romboedrica");
	        printf("\n Densidad: 9780 kg/m3");
	        printf("\n Punto fusion: 271.59ºC");
	        printf("\n Punto de ebullicion: 1564ºC");
            }
	        else if(strcmp(nombre,"polonio")==0){
	        printf("-Su numero atomico es 84 y su simbolo es Po. ");
	        printf("\n-El %s es un raro elemento altamente radiactivo");
	        printf("\n-Propiedades:");
 	        printf("\n Estado ordinario: Solido ");
	        printf("\n Estructura: Cubica");
	        printf("\n Densidad: 9196 kg/m3");
	        printf("\n Punto fusion: 254ºC");
	        printf("\n Punto de ebullicion: 962ºC");
	        }
		    else if(strcmp(nombre,"astato")==0){
	        printf("-Su numero atomico es 85 y su simbolo es At. ");
	        printf("\n-El %s es el mas pesado de los halogenos ");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Desconocida");
	        printf("\n Punto fusion: 302ºC");
	        printf("\n Punto de ebullicion: 337ºC");
	        }
		    else if(strcmp(nombre,"radon")==0){
	        printf("-Su numero atomico es 85 y su simbolo es Rn. ");
	        printf("\n-El %s es producto de la desintegracion del radio");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Gas ");
	        printf("\n Estructura: Cubica");
	        printf("\n Densidad: 9,73kg/m3");
	        printf("\n Punto fusion: -71ºC");
	        printf("\n Punto de ebullicion: -61,5ºC");
	        }
		    else if(strcmp(nombre,"francio")==0){
     	    printf("-Su numero atomico es 87 y su simbolo es Fr. ");
	        printf("\n-El %s es el elemento con menos electronegatividad y el segundo menos abundante en la naturaleza");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Liquido");
	        printf("\n Estructura: Cubica");
	        printf("\n Densidad: 1870 kg/m3");
	        printf("\n Punto fusion: 27ºC");
	        printf("\n Punto de ebullicion: 677ºC");
	        }
	 	    else if(strcmp(nombre,"radio")==0){
	        printf("-Su numero atomico es 88 y su simbolo es Ra. ");
	        printf("\n-El %s es extramadamente radiactivo");
 	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Cubica");
	        printf("\n Densidad: 5500 kg/m3");
	        printf("\n Punto fusion: 960ºC");
 	        printf("\n Punto de ebullicion: 1737ºC");
	        }
		    else if(strcmp(nombre,"rutherfordio")==0){
	        printf("-Su numero atomico es 104 y su simbolo es Rf. ");
	        printf("\n-El %s tiene una vida media de 13 horas");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Punto fusion: 2127ºC");
	        printf("\n Punto de ebullicion: 5527ºC");
	        }
	        else if(strcmp(nombre,"dubnio")==0){
 	        printf("-Su numero atomico es 105 y su simbolo es Db. ");
	        printf("\n-El %s es un elemento sintetico y radioctivo con un periodo de semdesintegracion de 28 horas");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        }
	        else if(strcmp(nombre,"seaborgio")==0){
	        printf("-Su numero atomico es 106 y su simbolo es Sg. ");
	        printf("\n-El %s tiene una vida media de 2,4 minutos");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");	
	        }
	        else if(strcmp(nombre,"bohrio")==0){
	        printf("-Su numero atomico es 107 y su simbolo es Bh. ");
	        printf("\n-El %s se espera que tenga propiedades quimicas semejantes a las del elemento renio");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        }
	        else if(strcmp(nombre,"hassio")==0){
	        printf("-Su numero atomico es 108 y su simbolo es Hs. ");
	        printf("\n-El %s es un elemento sintetico de la tabla periodica  ");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Desconocida");
	        }
	        else if(strcmp(nombre,"meitnerio")==0){
	        printf("-Su numero atomico es 109 y su simbolo es Mt. ");
	        printf("\n-El %s su vida media es de 7,6 segundos");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Cubica");
	        }
	        else if(strcmp(nombre,"darmstadio")==0){
	        printf("-Su numero atomico es 110 y su simbolo es Ds. ");
	        printf("\n-El %s es un metal solido brillante y uno de los atomos superpesados");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Estructura: Desconocida");
	        }
	        else if(strcmp(nombre,"roentgenio")==0){
	        printf("-Su numero atomico es 111 y su simbolo es Rg. ");
	        printf("\n-El %s se obtiene a traves del bombardeo de hojas de bismuto (Bi) con iones de niquel (Ni), decayendo en 15 milisegundos. ");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Desconocido");
	        }
	        else if(strcmp(nombre,"copernicio")==0){
	        printf("-Su numero atomico es 112 y su simbolo es Cn. ");
	        printf("\n-El %s su apariencia fisica no se conoce aun ");
	        printf("\n-Propiedades:");
	        printf("\n Densidad: Desconocida");
	        printf("\n Punto de ebullicion: 84ºC");
            }
            else if(strcmp(nombre,"nihonio")==0){
	        printf("-Su numero atomico es 113 y su simbolo es Nh. ");
	        printf("\n-El %s es el primer elemento sintetico en ser priducido en Japon");
	        printf("\n-Propiedades:");
	        printf("\n Densidad: 16 kg/m3");
  	        printf("\n Punto fusion: 427ºC");
	        printf("\n Punto de ebullicion: 1127ºC");
	        }
	        else if(strcmp(nombre,"flerovio")==0){
	        printf("-Su numero atomico es 114 y su simbolo es Fl. ");
	        printf("\n-El %s se comporta como el primer elemento superpesado");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Solido");
	        printf("\n Densidad:  14kg/m3");
	        printf("\n Punto fusion: 67ºC");
	        printf("\n Punto de ebullicion: 147ºC");
	        }
	        else if(strcmp(nombre,"moscovio")==0){
	        printf("-Su numero atomico es 115 y su simbolo es Mc. ");
	        printf("\n-El %s tiene el isotopo con mayot numero de neutrones");
	        printf("\n-Propiedades:");
	        }
	        else if(strcmp(nombre,"livermorio")==0){
	        printf("-Su numero atomico es 116 y su simbolo es Lv. ");
	        printf("\n-El %s se usa para la investigacion cientifica");
	        printf("\n-Propiedades:");
	        }
	        else if(strcmp(nombre,"teneso")==0){
	        printf("-Su numero atomico es 117 y su simbolo es Ts. ");
	        printf("\n-El %s es el segundo elemneto mas pesado creado");
	        printf("\n-Propiedades:");
  	        printf("\n Estado ordinario: Solido");
	        printf("\n Punto fusión: 300-500ºC");
	        printf("\n Punto de ebullicion: 550ºC");
 	        }
            else if(strcmp(nombre,"oganeson")==0){
	        printf("-Su numero atomico es 118 y su simbolo es Og. ");
	        printf("\n-El %s es el elemento mas pesado sintetizado");
	        printf("\n-Propiedades:");
	        printf("\n Estado ordinario: Desconocido");
	        printf("\n Densidad:  13,65kg/m3");
	        printf("\n Punto de ebullicion: 320-380ºC");
	        }									
	        else {  
	        printf("\nLo sentimos no se ha encontrado ese elemento , por favor revise el nombre.\n");
		    printf("\n");
			}
						
	  break;
 case 2 : printf("introduzca el primer elemnto y su numero atomico:\n");
	         scanf("%s",&nombre1);
	         scanf("%d",&numatomico);
	         
	    if (numatomico>118 || numatomico<1){
	    	printf("el numero atomico no es correcto\n");
		}
	      else if (numatomico==1||numatomico==3||numatomico==11||numatomico==19||numatomico==37||numatomico==55||numatomico==87){
	    	printf("el %s es un alcalino\n",nombre1);
	    }
	      else if (numatomico==4||numatomico==12||numatomico==20||numatomico==38||numatomico==56||numatomico==88)	{
	    	printf("el %s es un alcalinoterreo\n",nombre1);
		}
		  else if (numatomico==5||numatomico==13||numatomico==31||numatomico==49||numatomico==81||numatomico==113) {
		  	printf("el %s es un terreo\n",nombre1);
	    }
	      else if (numatomico==6||numatomico==14||numatomico==32||numatomico==50||numatomico==82||numatomico==114) {
		  	printf("el %s es un carbonoide\n",nombre1);
	    }
	      else if (numatomico==7||numatomico==15||numatomico==33||numatomico==51||numatomico==83||numatomico==115) {
		  	printf("el %s es un nitrogenoide\n",nombre1);
	    }
	      else if (numatomico==8||numatomico==16||numatomico==34||numatomico==52||numatomico==84||numatomico==116) {
		  	printf("el %s es un calcogeno\n",nombre1);
	    }
	      else if (numatomico==9||numatomico==17||numatomico==35||numatomico==53||numatomico==85||numatomico==117) {
		  	printf("el %s es un halogeno\n",nombre1);
	    }
	   	  else if (numatomico==2||numatomico==10||numatomico==18||numatomico==54||numatomico==86||numatomico==118||numatomico==36) {
		  	printf("el %s es gas noble\n",nombre1);
	    }
	      else if (numatomico==89||numatomico==90||numatomico==91||numatomico==92||numatomico==101||numatomico==102||numatomico==93||numatomico==94||numatomico==95||numatomico==96||numatomico==97||numatomico==98||numatomico==99||numatomico==100) {
		  	printf("el %s es un actinido\n",nombre1);
	    }
	      else if (numatomico==57||numatomico==58||numatomico==59||numatomico==60||numatomico==61||numatomico==62||numatomico==63||numatomico==64||numatomico==65||numatomico==66||numatomico==67||numatomico==68||numatomico==69||numatomico==70) {
		  	printf("el %s es un lantanido\n",nombre1);
	    }
	      else			    
	         printf("el %s es un metal de transicion\n",nombre1);
	         
	         
	 printf("introduzca el segundo elemnto y su numero atomico:\n");
	         scanf("%s",&nombre2);
	         scanf("%d",&numatomico2);
	         
	     if (numatomico2>118 || numatomico2<1){
	    	printf("el numero atomico no es correcto\n");
	  	 }
	      else if (numatomico2==1||numatomico2==3||numatomico2==11||numatomico2==19||numatomico2==37||numatomico2==55||numatomico2==87){
	     	printf("el %s es un alcalino\n",nombre2);
	     }
	      else if (numatomico2==4||numatomico2==12||numatomico2==20||numatomico2==38||numatomico2==56||numatomico2==88)	{
	     	printf("el %s es un alcalinoterreo\n",nombre2);
	     }
		  else if (numatomico2==5||numatomico2==13||numatomico2==31||numatomico2==49||numatomico2==81||numatomico2==113) {
		  	printf("el %s es un terreo\n",nombre2);
	     }
	      else if (numatomico2==6||numatomico2==14||numatomico2==32||numatomico2==50||numatomico2==82||numatomico2==114) {
		  	printf("el %s es un carbonoide\n",nombre2);
	     }
	      else if (numatomico2==7||numatomico2==15||numatomico2==33||numatomico2==51||numatomico2==83||numatomico2==115) {
		  	printf("el %s es un nitrogenoide\n",nombre2);
	     }
	      else if (numatomico2==8||numatomico2==16||numatomico2==34||numatomico2==52||numatomico2==84||numatomico2==116) {
	 	  	printf("el %s es un calcogeno\n",nombre2);
	     }
	      else if (numatomico2==9||numatomico2==17||numatomico2==35||numatomico2==53||numatomico2==85||numatomico2==117) {
	     	printf("el %s es un halogeno\n",nombre2);
	     }
		  else if (numatomico2==2||numatomico2==10||numatomico2==18||numatomico2==54||numatomico2==86||numatomico2==118||numatomico2==36) {
		  }
	      else if (numatomico2==89||numatomico2==90||numatomico2==91||numatomico2==92||numatomico2==101||numatomico2==102||numatomico2==93||numatomico2==94||numatomico2==95||numatomico2==96||numatomico2==97||numatomico2==98||numatomico2==99||numatomico2==100) {
	         printf("el %s es un actinido\n",nombre2);
	     }
	      else if (numatomico2==57||numatomico2==58||numatomico2==59||numatomico2==60||numatomico2==61||numatomico2==62||numatomico2==63||numatomico2==64||numatomico2==65||numatomico2==66||numatomico2==67||numatomico2==68||numatomico2==69||numatomico2==70) {
	    	  printf("el %s es un lantanido\n",nombre2);	
	     }		 
		  else	{   
	         printf("el %s es un metal de transicion\n",nombre1);
	     }	    	    
	 
	 if (strcmp(nombre1,nombre2)==0){
        printf("-Por favor, seleccione elemntos distintos.\n");
         }
	 
		  break;	  
 case 0: printf("Hasta pronto %s ",usuario );
	  return 0;
 
 default : printf("La opcion es incorrecta\n");
 }
   
   
    }     while(opcion!=0);

}
