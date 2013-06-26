//string replace space with %20
#include<iostream>
#include<string>
#include<map>

using namespace std;


int main(){
	string s = "hi my name is.. hi my name is.. hi my name is..";
	int spaceCount=0;
	cout << s << " ::: lengt :::"<< s.length() <<endl;
	for(int i =0; i < s.length(); i ++){
		if (s[i] == ' '){
			++spaceCount;
		}
	}
	
	int oldSize = s.length();
	cout << spaceCount << endl;
 	s.resize(s.length() + 2*spaceCount, 'x');
	//cout << s.size()<< endl;
	
	//	cout << s.length()<< endl;
//cout << "after resize :" << s <<endl;
	int stPointer = s.length()  -1;
 	cout << s.length()<< endl;
 	//cout << "st pointer is " << stPointer << endl;
 	for (int i = oldSize - 1 ; i >= 0; i--){
	
		//cout << "checking the char " << s[i] << endl;
		if (s[i] == ' '){
		//cout << "replacing space with %20"<< endl;
			s[stPointer--] = '0';
			s[stPointer--] = '2';
			s[stPointer--] = '%';
		//	cout << "the string is " << s << endl;
		}else{
		//			cout << "copying the same char"<< endl;		
			s[stPointer--] = s[i];
		//				cout << "the string is " << s << endl;

		}
	
	
	}
cout << s << endl;

}