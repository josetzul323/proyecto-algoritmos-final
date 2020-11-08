
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
	cout << "ingrese el codigo c++ "<<endl;
		char* original = new char[50];
		string codigo ;
	getline(cin,codigo);
	
 





 
 
  string::size_type pos = 0;
  
  string reserved[13] = {"{", "}",  "int", "if", "string","double","char","get line", "return", "endl", "exit", "cin", "cout"};
  string toStr[13] = {"inicio", "fin", "entero", "si", "cadena","doble","caracter","obtener linea", "retorno", "finalizar", "salir", "flujo de entrada", "flujo de salida"};
  
  for (int i = 0; i < 13; ++i) 
  {
    while ((pos = codigo.find(reserved[i], pos)) < string::npos)
    {
      codigo.replace(pos, reserved[i].length(), toStr[i]);
      pos+=toStr[i].size();
    }
    pos = 0;
  }
  
 
  cout << "traducido: "<<codigo<<endl;
  return 0;
}
