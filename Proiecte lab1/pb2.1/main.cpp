#include <iostream>

using namespace std;
int main()
{
    int matrice[100][100];
    int n;
    int i,j;
    int inceput;
    int sfarsit;


    cout<<"numar de coloane = ";
    cin>>n;
    inceput=0;
    sfarsit=n-1;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>matrice[i][j];
        }
    }


    while(inceput<=sfarsit)
    {
        for(i=inceput;i<=sfarsit;i++)
        {
            cout<<matrice[inceput][i]<<' ';
        }
        for(i=inceput+1;i<=sfarsit;i++)
        {
            cout<<matrice[i][sfarsit]<<' ';
        }

        for(i=sfarsit-1;i>=inceput;i--)
        {
            cout<<matrice[sfarsit][i]<<' ';
        }
        for(i=sfarsit-1;i>=inceput+1;i--)
        {
            cout<<matrice[i][inceput]<<' ';
        }
        inceput++;
        sfarsit--;
    }

}