#include<iostream>
using namespace std;
int main()
{
    int w_size,sent=0,ack;
    cout<<"Enter the window size"<<endl;
    cin>>w_size;
    while(true)
    {
        for(int i=0; i<w_size; i++)
        {
            cout<<"Frame "<<sent<<" has been transmitted."<<endl;
            sent++;
            if(sent==w_size)
                break;
        }
        cout<<"Please enter the last Acknowledgement received."<<endl;
        cin>>ack;
        if(ack==w_size)
            break;
        else
            sent = ack;
    }
    return 0;
}
