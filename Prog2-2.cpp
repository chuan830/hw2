#include<iostream>

using namespace std;

int main(){
int seq[10000];
int i=0;
int big=0;
int sum=0;
int sum1=0;
int sum2=0;
int big1=0;
int big2=0;

while(cin>>seq[i]){
    if(seq[i]=='x'){
        break;
    }
    i++;

}

for(int f1=0;f1<i/2;f1++){
        sum=0;
    for(int f11=f1;f11<i/2;f11++){
        sum=sum+seq[f11];
        if(sum>big){
            big=sum;
        }
    }
}

for(int f2=(i/2)+1;f2<i;f2++){
        sum=0;
    for(int f22=f2;f22<i;f22++){
        sum=sum+seq[f22];
        if(sum>big){
            big=sum;
        }
    }
}


for(int m=i/2;m>=0;m--){
    sum1=sum1+seq[m];
    if(sum1>big1)
        big1=sum1;
}

for(int m2=i/2+1;m2<i;m2++){
    sum2=sum2+seq[m2];
    if(sum2>big2)
        big2=sum2;
}

if(big1+big2>big){
    big=big1+big2;
}

cout<<big<<endl;

}
