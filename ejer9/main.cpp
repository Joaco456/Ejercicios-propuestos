#include <iostream>

using namespace std;
//EJERCICIO 9
int main()
{
int j, temp,length=5,arr[]={4,3,2,1,5};
    cout<<"La lista EN DESORDEN: \n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
	for (int i=0;i<length;i++)
    {
		j = i;
		while (j>0 & arr[j]<arr[j-1])
            {
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
            }
	}
	cout<<"La lista EN ORDEN: \n";
	for (int i=0;i<length;i++)
        {
            cout<<arr[i]<<endl;
        }
    return 0;
}
