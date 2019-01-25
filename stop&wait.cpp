#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    srand(time(0)); // For generating different random number each time.
    int frames, i=1, x;
    frames=rand()%20+1; // Not accepting more than 20 frames for simplicity.
    cout<<"No. of frames = "<<frames<<endl;
    while(frames--)
    {
        cout<<"Sending frame "<<i<<endl;
        while(1)
        {
            x=rand()%10;
            if(x%2==0) // Assuming it to be the case when acknowledgement is not received.
            {
                cout<<"Waiting"<<endl;
                cout<<"Resending frame "<<i<<endl;
            }
            else // Assuming that acknowledgment has been received.
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

