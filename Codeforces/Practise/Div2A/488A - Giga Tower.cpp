#include <bits/stdc++.h>
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long
#define FOR(l)   for(int k=0; k<l; k++)
#define max(a,b) ( (a) > (b) ? (a) : (b))
#define min(a,b) ( (a) < (b) ? (a) : (b))

using namespace std;

int main()
{
    int n,i,k,c=0,ans=0;
	in n;
	while(1){
		n++;
		ans++;
		k=n;
		while(k!=0){
			if(k%10==8||k%10==-8) c=1;
			k/=10;
		}
		if(c) break;
	}
	out ans;
    return 0;
}

