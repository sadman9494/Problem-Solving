#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int , int> map;
    vector<int> arr = {1,2,2,4,4,6,6,1,7};

    // iterating over the array and inserting the frequency in the map
    for(int element : arr)
    {
        map[element]++;
    }
    
    // now travarsing the map & checking the value which is more than 1
    for(const auto& pair : map){
        if(pair.second > 1){
            cout << pair.first << "is the duplicate in the map"<< endl;
        }
        
    }

    
//====================================================================================    
    // efficient way to check if there is any duplicate or not 
    /*for(int element : arr){
        if(map.find(element) != map.end()){
            cout << element <<"'s duplicate found"<<endl;
            return 0;
        }
        else{
            map[element]++;
        }
    }*/
// ===================================================================================
//before deleting the element we need to search the element
   int newElement = 7;
   cout << "Done";
   
    if(map.find(newElement) != map.end()){
        
        map.erase(newElement);
        cout << "Done1";
   }


//====================================================================================
    // to only iterate over the map 
    // not intended to update during iteration
    for(const auto& pair : map){
        cout << pair.first << " "<< "first element"<< endl;
    }
}