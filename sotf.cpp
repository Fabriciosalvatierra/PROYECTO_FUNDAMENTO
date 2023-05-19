#include <iostream>
using namespace std;

int main() {
    int categoria;
    int producto;
    int confirmar;
    bool volverAlMenu = false;

    do {
        cout << "        BIENVENIDO A LA TIENDA DE ROPA ROPAGG" << endl;
        cout << endl;
        cout << "    ELIGE LA CATEGORIA QUE TE INTERESA:" << endl;
        cout << "    1: CAMISETAS" << endl;
        cout << "    2: JEAN" << endl;
        cout << "    3: ZAPATOS" << endl;
        cout << "    4: VOLVER AL MENU INICIAL" << endl;
        cin >> categoria;

        while (categoria < 1 || categoria > 4) {
            cout << "Ingrese una opción válida (1-4):" << endl;
            cin >> categoria;
        }

        if (categoria == 4) {
            volverAlMenu = true;
            continue;
        }

        switch (categoria) {
            case 1:
                cout << "Bienvenido a la sección de CAMISETAS" << endl;
                cout << endl;
                cout << "PARA LUCIR UN TORSO LLAMATIVO Y ORIGINAL TENEMOS:" << endl;
                cout << "1. AIR-JORDAN WORDMARK: $100" << endl;
                cout << "2. NIKE DRI-FIT: $250" << endl;
                cout << "3. JORDAN JUMPMAN: $50" << endl;
                break;

            case 2:
                cout << "Bienvenido a la sección de JEAN" << endl;
                cout << endl;
                cout << "PARA QUE MODELES LAS PIERNAS CON UN LOOK NUEVO:" << endl;
                cout << "1. NIKECOURT: $200" << endl;
                cout << "2. JORDAN SPORT DRI-FIT: $250" << endl;
                cout << "3. JORDAN GOLF: $300" << endl;
                break;

            case 3:
                cout << "Bienvenido a la sección de ZAPATOS" << endl;
                cout << endl;
                cout << "PARA DEJAR TU HUELLA POR DONDE PASES:" << endl;
                cout << "1. NIKE AIR MAX ALPHA TRAINER 5: $400" << endl;
                cout << "2. AIR JORDAN 1 LOW: $200" << endl;
                cout << "3. NIKE OFF-WHITE (GOLDEN DUNK): $300" << endl;
                break;
        }

        cout << "Selecciona un producto: ";
        cin >> producto;

        switch (categoria) {
            case 1:
                switch (producto) {
                    case 1:
                        cout << "Seleccionaste el producto AIR-JORDAN WORDMARK" << endl;
                        break;
                    case 2:
                        cout << "Seleccionaste NIKE DRI-FIT" << endl;
                        break;
                    case 3:
                        cout << "Seleccionaste JORDAN JUMPMAN" << endl;
                        break;
                    default:
                        cout << "Producto no válido. Por favor, elija una opción válida." << endl;
                        volverAlMenu = true;
                        break;
                }
                break;

            case 2:
                switch (producto) {
                    case 1:
                        cout << "Seleccionaste NIKECOURT" << endl;
                        break;
                    case 2:
                        cout << "Seleccionaste JORDAN SPORT DRI-FIT" << endl;
                        break;
                    case 3:
                        cout << "Seleccionaste JORDAN GOLF" << endl;
                        break;
                    default:
                        cout << "Producto no válido. Por favor, elija una opción válida." << endl;
                        volverAlMenu = true;
                        break;
                }
                break;

            case 3:
                switch (producto) {
                    case 1:
                        cout << "Seleccionaste NIKE AIR MAX ALPHA TRAINER 5" << endl;
                        break;
                    case 2:
                        cout << "Seleccionaste AIR JORDAN 1 LOW" << endl;
                        break;
                    case 3:
                        cout << "Seleccionaste NIKE OFF-WHITE (GOLDEN DUNK)" << endl;
                        break;
                    default:
                        cout << "Producto no válido. Por favor, elija una opción válida." << endl;
                        volverAlMenu = true;
                        break;
                }
                break;

            default:
                cout << "Categoría no válida. Por favor, elija una opción válida." << endl;
                volverAlMenu = true;
                break;
        }

        if (volverAlMenu) {
            continue;
        }

        cout << "Confirmar selección:" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cout << "3. VOLVER AL MENU INICIAL" << endl;
        cin >> confirmar;

        while (confirmar < 1 || confirmar > 3) {
            cout << "Ingrese una opción válida (1-3):" << endl;
            cin >> confirmar;
        }

        switch (confirmar) {
            case 1: 
                cout << "¡GENIAL! Puedes pasar a la tienda a ver el producto" << endl;
                cout << "Dirección de la tienda: Avenida EL INGENIERO HACKER #168" << endl;
                cout << "Si no puedes pasar por la tienda comunícate al siguiente número y coordina la entrega y compra: +591 67824920" << endl;
                cout << "También puedes escribirnos al correo: ropagg@protonmail.com" << endl;
                break;
            case 2:
                cout << "Oh vaya, esperamos que vuelvas :( " << endl;
                break;
            case 3:
                cout << "Toma todo el tiempo que necesites para elegir lo que más te guste :)" << endl;
                volverAlMenu = true;
                break;
            default:
                break;
        }

    } while (volverAlMenu);

    cout << "___________________________________________________" << endl;
    cout << "|                     :)                           |" << endl;
    cout << "|Gracias por visitar nuestra tienda. ¡Hasta luego! |" << endl;
    cout << "|                       <3                         |" << endl;
    cout << "|__________________________________________________|" << endl;


    return 0;
}





























































































































   
