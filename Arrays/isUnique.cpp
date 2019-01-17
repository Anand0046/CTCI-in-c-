#include <iostream>
#include <string>
#include <array>
using namespace std;

bool isUnique(string& str){
	if(str.length() > 128)
		return false;
	bool flag[128] = {false};
	int size = str.length();
	for(int i = 0; i < size; i++){
		int val = str[i];
		if(flag[val]){
			return false;
		}
		flag[val] = true;
	}
	return true;
}
int main()
{
    string uniQue = "abcdee";
    if(isUnique(uniQue))
		cout<<"True";
	else
		cout<<"False";
}
