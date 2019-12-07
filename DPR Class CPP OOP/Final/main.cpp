#include <iostream>
#include <fstream>

using namespace std;

void output(int x){
	
	switch(x){
		case 9:
			cout << "freshmen" << endl;
			break;
		case 10:
			cout << "sophomore" << endl;
			break;
		case 11:
			cout << "junior" << endl;
			break;
		case 12:
			cout << "senior" << endl;
			break;
	}
}

void make_multi_array(){
	
	int multiarray[3][3];
	int i = 0;
	int j = 0;
	
	int rows = sizeof multiarray / sizeof multiarray[0];
	
	int cols = sizeof multiarray[0] / sizeof(int);
	
	
	int totalsize = cols*rows;
	
	for(i=0;i<1;i++)
    {
        for(j=0;j<totalsize;j++)
        {
            multiarray[i][j] = 2;
        }
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << multiarray[i][j] << " ";
        }
        cout << endl;
    }
	
}

class pie{
	private:
	int slices;
	public:
	pie(){//default slices 5
		int slices = 5;
	}
	pie(int x){
		slices = x;
	}
	void eat_slice(){
		slices = slices-1;
	}
	int get_slices(){
		return slices;
	}
};
	
	

int main() {
	
	int selectprog = 0;
	
	cout << "enter the number corosponding to the program you want to run" << endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout << "1. program that takes int input and outputs a string" << endl;
	cout << "2. output a 3x3 multidimensional array of 2's" << endl;
	cout << "3. example of an object" << endl;
	cout << "4. create a txt file" << endl;
	cout << "5. program that takes int input and outputs a string" << endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cin >> selectprog;
	cout<<"-----------------------------------------------------------------"<<endl;
	//1. Write a program in C++ that when you input 9 - outputs "freshmen"
	//10 - outputs "sophomore" , 11 – output "junior", and 12 – output "senior"
	// , please use a switch statement.
	if(selectprog==1){
		int input = 0;
		cout << "outputs string: 9 = freshmen, 10 = sophomore, 11 = junior, and 12 = senior" << endl;
		cin >> input;
		output(input);
	}
	//2. Output a multidimensional array of all twos, make sure you use two 
	//for loops. Here is an example of the output
	//222
	//222
	//222
	if(selectprog==2){
		make_multi_array();
	}
	//3.Write a C++ program that gives an example of an object, it can be 
	//anything you want make sure there is a main portion that tests the object.
	if(selectprog==3){
		int eat = 0;
		pie mypie(7);
		cout << "created object[mypie]" << endl;
		cout << "total slices of object[mypie]: "<< mypie.get_slices() << endl;
		cout << "input slices of object[mypie] to eat: ";
		cin >> eat;
		for(int i = 0;i < eat;i++){
			mypie.eat_slice();
		}
		cout << "total slices of object[mypie] left: " << mypie.get_slices() << endl;
	}
	//4.Write a C++ program that outputs "I want an A" to a file called grade.txt
	if(selectprog==4){
		ofstream myfile;
		myfile.open("grade.txt");
		cout << "created grade.txt" << endl;
		myfile << "I want an A";
		cout << "wrote to grade.txt" << endl;
		myfile.close();
		cout << "closed grade.txt" << endl;
	}
	//5.Write a C++ program that creates a integer pointer, creates a variable set
	// to a integer value, then assigns the address of the variable to the pointer. 
	//User the pointer to print out the address and the value being pointed to by the pointer.
	if(selectprog==5){
		int *ipoint;
		int intvar = 42;
		ipoint = &intvar;
		cout << "original int value: " << intvar << endl;
		cout << "pointer value: " << *ipoint << endl;
	}
	return 0;
}
