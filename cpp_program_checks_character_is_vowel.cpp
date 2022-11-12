#include <iostream>
// Created by Mazen Alhrazi @itsMaz1n
using namespace std;
int main() {
	char ch;
	cout<<"Read character ch: ";
	cin>>ch;
	ch = tolower(ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		cout<<ch<<" is vowel letter";
	}
	else {
		cout<<ch<<" is NOT vowel letter";
	}
}

