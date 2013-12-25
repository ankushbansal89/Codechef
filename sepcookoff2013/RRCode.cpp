#include<iostream>
#include<string>
#define min(a,b) ((a)<(b)?(a):(b))

using namespace std;

long long Function(int N, long long k, long long Answer,string oper, long long A[]){
  long long temp = A[0];
  for(int j=1;j<N;j++){
    if(oper.compare("XOR") == 0){
      temp = temp ^ A[j];
    }else if(oper.compare("AND") == 0){
      temp = temp & A[j];
    }else{
      temp = temp | A[j];
    }
  }
  if(k>0){
    if(oper.compare("XOR") == 0){
      if(k%2==0){
	Answer = Answer^0;
      }else{
	Answer = Answer^temp;
      }
    }else{
      if(oper.compare("AND") == 0){
	Answer = Answer & temp;
      }else{
	Answer = Answer | temp;
      }
    }
  }
  return Answer;
}

int main(){
  int testCases,N;
  long long k,Answer;
  string oper;
  cin>>testCases;
  while(testCases--){
    cin>>N>>k>>Answer;
    long long A[1002];
    for(int i=0;i<N;i++){
      cin>>A[N];
    }
    cin>>oper;
    long long result = Function(N,k,Answer,oper,A);
    cout<<result<<endl;
  }
}
