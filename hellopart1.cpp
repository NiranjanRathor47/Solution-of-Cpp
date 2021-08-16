#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==b && b==c && c==d && d==a){
	        cout<<0<<endl;
	    }
	    else if(a!=b && b==c && c==d && d!=a){
	        cout<<1<<endl;
	    }
	    else
	    cout<<2<<endl;
	}
	return 0;
}
