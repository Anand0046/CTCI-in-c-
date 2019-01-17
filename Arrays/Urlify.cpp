#include <iostream>
#include <string>
using namespace std;
string urlify(string& str){
	string str2;
	for(char c: str){
		if(c == ' ')
			str2.append("%20");
		else
			str2.push_back(c);
	}
	return str2;
}
int main()
{
	string s = "Mr John Smith";
    cout << urlify(s);
    return 0;
}
