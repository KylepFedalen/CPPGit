#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function to print out array
void printarray (int a[]){
	for(int i = 0;i<sizeof(a)-1;i++){
		cout << a[i] << ", ";
	} 
}

int main() {
	int arraylen = 10;
	
	int numarray[arraylen];
	
	srand(time(NULL));
	
	//create random array of integers
	for(int i = 0;i<arraylen;i++){
		numarray[i] = rand() % 100 + 1;
	}
	
	printarray(numarray);
	
	return 0;
}
