#include<iostream>
#include<ctime>
#include<cstdlib>
#include <cstdio>

using namespace std;
void generator(int tab1[], int tab2[], int tab3[], int tab4[], int tab5[]);
void print(int tab[]);
void rand(int tab[]);
void ascending(int tab[]);
void descending(int tab[]);
void constant(int tab[]);
void asc_desc(int tab[]);

void insertion_sort(int tab[]);

int n=0;
int main()
{
    srand(time(NULL));
    clock_t start,stop;
    double time;
    //GENEROWANIE CIAGOW
    cout<<"Podaj ile elementowe maja byc ciagi: ";
    cin>>n;
    int *tab1 = new int[n]; int *tab2 = new int[n]; int *tab3 = new int[n]; int *tab4 = new int[n]; int *tab5 = new int[n];
    generator(tab1,tab2,tab3,tab4,tab5);
    //WYWOLYWANIE FUNKCJI
    /*np. insertion_sort(tab1-5); print(tab1-5);
          generator(tab1,tab2,tab3,tab4,tab5);   <-- zeby wygenerowac ciagi na nowo(nie byly posortowane)
          inny_sort(tab1-5); print(tab1-5);
          ...
    */
    start = clock();
    //WYWOLYWANIE ALGORYTMU SORTOWANIA
    print(tab2);
    insertion_sort(tab2);
    print(tab2);
    //
    stop = clock();
    time = (double)(stop - start);
    cout<<endl<<"Czas wykonywania algorytmu: "<<time<< "ms"<<endl;
    delete[] tab1; delete[] tab2; delete[] tab3; delete[] tab4; delete[] tab5;
}
void insertion_sort(int tab[])
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && tab[j-1]>tab[j])
        {
            int tmp=tab[j-1];
            tab[j-1]=tab[j];
            tab[j]=tmp;
            j--;
        }
    }

}
void generator(int tab1[], int tab2[], int tab3[], int tab4[], int tab5[])
{
    rand(tab1);
    ascending(tab2);
    descending(tab3);
    constant(tab4);
    asc_desc(tab5);
}
void print(int tab[])
{
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl<<endl;
}
void rand(int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%100;
    }
}
void ascending(int tab[])
{
    int pom=0;
    tab[0]=rand()%100;
    for(int i=1;i<n;i++)
    {
        pom=rand()%10;
        tab[i]=tab[i-1]+pom;
    }
}
void descending(int tab[])
{
    int pom=0;
    tab[0]=rand()%100;
    for(int i=1;i<n;i++)
    {
        pom=rand()%10;
        tab[i]=tab[i-1]-pom;
    }
}
void constant(int tab[])
{
    int pom=rand()%100;
    for(int i=0;i<n;i++)
    {
        tab[i]=pom;
    }
}
void asc_desc(int tab[])
{
    int pom=0;
    tab[0]=rand()%100;
    for(int i=1;i<n;i++)
    {
        pom=rand()%10;
        if(i<n/2)
            tab[i]=tab[i-1]+pom;
        else
            tab[i]=tab[i-1]-pom;
    }
}




