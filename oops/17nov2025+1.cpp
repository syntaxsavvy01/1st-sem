#include<ostream>
using namespace std;

int main( int argc, char *argv[]){
	cout<<"Total Arguments: "<<argc<<endl;
	cout<<"Program name: "<<argv[0]<<endl;
	
	for(int i=0 ; i<argc ; i++){
		cout<<"Argument "<<i<<": "<<argv[i]<<endl;
	}
	return 0;
}
