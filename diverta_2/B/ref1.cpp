#include <bits/stdc++.h>
using namespace std;
 
const int N=100;
 
int x[N],y[N];
vector <pair <int, int>> q;
 
int main(){
	int n; cin>>n;
	for (int i=1;i<=n;i++)
		scanf("%d%d",x+i,y+i);
	for (int i=1;i<=n;i++)
		for (int j=i+1;j<=n;j++){
			int tx=x[i]-x[j],ty=y[i]-y[j];
			if (tx<0) tx=-tx,ty=-ty;
			else if (tx==0) ty=abs(ty);
			q.push_back(make_pair(tx,ty));
		}
	sort(q.begin(),q.end());
	pair <int, int> last(0,0);
	int cnt=0,s=0;
	for (auto &val: q){
		if (val==last) cnt++;
		else cnt=1;
		last=val; s=max(s,cnt);
	}
	cout<<n-s<<endl;
	return 0;
}