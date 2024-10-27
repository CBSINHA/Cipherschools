// Ques 1. Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them.

// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer. Note :- Take all the required input from user.
#include<iostream>
#include<map>
#include<cstring>
using namespace std;
string Result(string str){
    map<char,int>m;
    for(char c:str){
        m[c]++;
    }
    string res;
    map<char,int>::iterator it;
    int freq=0;
    for(it=m.begin();it!=m.end();it++){
        if(freq<it->second)
        freq=it->second;
    }
    for(int i=freq;i>=1;i--){
        for(it=m.begin();it!=m.end();it++){
            if(it->second==i)
            res.append(it->second,it->first);
        }
    }
    return res;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Sorted: "<<Result(s);
 return 0;
}