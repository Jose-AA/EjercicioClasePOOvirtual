#include <iostream>
#include "Bidon.h"
using namespace std;


int main() {
	int opsabor,opvaso;
	int ventast[3]{};

	Bidon S[3]{ Bidon(20000, "BANANA"),Bidon(35000, "ANANA"),Bidon(44000, "SANDIA") };
	Vaso vVasos[3] = { Vaso(150), Vaso(200), Vaso(300) };
	mensajes sabor(" INTGRESE EL SABOR / 1 para Banana, 2 para Ananá o 3 para Sandia "), vaso("INTGRESE EL VASO / 1 para 150 ml, 2 para 200 ml o 3 para 300 ml"), sobrante(" EL SOBRANTE EN LITROS FUE : "), ventas(" LAS CANTIDADES VENDIDAS FUEROJN : ");
	
	S[0].cargar();
	S[1].cargar();
	S[2].cargar();
	
	cout << sabor.getmensaje() << endl;
	cin >> opsabor;

	while (opsabor != 0) {
	cout << vaso.getmensaje() << endl;
	cin >> opvaso;
	S[opvaso - 1].servir(vVasos[opvaso - 1]);
	ventast[opsabor-1]++;
	cout<<  sabor.getmensaje()<<endl; 
	cin >> opsabor;
	};

	cout<<sobrante.getmensaje()<<endl<<endl;
	cout << "DE LA BEBIDA : " << S[0].getSabor() << "SOBRARON : " << S[0].getCapacidad() / 1000.0f << " LITROS " << endl;
	cout << "DE LA BEBIDA : " << S[1].getSabor() << "SOBRARON : " << S[1].getCapacidad() / 1000.0f << " LITROS " << endl;
	cout << "DE LA BEBIDA : " << S[2].getSabor() << "SOBRARON : " << S[2].getCapacidad() / 1000.0f << " LITROS " << endl<<endl<<endl;
	
	cout << ventas.getmensaje()<<endl<<endl;
	cout << "DE LA BEBIDA : 1, DE SABOR " << S[0].getSabor() << " SE VENDIERON : " << ventast[0] << " VASOS "<<endl;
	cout << "DE LA BEBIDA : 2, DE SABOR " << S[1].getSabor() << " SE VENDIERON : " << ventast[1] << " VASOS "<< endl;
	cout << "DE LA BEBIDA : 3, DE SABOR " << S[2].getSabor() << " SE VENDIERON : " << ventast[2] << " VASOS "<< endl;

	return 0;
}