#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream fout("output.txt");
	fout<<"Bibhu Kumar Mishra";
	fout.close();
	cout<<"Data written "<<endl;
	return 0;
}
