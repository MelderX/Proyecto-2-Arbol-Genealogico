#include <stdio.h>
#include <stdlib.h>
 int main()
 {
 	int n, opcion;

    do
    {
        printf( "\n****ESTE PROGRAMA MUESTRA EL ARBOL FAMILAR DE LOS MARTINEZ**** \n." );
        printf( "\n   1. MIS HERMAN@S .\n" );
        printf( "\n   2. MIS TI@S.\n" );
        printf( "\n   3. MIS PRIM@S.\n" );
        printf( "\n   4. MIS PADRES .\n" );
        printf( "\n   5. MIS ABUEL@S.\n" );
        printf( "\n   6. SALIR. \n" );
        
        

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: 
            printf("***ESCOJISTE HERMAN@S :)*** \n");
			printf("DAFNE MARTINEZ MARTINEZ\n ");
                    break;

            case 2:
			printf("***ESCOJISTE TI@S***\n");
			printf("MARCO ANTONIO MARTINEZ PARRA \n");
			printf("IRMA PEREZ GUZMAN \n");
			printf("ALBERTO MARTINEZ PARRA \n" );
			printf("MARGARITA SALAZAR ELIZALDE \n" );
	        break;

            case 3: 
            printf("***ESCOJISTE PRIM@S*** \n " );
            printf("DANA ZOE MARTINEZ SALZAR ELIZALDE \n" );
            printf("ROMINA MARTINEZ SALZAR ELIZALDE \n" );
            printf("AMERICA ALONDRA MARTINEZ PEREZ \n" );
            printf("ALEXANDRA MARTINEZ PEREZ \n" );
            break;
            
            case 4:
            printf("***ESCOJISTE PADRES***\n" );
            printf("CARLOS MARTINEZ FLORES \n" );
            printf("ALMA BEATRIZ MARTINEZ PARRA \n" );
			 break;
			
			case 5:
			printf("***ESCOJISTE ABUEL@S***\n" );
			printf("SILVESTRE MARTINEZ ALFAN \n" );
			printf("EVANGELINA PARRA REYES \n" );
			printf("MARIA LUISA REYES \n" );
         }

         /* Fin del anidamiento */

    } while ( opcion != 6 );

    return 0;
}
 
