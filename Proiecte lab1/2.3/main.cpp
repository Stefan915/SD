#include <iostream>
using namespace std;

int main()
{
    int sir[20];
    int smax=-1;
    int n;
    int i;
    int indexInceputCurent;
    int indexFinalCurent;
    int indexInceput;
    int indexFinal;
    bool gasitPozitiv=false;
    bool suntInSir=false;
    bool setNeg;
    int maximNumereNegative;

    int sumaCurenta;
    int sumaNegativa;
    cout<<"nr elem=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>sir[i];
    }

    i=0;
    maximNumereNegative=sir[0];
    while(sir[i]<0&&i<n)
    {
        if(sir[i]>maximNumereNegative)
        {
            maximNumereNegative=sir[i];
            indexInceput=indexFinal=i;
        }
        i++;
    }
    if(i>=n)
    {
        smax=maximNumereNegative;
    }
    else
    {
        for(;i<n;i++)
        {
            if(suntInSir==false)
            {
                sumaCurenta=0;
                sumaNegativa=0;
                suntInSir=true;
                indexInceputCurent=i;
            }
            if(sir[i]>=0)
            {
                if(setNeg==true)
                {
                    if(sumaCurenta+sumaNegativa>=0)
                    {
                        if(sumaCurenta>smax)
                        {
                            smax=sumaCurenta;
                            indexFinal=i-1;
                            indexInceput=indexInceputCurent;

                        }
                        sumaCurenta=sumaCurenta+sumaNegativa+sir[i];
                        setNeg=false;
                        sumaNegativa=0;
                    }
                    else
                    {
                        suntInSir=false;
                        i--;
                    }
                }
                else
                {
                    sumaCurenta+=sir[i];
                    if(sumaCurenta>smax)
                    {
                        smax=sumaCurenta;
                        indexInceput=indexInceputCurent;
                        indexFinal=i;
                    }
                }
            }
            else if(sir[i]<0)
            {
                sumaNegativa+=sir[i];
                setNeg=true;
            }
        }
    }

    if(setNeg && sumaCurenta+sumaNegativa>=0)
    {
        if(sumaCurenta>smax)
        {
            smax=sumaCurenta;
            indexFinal=n-1;

        }
        sumaCurenta=sumaCurenta+sumaNegativa;
        sumaNegativa=0;
        setNeg=false;
    }
    
    cout<<"Sirul cu suma maxima este cel ce incepe de pe pozitia ["<<indexInceput<<"] si se termina pe pozitia ["<<indexFinal<<"] avand suma = "<<smax<<endl;

    return 0;
}