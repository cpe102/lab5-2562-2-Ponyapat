#include<iostream>
#include<string>
using namespace std;

string mixText(string a,string b){
	string s = "";
	int L = a.size();
	int LL = b.size();

	int i = 0;
	if (L == LL){
		while (i < L){
			s = s + a[i] + b[i];
			i++;
		}
		return s;
	
	}else{
		return "E";
	}
	
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
