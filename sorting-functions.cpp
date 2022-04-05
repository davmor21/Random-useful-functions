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
