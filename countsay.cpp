#include<iostream>
using namespace std;

string countAndSay(int n) {
        if (n == 1) return "1";
        
        string s = countAndSay(n - 1);
        int count = 1;
        string res = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (i == s.length() - 1 || s[i] != s[i + 1]) {
                res += to_string(count) + s[i];
                count = 1;
            } else {
                count++; 
            }
        }
        
        return res;
    }
	int main(){
	
	cout<<countAndSay(4);
}