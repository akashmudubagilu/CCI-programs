//string anagram
#include<iostream>
#include<string>
#include<map>

using namespace std;

bool checkIfStringsAreAnagrams(string s1, string s2){
	cout << s1 << "  " << s2 << endl;
	
	if (s1.length() != s2.length()) return false;
	
	map<char,int> m1;
	map<char,int> m2;
	map<char, int>::iterator it;
		map<char, int>::iterator m2it;

	for(int i = 0 ; i < s1.length(); i ++){
		
		it = m1.find(s1[i]);
		if (it != m1.end()){
			it->second++;
		}else{
			m1[s1[i]]=1;
		}
	
	}
	for(int i = 0 ; i < s2.length(); i ++){
		
		it = m2.find(s2[i]);
		if (it != m2.end()){
			it->second++;
		}else{
			m2[s2[i]]=1;
		}
	
	}
	
	if (m1.size() != m2.size()) return false;
 	int m1count ;
 	int m2count;	
 	
for( it = m1.begin(); it != m1.end(); ++it) {
	m1count = it->second;
	m2count = m2.find(it->first)->second;
	if (m2count != m1count ) return false;
 
 
}
return true;



}

main(){
	string s = "asdfasdf";
	string s1 = "fdsaadsa";
	
	if (checkIfStringsAreAnagrams(s, s1)){
		cout << "anagrams" << endl;
	}else {
		cout << "not anagrams" << endl;
	}
	


}