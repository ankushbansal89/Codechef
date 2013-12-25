#include<iostream>

using namespace std;

int max(int a, int b){
  if(a>=b){
    return a;
  }
  return b;
}

int main(){
  int testcases;
  cin>>testcases;
  while(testcases--){
    int n,w,c[102],p[102],t[102];
    cin>>n;
    cin>>w;
    for(int i=1;i<=n;i++){
      cin>>c[i];
      cin>>p[i];
      cin>>t[i];
    }
    int f[n+1][w+1];
    for(int i=0;i<w+1;i++){
      f[0][i] = 0;
    }
    for(int i=1;i<n+1;i++){
      for(int j=1;j<w+1;j++){
	if(t[i]>j){
	  f[i][j] = f[i-1][j];
	}else{
	  f[i][j] = max(f[i-1][j],f[i-1][j-t[i]]+(c[i]*p[i]));
	}
      }
    }
    cout<<f[n][w]<<endl;
  }
  return 0;
}
