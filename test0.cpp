#include <iostream>
#include <sais.h>
using namespace std;

int main(){
	int len;
	cin >> len;
	unsigned char *str = new unsigned char[len];
	int *suffix = new int[len];
	for(int i = 0; i < len; i++)
		cin >> str[i];
	sais(str, suffix, len);
	for(int i = 0; i < len; i++)
		cout << suffix[i] << ' '; cout << endl;
	return 0;
}