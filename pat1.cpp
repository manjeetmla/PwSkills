#include<iostream>
using namespace std;

/* Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n. */

int main(){
    int m, n, i, j, a[50], b[50], merge[100];
    cout<<"enter no. of elements in a:-";
    cin>>m;
    cout<<endl<<"enter the elements:-";
    for(i=0; i<m; i++){
        cin>>a[i];
    }
    cout<<endl<<"enter no. of elements in b:-";
    cin>>n;
    cout<<endl<<"enter the elements:-";
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    // merging arrays
    for(i=0; i<m; i++){
        merge[i] = a[i];
    }
    for(j=0; j<n; j++){
        merge[i] = b[j];
        i++;
    }
    int sizemerge = i;
    // sorting the merged array in ascending order
    for(j=0; j<(sizemerge-1); j++){
        for(i=0; i<(sizemerge-1); i++){
            if(merge[i]>merge[i+1]){
                int temp = merge[i];
                merge[i] = merge[i+1];
                merge[i+1] = temp;
            }
        }
    }
    cout<<"\nThe New Array (merged Array):\n";
    for(i=0; i<sizemerge; i++)
    {
        if(i==(sizemerge-1))
            cout<<merge[i];
        else
            cout<<merge[i]<<" ";
    }
    cout<<endl;
    return 0;
}
