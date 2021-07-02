#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
/** ------------------------------- Made in Colombia, by: Edward Nicolas Duarte Valencia--------------------------------------
* Este programa busca la organizaci�n de "la tiendita".\n
* En donde se tiene en cuenta las medidas implementadas por el gobierno colombiano "Pico y cedula" \n
* Adicionalmente, el programa consta de 3 interfaces diferentes para : Cliente, administrador, y vendedor.\n
* 1) Interfaz de cliente: Para esta opci�n se debe mostrar el men� ya definido en el taller anterior, evaluando si este puede o no entrar a la tienda y escogiendo el producto y cantidad deseados, pero para ello, ahora debe preguntar primero por la categor�a y luego por el producto deseado. Para esto se debe tener en cuenta:
*    a) Si la cantidad del producto en el inventario es 0, no se puede realizar la venta.
*    b) Si en el inventario la cantidad es mayor a 0, se debe restar una unidad del producto seleccionado y actualizar el inventario.
* 2) Interfaz de vendedor: El vendedor s�lo podr� acceder a los datos del inventario, de forma que le sirve como ayuda al cliente antes de realizar su compra, para ofrecerle solo los productos disponibles\n.
* 3) Interfaz de administrador: El administrador debe tener la capacidad de modificar el inventario, pues este es el responsable de devoluciones, reclamos, etc. adem�s de ingresar nuevas unidades en la tienda\n.
* integra una funci�n para cerrar el programa. Donde: Cuando la persona que est� usando el sistema haya terminado su tarea, se debe cerrar la aplicaci�n. En este caso se debe cerrar el programa con la instrucci�n return(0);
**/
int main()
{
    // Se asigna un color al fondo negro y a la letra verde.
    system("color 06");
    // Se inicializan la matriz con los ID de cada producto.
    int x,y, arreglo[3][3] = {{3,4,10},{1,2,0},{5,7,1}};
    // Se inicializa la variable que almacena el n�mero del dia que el usuario le ingresa al programa.
    int dia         = 0;
    // Se inicializa la variable que guarda la contrase�a del administrador.
    int contrasenia = 0;
    // A continuaci�n se muestra el logo de la empresa.
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKXMMMMMMMMMMMMMMMMMMMMMMNkxXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMWx,;OWMMMMMMMMMMMMMMMMMMMKl..dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXk0WMMMMMMMMMMMMMMMMMMMMNd.  'dXMMMMMMMMMMMMMMMMNk;.  'OWMMMMMMMMMMMMMMMMMMMWXkkNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo,cONMMMMMMMMMMMMMMMMMXo.    .:OWMMMMMMMMMMMMW0c.     ,kWMMMMMMMMMMMMMMMWXOl,.:KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0; .ckNMMMMMMMMMMMMMWKc.       .lKWMMMMMMMMWKo.        'xNMMMMMMMMMMMWNOl,.   :XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx.  .;d0NMMMMMMMMMWO;.          'oXMMMMMMNx,.          .lKWMMMMMMWNOo,.     .oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK:     .;oONWMMMWKl.             .,dXWMW0c.             .'dXWMMNOo,.        'OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk'       .,ldkxl'.                .,oxo'                 .'col;.          .oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.          ..                      .                                    ;KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK:                                                                      'kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO'                                                                    .dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.                                                                  .oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.                                                                .lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0;                                                               .cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk'                                                             .:KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd.                                                           .:KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.                                                          ;0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl.                                                        ,OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl.                                                      .xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl.                                                    .lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXo..                                           .....';oKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxlc:,,'''.....''''',,,;;;;:::cccllloooddddxxkOO0KXNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNXXXXXKXXXXXNNNNNNWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxollokNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNXXXXXNWMMMMMMMW0dolodONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MNK0000000000000000000000XWMMMMXo:::::cOWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOlccclkNMMMMMMMKo::::;l0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("M0l::::::::::::::::::::::dXMMMMNkl:::cdKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWkc::::xNMMMMMMMXxc:::cxXMMMMMMMMWKOOOOOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("M0l::::::::::::::::::::::dXMMMMMWX0OOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWkc::::xNMMMMMMMMNK0O0KNMMMMMMMMMNx::::ckWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MNK000000Od:::::cxO000000KWMMMMMNXXXXXNWMMMMMMMMMMMMMWNXXKKKXXNWMMMMMMMMMMMMMWXXXXXNWWWNXKKKKXNWMMMMMMMMMMMMMMMMMMMWNXKKKKXNWWkc::::xNMMMMMMMMNXKXXXNWMMMMMWWNXd::::cxXNNNWMMMMMMMMMMMWNNXKKKKKXNNWMMMMM\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMW0lccccxXMMMMMMMMMMWKOxolcc:cclodOXWMMMMMMMMMMKoccccd0kdocc:cccoxOXWMMMMMMMMMMMMMNKkdlccccccoxOd:::::xNMMMMMMMWOlcccckNMMMMMXxolc:::::cooookNMMMMMMMN0kdolcc:::cclox0NWMM\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMMMWKxc:::::ccc:::::cxKWMMMMMMMMKl::::cc::::::::::::o0WMMMMMMMMMMWKdc::::::::::::::::::xNMMMMMMMWk:::::xNMMMMMKo:::::::::::::dXMMMMMMWKo:::::::::::::::o0WM\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMMWOl::::lx0KKK0xl::::l0WMMMMMMMKl::::::coxkkxdc:::::l0WWMMMMMMMWOl:::::lxkOOOxl:::::::xNMMMMMMMWk:::::xNMMMMMNOkxl:::::oxkkk0NMMMMMMMW0ooxkO000Okoc::::l0W\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMW0l::::oKWWWWWWWKd::::lKWMMMMMMKl:::::o0NWMMWW0o:::::xKNMMMMMMW0l::::cxXWMMMMWXkc:::::xNMMMMMMMWk:::::xNMMMMMMMWNx::::ckNMMMMMMMMMMMMMWNNWWWWWWWWXd:::::xN\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMNx:::::lxxxxxxxxxo:::::kWMMMMMMKl::::cOWMMMMMMWkc::::dKNMMMMMMWk:::::dXMMMMMMMMNx:::::xNMMMMMMMWk:::::xNMMMMMMMMNx::::ckNMMMMMMMMMMMMMWX0Okxxxxxxxo:::::dN\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMNd::::::cccccccccccccclkNMMMMMMKl::::l0WMMMMMMWOc::::dKNMMMMMMNx:::::xNMMMMMMMMNk:::::xNMMMMMMMWk:::::xNMMMMMMMMNx::::ckNMMMMMMMMMMMWXxl::::::ccccc:::::dN\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMWkc::::oOKKKKXKKKKKKKXXNMMMMMMMKl::::lKMMMMMMMWOc::::dKNMMMMMMWOc::::l0WMMMMMMWKo:::::xNMMMMMMMWk:::::xNMMMMMMMMNx:::::kNMMMMMMMMMMMKo::::lx0KKKKKkc::::dN\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMMXd::::cd0XNWWWNX0kONWMMMMMMMMMKl::::l0WMMMMMMWOc::::dKNMMMMMMMXd:::::lkKNWNNXOo::::::xNMMMMMMMWk:::::xNMMMMMMMMNx:::::dKWWWWWMMMMMWOc::::dXWMMWWXx:::::dN\n");
    printf("MMMMMMMMMWOc::::lKMMMMMMMMMMMMMWOc::::dXMMMMMMMWXxc:::::lodddol:::o0WMMMMMMMMKl::::l0WMMMMMMWOc::::dKNMMMMMMMWXxc:::::cloolc::::::::xNMMMMMMMWk:::::xNMMMMMMMMW0l:::::lddodKWMMMMWKo::::cdkOOOxl::::::dX\n");
    printf("MMMMMMMMMWOc:::;lKMMMMMMMMMMMMMWOc::::dXMMMMMMMMMWKkoc:::::::::::ld0WMMMMMMMMKl;:::l0WMMMMMMWOc;:::dKNMMMMMMMMMN0dl::::::::::ll:::::xNMMMMMMMWk:;:::xNMMMMMMMMMW0dc::::::::dXMMMMMWKdc:::::::::loc::::dX\n");
    printf("MMMMMMMMMWKkxxkxOXMMMMMMMMMMMMMWXkxxxk0NMMMMMMMMMMMWNK0kxxdddxxk0XWMMMMMMMMMMNOxxxxOXMMMMMMMWKkxkkx0NWMMMMMMMMMMMWX0kxxdddxk0XKkkkkk0WMMMMMMMWKkxkxkKWMMMMMMMMMMMNKOxxdddxk0NMMMMMMMWKOkxdddxkOXX0xxxk0W\n");
    printf("MMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n\n");
    // Se muestra un men� con los posibles d�as que el usuario puede digitar.
    printf("Digite el n%cmero del d%ca de la semana:\n",163,161);
    printf("_____________________________\n");
    printf("|   N%cmero   |     d%ca      |\n",163,161);
    printf("|____________|______________|\n");
    printf("|     1      |    Lunes     |\n");
    printf("|------------|--------------|\n");
    printf("|     2      |    Martes    |\n");
    printf("|------------|--------------|\n");
    printf("|     3      |    Mi%crcoles |\n",130);
    printf("|------------|--------------|\n");
    printf("|     4      |    Jueves    |\n");
    printf("|------------|--------------|\n");
    printf("|     5      |    Viernes   |\n");
    printf("|____________|______________|\n");
    // Se almacena el valor del dia que el usuario ingresa.
    scanf("%d", &dia);
    // Condicional para repetir el programa n veces.
    while (TRUE)
    {
        // Variable de men� administrador, en donde almacena si el usuario desea realizar alguna modificaci�n al inventario.
        int modiInventario    = 0;
        // Variable de men� administrador, en donde almacena el n�mero de productos que desea agregar o quitar.
        int modiUnidades      = 0;
        // Variable de men� administrador, en donde almacena la categor�a a la que se le desea realizar alg�n cambio.
        int categoriaCambiar  = 0;
        // Variable de men� administrador, en donde almacena el n�mero del producto en la matriz, del que se desea realizar alg�n cambio.
        int modiProducto      = 0;
        // Variable de men� administrador, en donde almacena el deseo del usuario por realizar alguna modificaci�n extra al inventario.
        int masModificaciones = 2;
        // Se inicializa la variable que almacena uno de los 3 men� al que el usuario desea ingresar.
        int menu              = 0;
        // Condicional para que el usuario pueda ingresar �nicamente alguno de los valores permitidos respecto al d�a de la semana.
        while ( dia < 1 || dia > 5 )
        {
            // Se muestra un men� con los posibles d�as que el usuario puede digitar, en caso de que previamente se digitara un n�mero incorrecto.
            printf("Por favor digite un valor de d%ca valido\n",161);
            printf("_____________________________\n");
            printf("|   N%cmero   |     d%ca      |\n",163,161);
            printf("|____________|______________|\n");
            printf("|     1      |    Lunes     |\n");
            printf("|------------|--------------|\n");
            printf("|     2      |    Martes    |\n");
            printf("|------------|--------------|\n");
            printf("|     3      |    Mi%crcoles |\n",130);
            printf("|------------|--------------|\n");
            printf("|     4      |    Jueves    |\n");
            printf("|------------|--------------|\n");
            printf("|     5      |    Viernes   |\n");
            printf("|____________|______________|\n");
            // Se lee nuevamente la variable de d�a con el fin de saber si el usuario escribio un n�mero valido.
            scanf("%d", &dia);
        }
        // Se muestra el men� principal al usuario, donde puede interactual para ingresar a alguno de los menus o por defecto, salir del programa.
        printf("Ingrese el n%cmero de la interfaz a la que desea ingresar:\n\n",163);
        printf("__________________________________________\n");
        printf("| N%cMERO |           INTERFAZ            |\n",163);
        printf("|________|_______________________________|\n");
        printf("|   1    |           Administrador       |\n");
        printf("|--------|-------------------------------|\n");
        printf("|   2    |           Vendedor            |\n");
        printf("|--------|-------------------------------|\n");
        printf("|   3    |           Cliente             |\n");
        printf("|--------|-------------------------------|\n");
        printf("|   4    |           Salir               |\n");
        printf("|________|_______________________________|\n");
        // Se almacena el valor del men� al que se desea acceder.
        scanf("%d", &menu);
        // Funci�n que permite la modificaci�n de los productos. Se implementa en el men� de administrador.
        void modificacionProductos()
        {
            // Men� para preguntar al usuario si desea realizar alg�n tipo de modificaci�n, o si desea salir del men� de administrador.
            printf("Modificar inventario  ----> 1\nSalir                 ----> 0\n");
            // Se almacena el valor para saber si se desea realizar una modificaci�n o salir.
            scanf("%d", &modiInventario);
            // Condicional para evitar errores por digital n�meros diferentes a 1 o 2 al momento de preguntar si se desea realizar una modificaci�n o salir.
            while (modiInventario > 2 || modiInventario < 1)
            {
                // Mensaje de error.
                printf("digite un comando valido\n");
                printf("Modificar inventario  ----> 1\nSalir                 ----> 0\n");
                // Lee el nuevo valor de modificaci�n de inventario.
                scanf("%d", &modiInventario);
            }
            // Condicional para realizar un proceso de repetici�n en caso de que el administrador desee realizar m�s modificaciones a otros productos.
            do
            {
                // Condicional donde se ratifica el deseo del administrador para realizar alguna modificaci�n.
                if(modiInventario == 1)
                {
                    // Se muestran las diferentes categor�as que maneja la tienda.
                    printf("Ingrese el n%cmero de la categor%ca que desea cambiar:\n",163,161);
                    printf("L%ccteos ----> 1\n",160);
                    printf("Frutas  ----> 2\n");
                    printf("Carnes  ----> 3\n");
                    // Se lee la categor�a seleccionada.
                    scanf("%d", &categoriaCambiar);
                    // Switch para realizar las modificaciones respecto a la categor�a seleccionada.
                    switch (categoriaCambiar)
                    {
                        // Caso de l�cteos.
                        case(1):
                        {
                            // Se muestran los productos de la categor�a de l�cteos.
                            printf("Ingrese el n%cmero del producto que desea modificar: \nLeche  ----> 1\nAvena  ----> 2\nQueso  ----> 3\n",163);
                            // Se lee el producto a modificar.
                            scanf("%d", &modiProducto);
                            // Se pregunta el n�mero de unidades a cambiar. De ser positivo se agregan. Por el contrario, se quitan.
                            printf("Unidades que desea agregar o quitar\n");
                            // Se lee las unidades que se agregan o quitan.
                            scanf("%d", &modiUnidades);
                            // Condicional para realizar las modificaciones respectivas al producto.
                            if(modiUnidades < 0)
                            {
                                // Condicional para evitar que se puedan quitar m�s unidades de las que se encuentran en el inventario.
                                while(modiUnidades < (arreglo[0][modiProducto-1])*(-1))
                                {
                                    // Mensaje de error.
                                    printf("No se dispone de dicha cantidad. Debe ingresar un valor mayor o igual a: -%d\n",arreglo[0][modiProducto-1]);
                                    // Nueva lectura de la cantidad a modificar.
                                    scanf("%d", &modiUnidades);
                                }
                            }
                            // Operaci�n para realizar la suma o resta de los productos ingresados por el administrador al producto respectivo.
                            arreglo[0][modiProducto-1]+= modiUnidades;
                            // Mensaje de confirmaci�n.
                            printf("Modificaci%cn realizada con exito\n",162);
                            // Finalizaci�n del caso 1
                            break;
                        }
                            // Caso de Frutas.
                        case(2):
                        {
                            // Se muestran los productos de la categor�a de Frutas.
                            printf("Ingrese el n%cmero del producto que desea modificar: \nBanano     ----> 1\nMandarina  ----> 2\nPera       ----> 3\n",163);
                            // Se lee el producto a modificar.
                            scanf("%d", &modiProducto);
                            // Se pregunta el n�mero de unidades a cambiar. De ser positivo se agregan. Por el contrario, se quitan.
                            printf("Unidades que desea agregar o quitar\n");
                            // Se lee las unidades que se agregan o quitan.
                            scanf("%d", &modiUnidades);
                            // Condicional para realizar las modificaciones respectivas al producto.
                            if(modiUnidades < 0)
                            {
                                // Condicional para evitar que se puedan quitar m�s unidades de las que se encuentran en el inventario.
                                while(modiUnidades < (arreglo[1][modiProducto-1])*(-1))
                                {
                                    // Mensaje de error.
                                    printf("No se dispone de dicha cantidad. Debe ingresar un valor mayor o igual a: -%d\n",arreglo[1][modiProducto-1]);
                                    // Nueva lectura de la cantidad a modificar.
                                    scanf("%d", &modiUnidades);
                                }
                            }
                            // Operaci�n para realizar la suma o resta de los productos ingresados por el administrador al producto respectivo.
                            arreglo[1][modiProducto-1] += modiUnidades;
                            // Mensaje de confirmaci�n.
                            printf("Modificaci%cn realizada con exito\n",162);
                            // Finalizaci�n del caso 2.
                            break;
                        }
                            // Caso de Frutas.
                        case(3):
                        {
                            // Se muestran los productos de la categor�a de Carnes.
                            printf("Ingrese el n%cmero del producto que desea modificar: \nCerdo   ----> 1\nRes     ----> 2\nCordero ----> 3\n",163);
                            // Se lee el producto a modificar.
                            scanf("%d", &modiProducto);
                            // Se pregunta el n�mero de unidades a cambiar. De ser positivo se agregan. Por el contrario, se quitan.
                            printf("Unidades que desea agregar o quitar\n");
                            // Se lee las unidades que se agregan o quitan.
                            scanf("%d", &modiUnidades);
                            // Condicional para realizar las modificaciones respectivas al producto.
                            if(modiUnidades < 0)
                            {
                                // Condicional para evitar que se puedan quitar m�s unidades de las que se encuentran en el inventario.
                                while(modiUnidades < (arreglo[2][modiProducto-1])*(-1))
                                {
                                    // Mensaje de error.
                                    printf("No se dispone de dicha cantidad. Debe ingresar un valor mayor o igual a: -%d\n",arreglo[2][modiProducto-1]);
                                    // Nueva lectura de la cantidad a modificar.
                                    scanf("%d", &modiUnidades);
                                }
                            }
                            // Operaci�n para realizar la suma o resta de los productos ingresados por el administrador al producto respectivo.
                            arreglo[2][modiProducto-1] += modiUnidades;
                            // Mensaje de confirmaci�n.
                            printf("Modificaci%cn realizada con exito\n",162);
                            // Finalizaci�n del caso 3.
                            break;
                        }
                    }
                    // Mensaje para preguntarle al usuario si desea realizar alunga modificaci�n extra.
                    printf("desea realizar otra modificaci%cn?\n",162);
                    printf("Si ----> 1\n");
                    printf("No ----> 2\n");
                    // Lectura de la posible modificaci�n extra.
                    scanf("%d", &masModificaciones);
                    // Condicional para evitar errores por digital n�meros diferentes a 1 o 2 al momento de preguntar si se desea realizar una modificaci�n extra.
                    while (masModificaciones > 2 || masModificaciones < 1)
                    {
                        // Mensaje de error.
                        printf("digite un comando valido\n");
                        printf("Si ----> 1\n");
                        printf("No ----> 2\n");
                        // Lee el nuevo valor de modificacion de inventario.
                        scanf("%d", &masModificaciones);
                    }
                }
            }
                // Condici�n para repetir el proceso de modificaci�n.
            while(masModificaciones == 1);
        }
        // Funci�n para ver de manera organizada la cantidad de productos en tienda. Se aplica en los men�s de administrador y vendedor.
        void menuProductos()
        {
            // Inicializaci�n de variable para moverse a trav�s de los productos en la categor�a L�cteos.
            int lacteo  = 0;
            // Inicializaci�n de variable para moverse a trav�s de los productos en la categor�a Frutos.
            int fruto   = 0;
            // Inicializaci�n de variable para moverse a trav�s de los productos en la categor�a Carnes.
            int carne   = 0;
            // For para la lectura de las 3 categor�as de la matriz.
            for(x=0;x<3;x++)
            {
                // Condicional para la lectura de la categor�a de L�cteos.
                if(x==0)
                {
                    // Impresi�n de a interfaz en L�cteos.
                    printf("_____________________________\n");
                    printf("|          L%cCTEOS          |\n",160);
                    printf("|---------------------------|\n");
                    printf("|  Producto  |   Cantidad   |\n");
                    printf("|---------------------------|\n");
                    // For para la lectura de los 3 Productos en L�cteos.
                    for(y=0;y<3;y++)
                    {
                        // Aumento de la variable l�cteo, con el fin de imprimir la totalidad de productos al usuario.
                        lacteo+=1;
                        // Condicional para la lectura del primer producto.
                        if(lacteo == 1)
                        {
                            // Impresi�n de la interfaz del primer producto en L�cteos.
                            printf("|   Leche    |      ");
                            printf("%d",arreglo[0][y]);
                            printf("       |\n");
                        }
                            // Condicional para la lectura del segundo producto.
                        else if(lacteo == 2)
                        {
                            // Impresi�n de la interfaz del segundo producto en L�cteos.
                            printf("|   Avena    |      ");
                            printf("%d",arreglo[0][y]);
                            printf("       |\n");
                        }
                            // Lectura del tercer producto.
                        else
                        {
                            // Impresi�n de la interfaz del tercer producto en L�cteos.
                            printf("|   Queso    |      ");
                            printf("%d",arreglo[0][y]);
                            printf("      |\n");
                            printf("|___________________________|\n");
                        }
                    }
                }
                    // Condicional para la lectura de la categor�a de Frutas.
                else if(x==1)
                {
                    // Impresi�n de a interfaz en Frutas.
                    printf("_____________________________\n");
                    printf("|           FRUTAS          |\n");
                    printf("|---------------------------|\n");
                    printf("|  Producto  |   Cantidad   |\n");
                    printf("|---------------------------|\n");
                    // For para la lectura de los 3 Productos en Frutas.
                    for(y=0;y<3;y++)
                    {
                        // Aumento de la variable fruto, con el fin de imprimir la totalidad de productos al usuario.
                        fruto+=1;
                        // Condicional para la lectura del primer producto.
                        if(fruto == 1)
                        {
                            // Impresi�n de la interfaz del primer producto en Frutas.
                            printf("| Banano     |      ");
                            printf("%d",arreglo[1][y]);
                            printf("       |\n");
                        }
                            // Condicional para la lectura del Segundo producto.
                        else if(fruto == 2)
                        {
                            // Impresi�n de la interfaz del Segundo producto en Frutas.
                            printf("| Mandarina  |      ");
                            printf("%d",arreglo[1][y]);
                            printf("       |\n");
                        }
                            // Condicional para la lectura del Tercer producto.
                        else
                        {
                            // Impresi�n de la interfaz del Tercer producto en Frutas.
                            printf("| Pera       |      ");
                            printf("%d",arreglo[1][y]);
                            printf("       |\n");
                            printf("|___________________________|\n");
                        }
                    }
                }
                    // Condicional para la lectura de la categor�a de Carnes.
                else
                {
                    // Impresi�n de a interfaz en Carnes.
                    printf("_____________________________\n");
                    printf("|           CARNES          |\n");
                    printf("|---------------------------|\n");
                    printf("|  Producto  |   Cantidad   |\n");
                    printf("|---------------------------|\n");
                    // For para la lectura de los 3 Productos en Carnes.
                    for(y=0;y<3;y++)
                    {
                        // Aumento de la variable carne, con el fin de imprimir la totalidad de productos al usuario.
                        carne+=1;
                        // Condicional para la lectura del primer producto.
                        if(carne == 1)
                        {
                            // Impresi�n de la interfaz del primer producto en Carnes.
                            printf("|  Cerdo     |      ");
                            printf("%d",arreglo[2][y]);
                            printf("       |\n");
                        }
                            // Condicional para la lectura del Segundo producto.
                        else if(carne == 2)
                        {
                            // Impresi�n de la interfaz del Segundo en Carnes.
                            printf("|  Res       |      ");
                            printf("%d",arreglo[2][y]);
                            printf("       |\n");
                        }
                            // Condicional para la lectura del Tercer producto.
                        else
                        {
                            // Impresi�n de la interfaz del Tercer en Carnes.
                            printf("|  Cordero   |      ");
                            printf("%d",arreglo[2][y]);
                            printf("       |\n");
                            printf("|___________________________|\n");
                        }
                    }
                }
            }
        }
        void menuCliente()
        {
            // Se inicializa la variable que almacena la edad de e usuario que desea ingresar a la tienda.
            int edad            = 0;
            // Se inicializa la variable que almacena el ultimo digito de la cedula del usuario que desea ingresar.
            int cedula          = 0;
            // Se inicializa la variable que permite o deniega el ingreso de un usuario.
            int seguir          = 0;
            // Se inicializa la variable suma la cantidad de productos comprados.
            int totalProductos  = 0;
            // Se inicializa la variable que guarda si el usuario desea realizar otra compra.
            int seguirComprando = 1;
            // Se inicializa la variable que suma el costo total de productos comprados.
            float sumaCosto     = 0.0;
            // Se inicializa la variable que guarda la categor�a a la que el usuario desea ingresar.
            int categoria       = 0;
            // Se inicializa la variable que guarda el producto con el que el usuario desea interactuar.
            int producto        = -1;
            // Se inicializa la variable que guarda el producto con el que el usuario desea interactuar.
            int unidades        =0;
            do // condicional encargado de no permitir que el programa contin�e, en caso de que el ultimo digito de la c�dula ingresado no concuerde con el los d�gitos permitidos para el d�a seleccionado.
            {
                // Se inicializa la variable que guarda el producto con el que el usuario desea interactuar.
                printf("Bienvenido a la tiendita, digite su edad:\n");
                // Se lee la edad ingresada por el usuario.
                scanf("%d", &edad);
                // Condicional que no permite al programa avanzar a menos que el usuario que desea ingresar sea mayor de edad.
                while (edad < 18 )
                {
                    // Mensaje que indica que no cumple los requisitos de edad para ingresar.
                    printf("No puede ingresar a la tienda.\n");
                    // Mensaje de bienvenida para un nuevo cliente, en caso que el anterior no cumpliera los requisitos de edad.
                    printf("\nBienvenido a la tiendita. Digite su edad:\n");
                    //Lee la edad ingresada por el nuevo cliente.
                    scanf("%d", &edad);
                }
                // Mensaje para el usuario.
                printf("Por favor digite su ultimo n%cmero de cedula:\n",163);
                // Espacio para que el usuario ingrese su ultimo n�mero de cedula.
                scanf("%d", &cedula);
                // Condicional que define los numeros de cedula permitidos para el dia 1.
                if ((cedula == 1 || cedula == 2) && dia == 1)
                {
                    //Mensaje al cliente.
                    printf("Bienvenido\n");
                    // Variable que cambia a 1, indicando que el cliente cumple los requisitos del pico y c�dula.
                    seguir = 1;
                }
                    // Condicional que define los numeros de cedula permitidos para el dia 2.
                else if ((cedula == 3 || cedula == 4) && dia == 2)
                {
                    //Mensaje al cliente.
                    printf("Bienvenido\n");
                    // Variable que cambia a 1, indicando que el cliente cumple los requisitos del pico y c�dula.
                    seguir = 1;
                }
                    // Condicional que define los numeros de cedula permitidos para el dia 3.
                else if ((cedula == 5 || cedula == 6) && dia == 3)
                {
                    //Mensaje al cliente.
                    printf("Bienvenido\n");
                    // Variable que cambia a 1, indicando que el cliente cumple los requisitos del pico y c�dula.
                    seguir = 1;
                }
                    // Condicional que define los numeros de cedula permitidos para el dia 4.
                else if ((cedula == 7 || cedula == 8) && dia == 4)
                {
                    //Mensaje al cliente.
                    printf("Bienvenido\n");
                    // Variable que cambia a 1, indicando que el cliente cumple los requisitos del pico y c�dula.
                    seguir = 1;
                }
                    // Condicional que define los numeros de cedula permitidos para el dia 5.
                else if ((cedula == 9 || cedula == 0) && dia == 5)
                {
                    //Mensaje al cliente.
                    printf("Bienvenido\n");
                    // Variable que cambia a 1, indicando que el cliente cumple los requisitos del pico y c�dula.
                    seguir = 1;
                }
                    // Condicional que no permite el ingreso a la tienda, por no cumplir el pico y c�dula.
                else
                {
                    //Mensaje al cliente.
                    printf("No puede ingresar a la tiendita, vuelva pronto!\n\n");
                    // Variable que cambia a 0, indicando que el cliente no cumple con los requisitos.
                    seguir = 0;
                }
            }
                // Evalua si la variable seguir fue modificada. En caso de ser 1, el usuario cumple el "pico y cedula".
            while(seguir == 0);
            // Condicional encargado de repetir el men� de compras al usuario.
            do
            {
                // Interfaz de las categor�as de productos en tienda.
                printf("Seleccione la categor%ca deseada:\n",161);
                printf(" _____________    _____________    _____________\n");
                printf("|   L%cCTEOS   |  |   FRUTAS    |  |   CARNES    |\n",160);
                printf("|      1      |  |      2      |  |      3      |\n");
                printf("|_____________|  |_____________|  |_____________|\n");
                // Lee la categor�a que el usuario desea.
                scanf("%d", &categoria);
                //  Switch con los casos de cada una de las 3 categor�as existentes en la tienda.
                switch (categoria)
                {
                    // Caso de L�cteos.
                    case (1):
                    {
                        //  Variable que toma la posici�n del producto deseado.
                        int productoLacteo =0;
                        // For que recorre la totalidad de categor�as en la tienda.
                        for(x=0;x<3;x++)
                        {
                            // Condicional para la categor�a de l�cteos aparezca.
                            if(x==0)
                            {
                                // Interfaz de l�cteos.
                                printf("|------------------------------------------------|\n");
                                printf("|                      L%cCTEOS                   |\n",160);
                                printf("|------------------------------------------------|\n");
                                printf("| ID |   Producto   |  Precio   |    Cantidad    |\n");
                                printf("|------------------------------------------------|\n");
                                // For que recorre los productos l�cteos.
                                for(y=0;y<3;y++)
                                {
                                    // Variable que aumenta con el for.
                                    productoLacteo+=1;
                                    // Condicional para seleccionar el men� del primer producto de la categor�a de l�cteos.
                                    if(productoLacteo == 1)
                                    {
                                        // Interfaz del primer producto de l�cteos.
                                        printf("|  1 |  Leche 1(L)  |   $2.50   |     ");
                                        printf("%d\n",arreglo[0][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                        // Condicional para seleccionar el men� del segundo producto de la categor�a de l�cteos.
                                    else if(productoLacteo == 2)
                                    {
                                        // Interfaz del segundo producto de l�cteos.
                                        printf("|  2 |  Avena 1(L)  |   $1.25   |     ");
                                        printf("%d\n",arreglo[0][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                        // Condicional para seleccionar el men� del tercer producto de la categor�a de l�cteos.
                                    else
                                    {
                                        // Interfaz del tercer producto de l�cteos.
                                        printf("|  3 |  Queso 1(kg) |   $10.50  |     ");
                                        printf("%d\n",arreglo[0][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                }
                            }
                        }
                        // Mensaje para ingresar el producto que se desea comprar de la categor�a.
                        printf("Ingrese el ID del producto que desea comprar:\n");
                        // Lee el producto seleccionado por el usuario.
                        scanf("%d", &producto);
                        // Condicional que limita el n�mero de ID que el usuario puede escribir. En caso de escribir un Id invalido, se ingresa al While.
                        while(producto < 1 || producto > 3)
                        {
                            // Mensaje de error.
                            printf("Ingrese un ID valido\n");
                            // Lee nuevamente el ID del producto que se desea.
                            scanf("%d", &producto);
                        }
                        // Mensaje para ingresar el n�mero de unidades a comprar del producto.
                        printf("Ingrese el n%cmero de unidades que desea comprar\n",163);
                        // Lee en n�mero de unidades.
                        scanf("%d", &unidades);
                        // Condicional para evitar el caso de que el usuario escriba n�meros negativos o mayores a los que la tienda presenta en stock.
                        while (unidades>arreglo[0][producto-1]||unidades < 0)
                        {
                            // Mensaje de error.
                            printf("No disponemos de esa cantidad, intente ingresar una cantidad positiva, menor o igual a: %d\n",arreglo[0][producto-1]);
                            // Lee nuevamente las unidades a comprar.
                            scanf("%d", &unidades);
                        }
                        // Cambia el n�mero de unidades respecto a la cantidad de unidades compradas por el cliente.
                        arreglo[0][producto-1]-=unidades;
                        // Suma el n�mero de productos comprados.
                        totalProductos += unidades;
                        // Condicional en caso de que sea el primero producto de la categor�a.
                        if(producto == 1)
                        {
                            // operaci�n del producto 1.
                            sumaCosto += (2.50*unidades);
                        }
                            // Condicional en caso de que sea el segundo producto de la categor�a.
                        else if(producto == 2)
                        {
                            // operaci�n del producto 2.
                            sumaCosto += (1.25*unidades);
                        }
                            // Condicional en caso de que sea el tercer producto de la categor�a.
                        else if(productoLacteo == 3)
                        {
                            // operaci�n del producto 3.
                            sumaCosto += (10.50*unidades);
                        }
                        // finaliza el caso de l�cteos.
                        break;
                    }
                        // Caso de Frutas.
                    case (2):
                    {
                        //  Variable que toma la posici�n del producto deseado.
                        int productoFruta =0;
                        // For que recorre la totalidad de categor�as en la tienda.
                        for(x=0;x<3;x++)
                        {
                            // Condicional para la categor�a de frutas aparezca.
                            if(x==1)
                            {
                                // Interfaz de frutas.
                                printf("|------------------------------------------------|\n");
                                printf("|                      FRUTAS                    |\n");
                                printf("|------------------------------------------------|\n");
                                printf("| ID |   Producto    |  Precio   |    Cantidad   |\n");
                                printf("|------------------------------------------------|\n");
                                // For que recorre los productos frutas.
                                for(y=0;y<3;y++)
                                {
                                    // Variable que aumenta con el for.
                                    productoFruta+=1;
                                    // Condicional para seleccionar el men� del primer producto de la categor�a de frutas.
                                    if(productoFruta == 1)
                                    {
                                        // Interfaz del primer producto de frutas.
                                        printf("|  1 |Banano    1(U) |   $1.10   |      ");
                                        printf("%d\n",arreglo[1][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                        // Condicional para seleccionar el men� del segundo producto de la categor�a de frutas.
                                    else if(productoFruta == 2)
                                    {
                                        // Interfaz del segundo producto de frutas.
                                        printf("|  2 |Mandarina 1(U) |   $3.00   |      ");
                                        printf("%d\n",arreglo[1][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                        // Condicional para seleccionar el men� del tercer producto de la categor�a de frutas.
                                    else
                                    {
                                        // Interfaz del tercer producto de frutas.
                                        printf("|  3 |Pera      1(U) |   $2.30   |      ");
                                        printf("%d\n",arreglo[1][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                }
                            }
                        }
                        // Mensaje para ingresar el producto que se desea comprar de la categor�a.
                        printf("Ingrese el ID del producto que desea comprar:\n");
                        // Lee el producto seleccionado por el usuario.
                        scanf("%d", &producto);
                        // Condicional que limita el n�mero de ID que el usuario puede escribir. En caso de escribir un Id invalido, se ingresa al While.
                        while(producto < 1 || producto > 3)
                        {
                            // Mensaje de error.
                            printf("Ingrese un ID valido\n");
                            // Lee nuevamente las unidades a comprar.
                            scanf("%d", &producto);
                        }
                        // Mensaje para ingresar el n�mero de unidades a comprar del producto.
                        printf("Ingrese el n%cmero de unidades que desea comprar\n",163);
                        // Lee el n�mero de unidades.
                        scanf("%d", &unidades);
                        // Condicional para evitar el caso de que el usuario escriba n�meros negativos o mayores a los que la tienda presenta en stock.
                        while (unidades>arreglo[1][producto-1]||unidades < 0)
                        {
                            // Mensaje de error.
                            printf("no disponemos de esa cantidad, intente ingresar una cantidad positiva, menor o igual a: %d\n",arreglo[1][producto-1]);
                            // Lee nuevamente las unidades a comprar.
                            scanf("%d", &unidades);
                        }
                        // Cambia el n�mero de unidades respecto a la cantidad de unidades compradas por el cliente.
                        arreglo[1][producto-1]-=unidades;
                        // Suma el n�mero de productos comprados.
                        totalProductos += unidades;
                        // Condicional en caso de que sea el primero producto de la categor�a.
                        if(producto == 1)
                        {
                            // operaci�n del producto 1.
                            sumaCosto += (1.10*unidades);
                        }
                            // Condicional en caso de que sea el segundo producto de la categor�a.
                        else if(producto == 2)
                        {
                            // operaci�n del producto 2.
                            sumaCosto += (3.00*unidades);
                        }
                            // Condicional en caso de que sea el tercer producto de la categor�a.
                        else if(producto == 3)
                        {
                            // operaci�n del producto 3.
                            sumaCosto += (2.30*unidades);
                        }
                        // finaliza el caso de frutas.
                        break;
                    }
                        // Caso de Carnes.
                    case (3):
                    {
                        //  Variable que toma la posici�n del producto deseado.
                        int productoCarne = 0;
                        // For que recorre la totalidad de categor�as en la tienda.
                        for(x=0;x<3;x++)
                        {
                            // Condicional para la categor�a de carnes aparezca.
                            if(x==1)
                            {
                                // Interfaz de carnes.
                                printf("|------------------------------------------------|\n");
                                printf("|                      CARNES                    |\n");
                                printf("|------------------------------------------------|\n");
                                printf("| ID |    Producto    |  Precio   |   Cantidad   |\n");
                                printf("|------------------------------------------------|\n");
                                // For que recorre los productos carnes.
                                for(y=0;y<3;y++)
                                {
                                    // Variable que aumenta con el for.
                                    productoCarne+=1;
                                    // Condicional para seleccionar el men� del primer producto de la categor�a de carnes.
                                    if(productoCarne == 1)
                                    {
                                        // Interfaz del primer producto de carnes.
                                        printf("|  1 |  Cerdo   1(kg) |   $8.10   |     ");
                                        printf("%d\n",arreglo[2][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                        // Condicional para seleccionar el men� del segundo producto de la categor�a de carnes.
                                    else if(productoCarne == 2)
                                    {
                                        // Interfaz del segundo producto de carnes.
                                        printf("|  2 |  Res     1(kg) |   $9.00   |     ");
                                        printf("%d\n",arreglo[2][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                        // Condicional para seleccionar el men� del tercer producto de la categor�a de carnes.
                                    else
                                    {
                                        // Interfaz del segundo producto de carnes.
                                        printf("|  3 |  Cordero 1(kg) |   $12.30  |     ");
                                        printf("%d\n",arreglo[2][y]);
                                        printf("|------------------------------------------------|\n");
                                    }
                                }
                            }
                        }
                        // Mensaje para ingresar el n�mero de unidades a comprar del producto.
                        printf("Ingrese el ID del producto que desea comprar:\n");
                        // Lee el n�mero de unidades.
                        scanf("%d", &producto);
                        // Condicional para evitar el caso de que el usuario escriba n�meros negativos o mayores a los que la tienda presenta en stock.
                        while(producto < 1 || producto > 3)
                        {
                            // Mensaje de error.
                            printf("Ingrese un ID valido\n");
                            // Lee nuevamente las unidades a comprar.
                            scanf("%d", &producto);
                        }
                        // Mensaje para ingresar el n�mero de unidades a comprar del producto.
                        printf("Ingrese el n%cmero de unidades que desea comprar\n",163);
                        // Lee el n�mero de unidades.
                        scanf("%d", &unidades);
                        // Condicional para evitar el caso de que el usuario escriba n�meros negativos o mayores a los que la tienda presenta en stock.
                        while (unidades>arreglo[2][producto-1]||unidades < 0)
                        {
                            // Mensaje de error.
                            printf("no disponemos de esa cantidad, intente ingresar una cantidad positiva, menor o igual a: %d\n",arreglo[2][producto-1]);
                            // Lee nuevamente las unidades a comprar.
                            scanf("%d", &unidades);
                        }
                        // Cambia el n�mero de unidades respecto a la cantidad de unidades compradas por el cliente.
                        arreglo[2][producto-1]-=unidades;
                        // Suma el n�mero de productos comprados.
                        totalProductos += unidades;
                        // Condicional en caso de que sea el primero producto de la categor�a.
                        if(producto == 1)
                        {
                            // operaci�n del producto 1.
                            sumaCosto += (8.10*unidades);
                        }
                            // Condicional en caso de que sea el segundo producto de la categor�a.
                        else if(producto == 2)
                        {
                            // operaci�n del producto 2.
                            sumaCosto += (9.00*unidades);
                        }
                            // Condicional en caso de que sea el tercer producto de la categor�a.
                        else if(producto == 3)
                        {
                            // operaci�n del producto 3.
                            sumaCosto += (12.30*unidades);
                        }
                        // finaliza el caso de frutas.
                        break;
                    }
                }
                // Le indica al usuario el n�mero de productos comprados, con la sumatoria de costos.
                printf("\nN%cmero de productos: %d art%cculos\nCosto de los productos: $%.3f \n",163,totalProductos,161,sumaCosto);
                // Pregunta si se desea realizar otra compra.
                printf("\nDesea realizar otra compra?\n Si -----> 1\n No -----> 0\n");
                // Lee variable que indica si se desea comprar m�s.
                scanf("%d", &seguirComprando);
            }
                // Condicional que define si se continua el loop de compra.
            while(seguirComprando == 1);
            // Mensaje de compra total, con el n�mero de productos.
            printf("Has comprado un total de %d art%cculos, con un costo total de: $%.3f",totalProductos,161,sumaCosto);
            printf("\nGracias por comprar, vuelva pronto!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        // Condicional para evitar que el usuario ingrese un n�mero diferente a los permitidos.
        while(menu < 1 || menu > 4)
        {
            // Funci�n principal del programa, en donde se llaman las funciones explicadas previamente, para aplicarlas en cada uno de los 4 men�s de usuarios.
            printf("Valor invalido, vuelva a digitar la opcion deseada\n");
            // lee el men� al que se desea ingresar luego de haberse equivocado.
            scanf("%d", &menu);
        }
        switch (menu)
        {
            // Caso del administrador.
            case (1):
            {
                // Mensaje para ingresar la contrase�a de adminstrdor.
                printf("Ingrese la contrase%ca de administrador:\n",164);
                // Lee la contrase�a.
                scanf("%d", &contrasenia);
                // Condicional que define la contrase�a.
                if(contrasenia == 123)
                {
                    // Mensaje de bienvenida
                    printf("Bienvenido, Adminstador\n");
                    // Llama funci�n del men� de productos.
                    menuProductos();
                    // Llama la funcion para modificar el inventario.
                    modificacionProductos();
                }
                    // Condicional cuando el usuario se equivoca de contrase�a.
                else
                {
                    printf("Contrase%ca incorrecta\n",164);
                }
                // Finaliza el men� de administrador.
                break;
            }
                // Caso del vendedor.
            case (2):
            {
                // Inicializa la variable para salir del menu de vendedor.
                int salir = -1;
                // Condicional para salir del menu de vendedor.
                do
                {
                    //mensaje de saludo.
                    printf("Bienvenido, Vendedor\n");
                    // llama funcion que muestra los productos de la tienda en sus respectivas categor�as.
                    menuProductos();
                    // Mensaje de salida.
                    printf("Para salir, digite cualquier n%cmero\n",163);
                    // Lectura de variable para salir.
                    scanf("%d", &salir);
                }
                while (salir == -1);
                // Termina el menu de vendedor.
                break;
            }
                // Menu de cliente.
            case (3):
            {
                // Llama funcion para el menu de cliente
                menuCliente();
                // Finaliza menu de cliente.
                break;
            }
                // Caso para salir del programa.
            case (4):
            {
                // Funci�n para salir del programa.
                return (0);
            }
        }
    }
}
