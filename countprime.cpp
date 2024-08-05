#include<iostream>
using namespace std;

int countPrimes(int n) {
        int c=0;
        for(int i=2;i<n;i++){
            int k=0;
            for(int j=2;j<i;j++){
                if(i%j==0)
                    k++;
            }
            if(k==0)
                c++;
        }
        return c;
}
int main(){
    cout<<countPrimes(499999);
}