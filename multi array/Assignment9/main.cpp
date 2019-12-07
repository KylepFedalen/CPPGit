#include <iostream>

using namespace std;

int main() {
	
	int multiarray[5][5];
	int i =0;
	int j=0;
	
	int rows = sizeof multiarray / sizeof multiarray[0];
	cout << "rows "<< rows << endl;
	int cols = sizeof multiarray[0] / sizeof(int);
	cout << "cols " << cols << endl;
	
	int totalsize = cols*rows;
	cout << "total size of multidimensional array " << totalsize << endl;
	
	/*populates multiarray with 1's*/
	for(i=0;i<1;i++)
    {
        for(j=0;j<totalsize;j++)
        {
            multiarray[i][j] = 1;
        }
    }
	
	/*prints out multiarray*/
	for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << multiarray[i][j] << " ";
        }
        cout << endl;
    }
	
	
	
	return 0;
}
