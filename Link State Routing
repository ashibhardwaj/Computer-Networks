#include <iostream>
using namespace std;
int main()
{
    int count,src_router,i,j,w,v,min;
    int cost_matrix[100][100],dist[100],last[100];
    int flag[100];
    cout<<"Enter the no of routers:";
    cin>>count;
    cout<<"Enter the cost matrix values:";
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            cout<<"\n"<<i<<"->"<<j<<":";
            cin>>cost_matrix[i][j];
            if(cost_matrix[i][j]<0)cost_matrix[i][j]=1000;
        }
    }
    cout<<"Enter the source router:";
    cin>>src_router;
    for(v=0;v<count;v++)
    {
        flag[v]=0;
        last[v]=src_router;
        dist[v]=cost_matrix[src_router][v];
    }
    flag[src_router]=1;
    for(i=0;i<count;i++)
    {
        min=1000;
        for(w=0;w<count;w++)
        {
            if(!flag[w])
                if(dist[w]<min)
                {
                    v=w;
                    min=dist[w];
                }
        }
        flag[v]=1;
        for(w=0;w<count;w++)
        {
            if(!flag[w])
                if(min+cost_matrix[v][w]<dist[w])
                {
                    dist[w]=min+cost_matrix[v][w];
                    last[w]=v;
                }
        }
    }
    for(i=0;i<count;i++)
    {
        cout<<"\n"<<src_router<<"==>"<<i<<":Path taken:"<<i;
        w=i;
        while(w!=src_router)
        {
            cout<<"<--"<<last[w];
            w=last[w];
        }
        cout<<"\nShortest path cost:"<<dist[i]<<endl;
    }
    return 0;
}
