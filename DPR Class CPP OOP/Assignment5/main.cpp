#include <iostream>

using namespace std;

int loopvar = 0;

int main() {
	
	cout << "start program" << endl;
	
	while(loopvar < 10){
		if(loopvar == 5){
			break;
		}
		cout << "looping..." << endl;
		loopvar++;
	}
	cout << "Break! loop broken" << endl;
	
	
	cout << "Continuing... program" << endl;
	
	cout << "end program" << endl;
	
	
	
	
	return 0;
}
