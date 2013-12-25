#include<iostream>
using namespace std;

int NumDigit(int num){
  int count = 0;
  while(num>0){
    num = num/10;
    count++;
  }
  return count;
}

int MaximumNumber(int numDigits){
  int i = numDigits;
  int num = 0;
  while(i>0){
    num = (num*10)+9;
    i--;
  }
  return num;
}

long long Goodness(long long l, long long r,int digits){
  int n = (r-l)+1;
  long long sum = 0;
  sum = (l+r)*(r-l+1)/2;
  sum = (long long)(digits) * (sum);
  return sum;
}

long long run(long long l, long long r){
  long long sum = 0;
  while(l<=r){
    int digits = NumDigit(l);
    int max = MaximumNumber(digits);
    if(max>r){
      sum = (sum + Goodness(l,r,digits))%1000000007;
    }else{
      sum = (sum + Goodness(l,max,digits))%1000000007;
    }
    l = max + 1;
  }
  return sum;
}

int main(){
  int t;
  long long sum,l,r;
  cin>>t;
  while(t--){
    cin>>l;
    cin>>r;
    sum = run(l,r);
    cout<<sum<<endl;
  }
  return 0;
}
