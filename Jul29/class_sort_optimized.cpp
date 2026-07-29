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
    bool thisIsPalindrome;

    student(int a=-1, int b=-1, string c=""){
        marks = a;
        id = b;
        name = c;
    }

    bool operator < (const student &other) const {
        if(marks == other.marks){
            if(thisIsPalindrome && other.thisIsPalindrome){ // both palindrome
                return id < other.id;
            }
            else if(thisIsPalindrome){
                return true;
            }
            else if(other.thisIsPalindrome){
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
        v[i].thisIsPalindrome = isPalindrome(v[i].name);
    }
    sort(all(v));

    for(student x : v){
        cout<<x.marks<<" "<<x.id<<" "<<x.name<<"\n";
    }
}
