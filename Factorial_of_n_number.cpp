#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	
	
	int n1=1;

	for(int i=1; i<=num; i++){
		n1=n1*i;

	}
	cout<<n1;
	return 0;
	// Writing output to STDOUT
}