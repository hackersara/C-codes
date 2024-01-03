#include<iostream>
using namespace std;

int main(){
    int tr,rowno;
    cin>>tr;
    rowno=1;
    int i=1;
    while(i<=tr-rowno){
        cout<<" ";
        i=i+1;
    }
    int j=1;
    while(j<=tr){
        cout<<'*';
        j=j+1;
    }
    cout<<endl;
    rowno=2;
    while(rowno<=tr-1){
        int l=1;
        while(l<=tr-rowno){
            cout<<" ";
            l=l+1;
        }
        cout<<'*';
        int k=1;
        while(k<=tr-2){
            cout<<" ";
            k=k+1;
        }
        cout<<'*';
        cout<<endl;
        rowno=rowno+1;
    }
    int p=1;
    while(p<=tr){
        cout<<'*';
        p=p+1;
    }
    return 0;
}
