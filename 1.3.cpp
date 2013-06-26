//remove duplicate characters from string.. no additional buffer

#include <iostream>
#include <string>


using namespace std;

bool ischaracterDuplicate(char c, int searchTill, string s){

	for(int i = 0; i < searchTill; i ++){
		if (c == s[i]) return true;
	
	
	}
return false;
}

string removeDuplicate(string s){
	
 	int withoutDupes = 0;
	
	for (int i = 0; i < s.length(); i ++){
		
		if(!ischaracterDuplicate(s[i],i,s)){
			s[withoutDupes] = s[i];
			withoutDupes ++;
		}
		
	
	}
	s = s.substr(0,withoutDupes);
	return s;
}



int main (){
	string s = "aabcdddddddaaafgh";
	
	
	cout << "the string is "<< s << endl;
	
	s =	removeDuplicate(s);

	cout << s << endl;

}