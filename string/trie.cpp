#include <bits/stdc++.h>
using namespace std;

struct T{
    map<char,T*> child;
    bool end;
    T(){
        end=false;
    }
};

void insert(T *root,string word){
    T *curr=root;
    for(int i=0;i<word.size();i++){
        char c=word[i];
        T *node=curr->child[c];
    if(!node){
        node=new T();
        curr->child[word[i]]=node;
    }
    curr=node;
    }
    curr->end=true;
}

bool prefixsearch(T *root,string word){
    T *curr=root;
    for(int i=0;i<word.size();i++){
        char c=word[i];
        T *node=curr->child[c];
    if(!node){
        return false;
    }
    curr=node;
    }
    return (curr->end);
}
int main()
{int t;
cin>>t;
while(t--){int n;cin>>n;
  T *root=new T();
string s[n];
for(int i=0;i<n;i++){cin>>s[i];insert(root,s[i]);}

string p;
cin>>p;
cout<<prefixsearch(root,p)<<endl; }
 return 0;}
