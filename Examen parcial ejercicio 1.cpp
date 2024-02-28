//1.  Escribe un programa en C++ que declare dos variables enteras, a y b, y calcule la suma, resta,variables. Muestra los resultados por pantalla.

#include <iostream>
using namespace std;

int main(){
	
	int a, b;
	
	cout<<"Ingrese el primer valor: ";
	cin>>a;
	
	cout <<endl;
	
	cout<<"Ingrese el segundo valor: ";
	cin>>b;
	
	cout <<endl;
	
	cout<<"--------- RESULTADOS -----------" <<endl;
	cout<<"La suma de: " << a <<" + " << b <<" es igual a: " << a + b << endl;
	
	cout<<"La resta de: " << a <<" - " << b <<" es igual a: " << a - b << endl;
	
	cout<<"La multiplicacion de: " << a <<" * " << b <<" es igual a: " << a * b << endl;
	
	cout<<"La division de: " << a <<" / " << b <<" es igual a: " << a / b << endl;
	
	return 0;
}
