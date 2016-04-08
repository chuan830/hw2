#include<iostream>

using namespace std;

int main(){
int seq[10000];
int i=0;
int big=0;
int sum=0;

while(cin>>seq[i]){
    if(seq[i]=='x'){
        break;
    }
    i++;

}

for(int j=0;j<i;j++){
        sum=0;
    for(int k=j;k<i;k++){
        sum=sum+seq[k];
        if(sum>big){
            big=sum;
        }

    }
}

cout<<big<<endl;

}
