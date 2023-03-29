#include<iostream>
using namespace std;

int main(){

    int T;
    cin>>T;

    while(T--){
        int x,y,a;
        cin>>x>>y>>a;

        if(a>=x && a<y)
            cout<< "Yes" << endl;
        else
            cout<< "No" << endl;
    }
return 0;

}
