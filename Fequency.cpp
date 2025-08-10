#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;
    cout << "Enter array element:";
    int a[n];
    for (int i = 0; i < n;i++ )
        cin >> a[i];

    int ck[1000000] = {0};

    for (int i = 0; i < n;i++){
        ck[a[i]]++;
    }

    for (int i = 0; i < 1000000;i++){
        if(ck[i]>0)
            cout << i << " is " << ck[i] << " time" << endl;
    }

        return 0;
}
