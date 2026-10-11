#include<iostream>
using namespace std;
int main(){

    int L,R;
    
    while(cin>>L>>R){
        if(L==0 && R==0)
        break;
      int count=0;
      for(int a=L;a<=R;a++){
        int sum1=0;
        for(int i=1;i<a;i++){
            if(a%i==0)
              sum1 +=i;
        }
        int b=sum1;

        if(b>a && b>=L && b<=R){
            int sum2=0;
            for(int j=1;j<b;j++){
                if(b%j==0)
                 sum2 +=j;
            }
            if(sum2 == a)
            count++;
        }
      } 
      cout<< count << endl; 
    }
  return 0;
}