#include<iostream>
using namespace std;

void myString(char *&data, int N){
	data = new char[N + 1];    
	for(int i = 0; i < N; i++) *(data + i) = 'A'+i;
	data[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
