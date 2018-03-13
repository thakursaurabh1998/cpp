#include<iostream>
using namespace std;

void getfromfile()
{

	string name;
	cout << "Please enter a file name: ";
	getline(cin, name);
	myfile.open(name.c_str()); // open the file with that given name
	for ( unsigned i = 0; i < 30; i++ ) // loop through the 1st dimension of the array
	    for ( unsigned j = 0; j < 30; j++ ) // loop through the 2nd dimension of the array
	       myfile >> file[i][j];
   
	cin >> file[30][100];  // read from standard input to the 101st 31st element of the array -may cause overflow if the sizes are 30 and 100-

	if(!myfile)
		cout << "File does not exist." << endl;
	myfile.close(); // close the file
        
        cout << file[30][100]; // display the file name you got
}