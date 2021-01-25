#include<iostream>
#include<string>
using namespace std;

string isValid(string &s) {
   string GOOD = "YES";
    string BAD = "NO";

    if(s.size() == 0) return BAD;
    if(s.length() <= 3) return GOOD;

    int *letters = new int[26];
    for(int i = 0; i < s.length(); i++){
        letters[s[i] - 'a']++;
    }
    sort(letters, letters + 26);
    int i=0;
    while(letters[i]==0){
        i++;
    }
    
    int min = letters[i];   
    int max = letters[25]; 
    string ret = BAD;
    if(min == max) ret = GOOD;
    else{
        if(((max - min == 1) && (max > letters[24])) ||
            ((min == 1) && (letters[i+1] == max)))
            ret = GOOD;
    }
    return ret;
}

int main(){
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    cout << "Is the string valid? " << isValid(s) << endl;
}