#include <bits/stdc++.h>
#define Max 1000001
using namespace std;

vector <int> Node[Max];
int root;

void inorder(int r) {
	if(Node[r].size() > 0)	{
		inorder(Node[r][0]);
		cout << r <<" ";
		for(int i = 1; i < Node[r].size();i++) {
			inorder(Node[r][i]);
		}
	}else {
		cout << r << " ";
	}
}
void preorder(int r){
	if(Node[r].size() > 0) {
		cout << r <<" ";
		for(int i = 0; i < Node[r].size();i++) {
			preorder(Node[r][i]);
		}
	}else {
		cout << r <<" ";
	}
}

void postorder(int r){
	if(Node[r].size() > 0) {
		for(int i = 0 ; i < Node[r].size();i++ ) {
			postorder(Node[r][i]);
		}
		
		cout << r << " ";
	}else {
		cout << r << " ";
	}
}
void Solve() {
	string s;
	while(1) {
		cin >> s;
		if(s == "*") {
			break;
		}
		
		if(s == "MakeRoot") {
			cin >> root;
		}else if(s == "Insert") {
			int u,v;
			cin >> u >> v;
			Node[v].push_back(u);
		}else if(s == "InOrder") {
			inorder(root);
			cout <<endl;
		}else if(s == "PreOrder") {
			preorder(root);
			cout << endl;
		}else {
			postorder(root);
			cout <<endl;
		}
	}	
}

int main() {
	Solve();
	return 0;
}