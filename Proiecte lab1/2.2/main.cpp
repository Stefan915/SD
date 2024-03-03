#include <iostream>

using namespace std;

int main()
{
    int matrice[10][10];
    int n;
    int i;
    int j;

    int linii;
    int coloane;
    int aux;
    cout<<"numar linii si coloane = ";
    cin>>n;

    linii=n/2-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            matrice[i][j]=i*n+j;
        }
    }

    for(i=0;i<=linii;i++)
    {
        coloane=n-i*2;
        for(j=i;j<i+coloane-1;j++)
        {
            aux=matrice[i][j];
            matrice[i][j]=matrice[j][i+coloane-1];
            matrice[j][i+coloane-1]=matrice[i+coloane-1][n-j-1];
            matrice[i+coloane-1][n-j-1]=matrice[n-j-1][i];
            matrice[n-j-1][i]=aux;
        }
    }
    cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<matrice[i][j]<<' ';
        }
        cout<<endl;
    }



    return 0;
}