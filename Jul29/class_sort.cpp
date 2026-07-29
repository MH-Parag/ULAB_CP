// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define pii pair<int,int>

bool isPalindrome(string a){
    string b = a;
    reverse(all(b));
    return a==b;
}

struct student{
    int marks, id;
    string name;
    student(int a=-1, int b=-1, string c=""){
        marks = a;
        id = b;
        name = c;
    }
    bool operator < (const student &other) const {
        if(marks == other.marks){
            if(isPalindrome(name) && isPalindrome(other.name)){ // both palindrome
                return id < other.id;
            }
            else if(isPalindrome(name)){
                return true;
            }
            else if(isPalindrome(other.name)){
                return false;
            }
            else{ // none palindrome
                return id < other.id;
            }
        }
        else{
            return marks > other.marks;
        }
    }
};

int main() {
    int n; cin>>n;
	vector<student> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].marks>>v[i].id>>v[i].name;
    }
    sort(all(v));

    for(student x : v){
        cout<<x.marks<<" "<<x.id<<" "<<x.name<<"\n";
    }
}


/*
input: 
5
80 10 aba
70 15 bbb
80 3 cc
90 6 de
70 2 ef

output:
90 6 d
80 3 cc
80 10 aba
70 15 bbb
70 2 ef
*/
