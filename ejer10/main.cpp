#include <iostream>

using namespace std;
//EJERCICIO 10
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);

    }
}
int main()
{
  int length=5,arr[]={4,3,2,1,5};
    cout<<"La lista antes de ser ordenada\n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    mergesort(arr,0,4);
    cout<<"La lista ordenada\n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
