#include<iostream>
#include<string>
#define min(a,b) ((a)<(b)?(a):(b))

using namespace std;

<<<<<<< HEAD
long long int Function(int N, long long int k, long long int Answer,string oper, long long int A[]){
  long long int temp = A[0];
  if(k==0){
    return Answer;
  }
=======
long long Function(int N, long long k, long long Answer,string oper, long long A[]){
  long long temp = A[0];
>>>>>>> c38cac52f398f907091fb6d50c334c5e3521f6e8
  for(int j=1;j<N;j++){
    if(oper.compare("XOR") == 0){
      temp = temp ^ A[j];
    }else if(oper.compare("AND") == 0){
      temp = temp & A[j];
    }else{
      temp = temp | A[j];
    }
  }
<<<<<<< HEAD
  if(oper.compare("XOR") == 0){
    if(k%2!=0){
      Answer = Answer^temp;
    }
  }else{
    if(oper.compare("AND") == 0){
      Answer = Answer & temp;
    }else{
      Answer = Answer | temp;
=======
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
>>>>>>> c38cac52f398f907091fb6d50c334c5e3521f6e8
    }
  }
  return Answer;
}

int main(){
  int testCases,N;
<<<<<<< HEAD
  long long int k,Answer;
=======
  long long k,Answer;
>>>>>>> c38cac52f398f907091fb6d50c334c5e3521f6e8
  string oper;
  cin>>testCases;
  while(testCases--){
    cin>>N>>k>>Answer;
<<<<<<< HEAD
    long long int A[1002];
=======
    long long A[1002];
>>>>>>> c38cac52f398f907091fb6d50c334c5e3521f6e8
    for(int i=0;i<N;i++){
      cin>>A[N];
    }
    cin>>oper;
<<<<<<< HEAD
    long long int result = Function(N,k,Answer,oper,A);
=======
    long long result = Function(N,k,Answer,oper,A);
>>>>>>> c38cac52f398f907091fb6d50c334c5e3521f6e8
    cout<<result<<endl;
  }
}
