#include <iostream>
#include <string>
using namespace std;
// Time conplexicty of the code is O(n)

int main() {
    
    string str=".geeks..for.geeks.";
    int left=0;
    int right=str.length()-1;
    while(left<right){
        if(str[left]=='.'){
            left++;
            
        }
        else if(str[right]=='.'){
            right--;
            
        }
        
        else{
            swap(str[left],str[right]);
            left++;
            right--;
        }
        
    }
    
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }

    return 0;
}
