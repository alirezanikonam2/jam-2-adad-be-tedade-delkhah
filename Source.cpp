#include<iostream>
using namespace std;


int main(){

	int a=1,c=0;

	
	cout << "hellow welcime to this program" << endl 
		<< "please enter numbers for postive and when ever finish number enter 0000 "<<endl;
	 
	while (a!=0000){
		cin >> a;
		c += a;
		
	}
	
	cout << c;


	system("pause");
	return 0;
}