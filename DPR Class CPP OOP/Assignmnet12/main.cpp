#include <iostream>

using namespace std;

class Square{
	private:
		int side;
	
	public:
		
		Square(int x1)
		{
			side = x1;
		}
		
		int getside(){
			return side;
		}
		
		void findArea()
		{
			cout << side*side << endl;
		}
		
};

int main() {
	Square alpha = Square(10);
	cout << "created square object alpha" << endl;
	cout << "one side of alpha square is: "<< alpha.getside() << endl;;
	cout << "the area of alpha square is: ";
	alpha.findArea();
	
	Square beta = Square(5);
	cout << "created square object beta" << endl;
	cout << "one side of beta square is: "<< beta.getside() << endl;;
	cout << "the area of beta square is: ";
	beta.findArea();
	return 0;
}
