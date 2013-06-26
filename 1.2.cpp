
//to reverse a string
#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <map>
#include <algorithm> 

using namespace std;

main(){
        char * str ;
        cout << "enter the string";
        cin >> str;
         //cout << s << endl;
        char * end = str; char  tmp;
        char*s = str;
        if (s)
       {
			while (*end){
			cout << "not end yet" << endl;
				++end;
 			}
 			--end;
 
 			while (s < end){
 			 cout << "exchanging "<< *s << " and " << *end ;
 				tmp = *s; 
				*s = *end; 
				*end = tmp;
				s++;end--;
			}
       
       
       } 
               cout << str << endl;

        
}