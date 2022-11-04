#include<iostream>
using namespace std;

int arr[]= {2,4,6,8,10,12,14,16};
int n = sizeof(arr)/sizeof(int);


int linear(int item){
    int loc;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==item)
        {
            loc = i;
            break;
        }
        
        else{
            loc = -1;
        }
    }
    cout<<"\nItem is present at Location No: "<<loc;
    return 0;
}

int main(){
    linear(8);
    linear(14);
    linear(93);


}
