#include <queue>
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n, a;
	while (cout << "input count of number" << endl && cin >> n){
		queue <int> q;
		for (int i = 0; i < n; i++){
			cin >> a;
			q.push(a);
		}
		cout << "size:" << q.size() << endl;
		//when q is not empty
		while (!q.empty()){
			cout << q.front() << endl;
			q.pop();
		}
	}
}