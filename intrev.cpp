#include <iostream>

using namespace std;
int main() {
	//code
	int num = 10120;
	int temp = num;
	int rev = 0;
	while(temp>0){
        // if(temp == num && temp % 10 == 0){
        //     temp /= 10; 
        //     continue;
        // }
	    rev = rev * 10 + (temp%10);
	    temp /= 10;
        cout<<temp<<" "<<rev<<endl;
	}
	cout<<num<<endl<<rev;
	
	return 1;
}