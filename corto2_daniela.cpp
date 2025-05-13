#include <iostream>
using namespace std; 


//Caso 1: determinar la talla de ropa segun la edad del usuario 
int main(){

    //Se declaran las variables de tipo int 
    int edad, tallas, genero, precio_prenda, dinero, prenda; 

    //Dato "quemado" con la cantidad de dinero disponible
    dinero = 300; 

    //Se pide al usuario ingresar su edad y muestra la talla correspondiente a su edad  
    cout << "Por favor ingrese su edad" << endl; 
    cin >> edad; 

    if(edad <= 10){
        cout << "Su talla correspondiente es la talla 8" << endl;
    } else if (edad <= 15){
        cout << "Su talla correspondiente es la talla 12" << endl;
    } else if (edad <= 60){
        cout << "Su talla correspondiente es la talla 16" << endl;
    } else{
        cout << "Su talla correspondiente es la talla 18" << endl;
    }; 

    //Usuario debe de elegir el numero correspondiente a su genero
    cout << "Eliga su genero" << endl;
    if(genero){

        cout << "1. Femenino" << endl;
        cout << "2. Maculino" << endl;
        cout << "3. Mostrar todos los productos" << endl;
        cin >> genero; 


        switch(genero)
        {
            case 1: cout << "1. Blusa Moderna (descuento del 20%)" << endl;
                    cout << "El precio es de: $80 " << endl; 
                cout <<"2. Falda Elegante (descuento del 20%)" << endl;
                    cout << "El precio es de: $110 " << endl;
                cout <<"3. Abrigo Premium (descuento del 20%)" << endl;
                    cout << "El precio es de: $250 " << endl; 

                //El usuario debe de seleccionar el numero de prenda que desea comprar, si la prenda sobrpasa los $300 dolares 
                //la compra no se podra realizar, en cambio si es menor a esta cantidad sera realizado exitosamente
                
                cout << "Seleccione el producto que desea comprar" << endl;
                cin >> prenda; 
                if(precio_prenda <= dinero){
                    cout << "No tiene suficiente dinero"; 
                } else{
                    cout << "Compra exitosa, su saldo restante es: ";
                }
            break; 


            case 2: cout << "1. Camisa Casual (descuento del 30%)" << endl;
                        cout << "El precio es de: $90 " << endl;        
                     cout << "2. Pantalón Formal (descuento del 30%)" << endl;
                        cout << "El precio es de: $130" << endl; 
                     cout << "3. Chaqueta Premium(descuento del 30%)" << endl;
                        cout << "El precio es de: $900 " << endl; 

                //El usuario debe de seleccionar el numero de prenda que desea comprar, si la prenda sobrpasa los $300 dolares 
                //la compra no se podra realizar, en cambio si es menor a esta cantidad sera realizado exitosamente

                cout << "Seleccione el producto que desea comprar" << endl;
                cin >> prenda; 
                if(precio_prenda > dinero){
                    cout << "No tiene suficiente dinero"; 
                } else{
                    cout << "Compra exitosa"; 
                }
            break; 

            case 3: cout << "1. Camisa Casual (descuento del 30%)" << endl;
                        cout << "El precio es de: $90 " << endl;   
            cout << "2. Pantalón Formal (descuento del 30%)" << endl;
                        cout << "El precio es de: $130 " << endl;   
            cout << "3. Chaqueta Premium (descuento del 30%)" << endl;
                        cout << "El precio es de: $900 " << endl;   
            cout <<  "4. Blusa Moderna (descuento del 20%)" << endl;
                        cout << "El precio es de: $80 " << endl;   
            cout <<  "5. Falda Elegante (descuento del 20%)" << endl;
                        cout << "El precio es de: $110 " << endl;   
            cout <<  "6. Abrigo Premium (descuento del 20%)" << endl;
                        cout << "El precio es de: $250 " << endl;   

            //El usuario debe de seleccionar el numero de prenda que desea comprar, si la prenda sobrpasa los $300 dolares 
            //la compra no se podra realizar, en cambio si es menor a esta cantidad sera realizado exitosamente
                
                cout << "Seleccione el producto que desea comprar" << endl;
                cin >> prenda; 
                if(precio_prenda > dinero){
                    cout << "No tiene suficiente dinero"; 
                } else{
                    cout << "Compra exitosa"; 
                }
            break; 
        }

    } else {
        cout << "Opción no valida"; 
    }


    
}