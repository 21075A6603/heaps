#include <iostream>
#include <algorithm> 
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;
    heap(){
        arr[0]=-1;
        size=0;
    }
    // int swap(int x,int y){
    //     int temp=x;
    //     x=y;
    //     y=temp;
    //     return x,y;
    // }
    // insertng the values according to the rules of the heap:
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        // checking if the nodes orasent or not int he array list
        while(index>1){
            int parent=index/2;
            // swap if the child is greater then the parent:
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            // continues the code if the child is smaller then the its parent :
            else{
                return;
            }
        }
        
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

using namespace std;

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.insert(60);
    h.print();
    // h.insert(50);
    return 0;
}