#include <iostream>

using namespace std;



int main() {
    int tests=0,walls=0;


    cin>>tests;

    for(int i=0;i<tests;i++){
        cin>>walls;
        int temp[walls];
        int low=0,high=0;
        for(int j=1;j<=walls;j++){
            cin>>temp[j];
        }
        for(int h=1;h<walls;h++){
            if (temp[h]<temp[h+1]){
                high++;
            }
            if(temp[h]>temp[h+1]){
                low++;

            }

        }

        cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;

    }


}
