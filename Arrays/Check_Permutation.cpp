#include <iostream>
#include <string>
using namespace std;
bool checkPermu(string& str1, string& str2){
	if(str1.length() != str2.length())
		return false;
	int array[128];
	for(auto i : str1)
		array[i]++;
	for(int i = 0; i < str2.length(); i++){
		array[i]--;
		if(array[i] < 0)
			return false;
	}
	return true;
}
int main(){
	string s1 = "abc";
	string s2 = "cbb";
	if(checkPermu(s1, s2))
		cout<<"True";
	else
		cout<<"False";
	return 0;
}
