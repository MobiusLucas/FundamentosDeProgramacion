// 29_04_22_Zap669_P7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;




int main()
{
    
    string check,confirmador;
    cout << "Piensa en uno de los siguientes Pokemon y lo Adivinare! \n";
    cout << ""
    cout << "Listo? \n";
    cout << "Escribe ´si´ para continuar \n";
    cin >> check;
    if (check == "si") {
        
        cout << "Tu pokemon es tipo electrico o fuego? \n";
        cout << "si/no \n";
        cin >> confirmador;
      
        if (confirmador == "si") {
        confirmador = "no";
        cout << "Tu pokemon es tipo fuego? \n";
        cout << "si/no \n";
        cin >> confirmador;
          
            if (confirmador == "si") {
                confirmador = "no";
                cout << "Tu pokemon puede volar? \n";
                cout << "si/no \n";
                cin >> confirmador;
             
            
            
            
            }
            else {
                cout << "Tu pokemon se parece a un caballo? \n";
                cout << "si/no \n";
                cin >> confirmador;


            }


        }
        else{
            cout << "tu pokemon es tipo agua? \n";
            cout << "si/no \n";
            cin >> confirmador;
            if (confirmador == "si") {
                
                }
            else {

            }



        }
    
    
    }
    else{
         cout << "Vuelve ya que estes listo! \n";
         
    }
}
    





