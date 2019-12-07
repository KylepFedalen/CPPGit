#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void pop_array(int length, int a[]){	
	for(int i =0; i < length;i++){
		a[i] = rand() % 100 +1;
	}

}

void p_array(int length,int a[]){
	for(int i=0; i < length;i++){
		cout << a[i] << " ,";
	}
	cout<<endl;
}


int main() {
	srand(time(NULL));
	
	int x[10];
	int y[10];
	pop_array(10, x);
	pop_array(10, y);
	
	p_array(10, x);
	p_array(10, y);
	
	
	return 0;
}
