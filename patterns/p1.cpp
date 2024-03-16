#include <iostream>
using namespace std;

void pattern(int m){
    int i,j;
    for(i=0;i<m;i++){
        for ( j = 0; j < m; j++)
        {
            cout << " * ";
        }
        cout << endl;        
    }
}

int main(){
    int n;
    cin >> n;
    pattern(n); 
}