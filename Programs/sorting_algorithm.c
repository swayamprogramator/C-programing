
#include<stdio.h>
void swap(int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
}
void merge(int arr[],int p,int q,int r){
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int left[n1];
    int right[n2];
    for( i=0;i<n1;i++)left[i]=arr[p+i];
    for( j=0;j<n1;j++)right[j]=arr[q+j+1];
    
    i=0;
    j=0;
    k=p;
    while(i<n1 && j<n2){
        if (left[i]<=right[j]){
            arr[k]=left[i];
            k++,i++;
        }
        else{
            arr[k]=right[j];
            k++,j++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        k++,i++;
    }
    while(j<n2){
        arr[k]=right[j];
        k++,j++;
    }
}
int mergesort(int arr[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);    
    }
}
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(int arr[],int l,int r){
     if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
     }
}
void insertion(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}
void selection(int arr[],int n){
    int i,j,temp,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr,i,min);
    }
}
void bubble(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }
}
void input(int arr[], int n){
    printf("Enter Element:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter no. of element you want:");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    insertion(arr,n);
    //selection(arr,n);
    //bubble(arr,n);
    //mergesort(arr,0,n-1);
    //quicksort(arr,0,n-1);
    print(arr,n);
    return 0;
}