#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool permutationPalindrome(string& str){
	unordered_map<char,int> map;
	int min = INT_MAX;
	for(char c: str){
		if(c != ' ' && ++map[c] < min)
			min = map[c];
	}
	return (min == 1);
}
int main()
{
	string s = "carerac";
	if(permutationPalindrome(s))
		cout<<"True";
	else
		cout<<"False";
    return 0;
}
