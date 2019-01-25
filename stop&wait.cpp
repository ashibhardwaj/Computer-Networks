#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int frames, i=1, x;
    frames=rand()%20+1;
    cout<<"No. of frames = "<<frames<<endl;
    while(frames--)
    {
        cout<<"Sending frame "<<i<<endl;
        while(1)
        {
            x=rand()%10;
            if(x%2==0)
            {
                cout<<"Waiting"<<endl;
                cout<<"Resending frame "<<i<<endl;
            }
            else
            {
                cout<<"Acknowledgement for frame "<<i<<endl;
                break;
            }
        }
        i++;
    }
    cout<<"Data transmitted"<<endl;
    return 0;
    
}
