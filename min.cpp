#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include <limits> // 


const int *min(const int *first,const int *last);

int main(){
	int A[] = {1, 2, -3, -4, 5, -6};

	//Deveria Imprimir -6
	auto result = min( std::begin(A),std::end(A));
	std::cout << *result << std::endl;


	//Deveria Imprimir -4
	result = min( std::begin(A)+1,std::begin(A)+5);
	std::cout << *result << std::endl;
	return 0;
}

const int  *min( const int *first,const int *last){
	const int *min = first;
	for(/*empty*/; first < last; first++){
		if( *min > *(first)){
			min = (first);
		}
	}
	return min; 
}