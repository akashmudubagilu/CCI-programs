// to determine if a string has all unique   characters

#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <map>
#include <string> 
using namespace std;

bool checkIfUnique(string st){
	cout << st << endl;
	cout<< st[0] << endl;
	bool check[256];
	
	for (int i =0;i < 256;i++){
	 check[i]=false;
	}
	for(int i =0; i < st.length() ; i++){
		if (check[int(st[i])]){
			return false;
		}else{
			check[int(st[i])] = true;
		}
	}
	return true;
}

bool checkIfUnique1(string st){
	cout << st << endl;
	map<char,bool> m;
	std::map<char,bool>::iterator it;
	for(int i =0; i < st.length() ; i++){
		it = m.find(st[i]);
		if (it != m.end()){
			return false;
		}else{
			m[st[i]]	 = true;
		}
	}
}

bool checkIfUnique2(string st){
	cout << st << endl;
	 
	for(int i =0; i < st.length() ; i++){
 		for (int j = i+1 ; j < st.length();j++){
 			if (st[i] == st[j])return false;
 		}	
	}
	return true;
}


int main(){

	string s = "string";
	
	if(checkIfUnique(s)){
		cout<< "unique" <<endl;
		
	
	}else {
		cout << "not unique" << endl;
	}
	
	if(checkIfUnique1(s)){
		cout<< "unique" <<endl;
		
	
	}else {
		cout << "not unique" << endl;
	}

	if(checkIfUnique2(s)){
		cout<< "unique" <<endl;
		
	
	}else {
		cout << "not unique" << endl;
	}


}
