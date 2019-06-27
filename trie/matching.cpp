#include<bits/stdc++.h>
using namespace std;
int root, NEW=0;
vector<string> data;
struct node {
    int nxt[26];
    bool leaf;
} trie[1000000];
 
void insert(string str) {
    int v = root;
    for(int i=0;i<str.size();i++) {
        int  x = str[i] - 'a';
        if(trie[v].nxt[x]) {
            v = trie[v].nxt[x];
            continue;
        }
        trie[v].nxt[x] = ++NEW;
        v = trie[v].nxt[x];
     }
    trie[v].leaf = true;
}
 
bool query(string str) {
    int v = root;
    for(int i=0;i<str.size();i++) {
        int  x = str[i] - 'a';
        if(trie[v].nxt[x]) {
            v = trie[v].nxt[x];
            if(trie[v].leaf) return true;
            continue;
        }
        return false;
    }
    return true;;
}
 
int main() {
    int n;
    string str;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> str;
        data.push_back(str);
    }
    for(int i=0;i<data.size();i++) {
        str = data[i];
        if(query(str)) {
            cout << "BAD SET" << endl;
            cout << str << endl;
            exit(0);
        }
        insert(str);
    }
    cout << "GOOD SET" << endl;
}
