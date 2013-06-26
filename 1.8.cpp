//isSubstring which checks if one word is a substring of another Given two strings, 
//s1 and s2, write code to check if s2 is a rotation of s1 using only one call to 
//isSubstring (i e , “waterbottle” is a rotation of “erbottlewat”)

#include <iostream>
#include <string>
using namespace std;

int main (){
	string s1 = "waterbottle";
	string s2 = "erbottlewat";

size_t found;
	string s3 = s2 + s2;
	
	cout << "seaching for " << s1 << " in " << s3 << endl;
	found=s3.find(s1);
  	if (found!=std::string::npos){
		cout << "it is a rotation" << endl;
	}else{
		cout << "not rotation" << endl;
	}

}
