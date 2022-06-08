#include <iostream>
using namespace std;
int main(){
	float uangku;
	cout << "Berapa uangku ? ";
	cin >> uangku;
	if ((uangku >= 75000)&&(uangku <= 200000)){
		cout << "Sepatu model I yang kubeli"<<endl;	
	}else if(uangku > 200000){
		cout << "sepatu model II yang kubeli"<<endl;
	}
	
}

