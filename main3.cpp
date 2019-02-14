#include <iostream>
using namespace std;

int main(){
	for(int i=1; i<=100;i++){
		bool matched = false;
		if ( (i % 3) == 0 ) {
			cout << "Fizz";
			matched = true;
		} 
		
		if ( (i % 5) == 0 ) {
			cout << "Buzz";
			matched = true;
		}
		
		if(matched){
			cout << endl;
		} else {
			cout << i << endl;
		}
	}
	return 0;
}