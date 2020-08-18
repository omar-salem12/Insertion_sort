#include <iostream>

using namespace std;

void Insertion_sort(int arr[],int n) {

    for (int i =1;i<n;i++) {

      int  j =i-1;
      int x = arr[i];

       while(j>-1 && arr[j]>x) {

          arr[j+1] = arr[j];
          j--;
       }

       arr[j+1] = x;
    }

}

int main()
{


  int arr[] = {1,2,4,3,6,5};
  for(int i = 0;i<6;i++) {

     cout <<arr[i];
  }

  Insertion_sort(arr,6);
  cout<<endl;
  for(int i =0;i<6;i++) {

      cout <<arr[i];
  }




    return 0;
}
