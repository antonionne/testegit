#include <iostream> // std::cout , std::endl
#include <iterator> // std::begin ,std::end

void negate (int * first, int * last);

int main(){
	int Vet[] = {1, 2, -3, -4, 5 , -6};
	//std::cout << Vet[2] << "\n";
	//Nega todo o vetor.
	//negate(std::begin(Vet), std::end(Vet));
	//std::cout << Vet[2] << "\n" ;
	//Nega do 3ro até oúltimo elemento do vetor
	//negate(std::begin(Vet)+2, std::end(Vet));

	//Nega apenas o 4to elemento
	negate(std::begin(Vet)+3,std::begin(Vet)+4);
	std::cout << Vet[0] << "\n";
	std::cout << Vet[1] << "\n";
	std::cout << Vet[2] << "\n";
	std::cout << Vet[3] << "\n";
	std::cout << Vet[4] << "\n";
	std::cout << Vet[5] << "\n";

	return 0;
}

void negate(int * first,int * last){
	for(/*empty  */; first < last; first++){
		*first *= -1;
	}
}