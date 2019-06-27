#include<bits/stdc++.h>
using namespace std;
struct trie{
    int prefix;
    struct trie *edge[26];
};

struct trie *getNode(){
    struct trie *tmp=new trie();
    tmp->prefix=0;
    for(int i=0;i<26;i++){
        tmp->edge[i]=NULL;
    }
    return tmp;
}

struct trie *root=getNode();

void insert(string w){
    struct trie *curr=root;
    for(int i=0;i<w.size();i++){
        if(!curr->edge[w[i]-'a']){
            curr->edge[w[i]-'a']=getNode();
        }
        curr->edge[w[i]-'a']->prefix++;
        curr=curr->edge[w[i]-'a'];
    }
}

int read(string w){
    struct trie *curr=root;
    for(int i=0;i<w.size();i++){
        curr=curr->edge[w[i]-'a'];
    }

    return curr->prefix;
}

int main(){
    string x,y;
    x="abcdabc";
    y="abc";
    insert(x);
    insert("abcdje");
  cout<<read(y);
}
