#include <iostream>

using namespace std;

main() {
	int var1 = 0;
	int var2 = 0;
	cout << "Finding the smaller of two numbers"<<endl;
	cout << "input first variable(int): "; 
	cin >> var1;
	cout << "input second variable(int): ";
	cin >> var2;
	
	
	
	
	if(var1!=var2){
		if(var1 > var2){
			cout << var2 << " is smaller than " << var1 << endl;
		}
		else if(var2 > var1){
			cout << var1 << " is smaller than " << var2 << endl;
		}
	}
	else{
		cout << var1 << " and " << var2 << " are equal " << endl;
	}
	
	
	
	
}
