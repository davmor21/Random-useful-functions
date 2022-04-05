#include <iostream>
#include <vector>
using namespace std;
int valueToSearch;
int low, mid, high; // Binary search variables
int BinarySearch(vector<int>& myVec, int mySize, int searchValue){
   
   low = 0;
   mid = 0;
   high= mySize - 1;
   valueToSearch = searchValue;
   while(high >= low){
      mid = (high + low)/2;
      if (myVec[mid] < searchValue){
       low = mid + 1;  
       }
      else if(myVec[mid] > searchValue){
       high = mid- 1;
         }
      else {
       return mid;  
      }    
   }
      return -1; // not found
}

   void SelectionSort(vector<int> numbers) {
   int sizeVec = numbers.size();
   int i;
   int j;
   int t;
   int temp;
   int indexLargest;
   for(i = 0; i < sizeVec; ++i){
        indexLargest = i;
   for (j = i + 1; j < sizeVec; ++j) {

      if (numbers[j] > numbers[indexLargest]) {
         indexLargest = j;
       }
   }
   temp = numbers[i];
   numbers[i] = numbers[indexLargest];
   numbers[indexLargest]= temp;
   for( t = 0; t < sizeVec; ++t){
          if(i == sizeVec - 1){
              break; 
           }
          cout << numbers[t] << " " ; 
               
          if(t  == sizeVec - 1 ){
              cout << endl;  
           }
       }
      }
   }
