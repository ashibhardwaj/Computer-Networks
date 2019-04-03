#include<iostream>
using namespace std;
int main()
{
        int graph[50][50];
        int i,j,k,t;
        int n;
        cout<<"Enter Number of Nodes:";
        cin>>n;
        for (i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                graph[i][j]=-1;
            }
        }
        char ch[7]={'A','B','C','D','E','F','G'};
        for (i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    graph[i][j]=0;
                }
                if(graph[i][j]==-1)
                {
                    cout<<"Enter Distance between "<<ch[i]<<" - "<<ch[j]<<" : ";
                    cin>>t;
                    graph[i][j]=graph[j][i]=t;
                }
            }
        }
        int via[50][50];
        for (i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                via[i][j]=-1;
            }
        }
        cout<<"After Initialization";
        for (i=0;i<n;i++)
        {
            cout<<"\n"<<ch[i]<<" Table";
            cout<<"\nNode\tDist\tVia";
            for(j=0;j<n;j++)
            {
                cout<<"\n"<<ch[j]<<"\t\t"<<graph[i][j]<<"\t\t"<<via[i][j];
            }
        }
        int sh[50][50][50];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for (k=0;k<n;k++)
                {
                    if((graph[i][j]>-1)&&(graph[j][k]>-1))
                    {
                        sh[i][j][k]=graph[j][k]+graph[i][j];
                    }
                    else
                    {
                        sh[i][j][k]=-1;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<"\nFor "<<ch[i]<<":";
            for (j=0;j<n;j++)
            {
                cout<<"\nFrom "<<ch[j];
                for(k=0;k<n;k++)
                {
                    cout<<"\n "<<ch[k]<<" "<<sh[i][j][k];
                }
            }
        }
        int final[50][50];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                final[i][j]=graph[i][j];
                via[i][j]=i;
                for(k=0;k<n;k++)
                {
                    
                    if((final[i][j]>sh[i][k][j]) || (final[i][j] == -1))
                    {
                        if(sh[i][k][j]>-1)
                        {
                            final[i][j]=sh[i][k][j];
                            via[i][j]=k;
                        }
                    }
                }
                if(final[i][j]==-1)
                {
                    for(k=0;k<n;k++)
                    {
                        
                        if((final[i][k]!=-1)&&(final[k][j]!=-1))
                        {
                            if((final[i][j]==-1) || ((final[i][j]!=-1) &&(final[i][j]>final[i][k]+final[k][j])))
                            {
                                if(final[i][k]+final[k][j]>-1)
                                {
                                    final[i][j]=final[i][k]+final[k][j];
                                    via[i][j]=k;
                                }
                            }
                        }
                        
                    }
                }
            }
        }
        cout<<"\nAfter Update :";
        for (i=0;i<n;i++)
        {
            cout<<"\n"<<ch[i]<<" Table";
            cout<<"\nNode\tDist\tVia";
            for(j=0;j<n;j++)
            {
                cout<<"\n"<<ch[j]<<"\t\t"<<final[i][j]<<"\t\t";
                if(i==via[i][j])
                    cout<<"-"<<"\t";
                else
                    cout<<ch[via[i][j]]<<"\t";
            }
        }
    return 0;
}
