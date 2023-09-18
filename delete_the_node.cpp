// problem stmt:
//  deleting the root node and rearrenging the rot node in thir correct place:
#include<iostream>
#include<algorithm>
using namespace std;
class heap{
        public:
        int arr[100];
        int size=0;
        heap(){
                arr[0]=-1;
                size=0;
        }
        void insert(int val){
                size=size+1;
                int index=size;
                arr[index]=val;

                while(index>1){
                        int parent=index/2;
                        if(arr[index]>arr[parent]){
                                swap(arr[index],arr[parent]);
                                index=parent;      
                        }
                        else{
                                return;
                        }
                }
        }
        // deletion of the root node:

        void deletetheroot(){
                if(size==0){
                        cout<<"nothing to delete the nodes:";
                }
                // assigining the last element to the first root element:
                else{
                        arr[1]=arr[size];
                        // decreasing the size of the array:
                        size--;
                }
                
                int i=1;
                while(i < size){
                        int leftIndex=2*i;
                        int rightIndex=2*i+1;
                        // rearrainging the root node is it at coorect place or not:
                        // comparing with the left node and right:
                        if(leftIndex<size && arr[leftIndex] > arr[i]){
                                swap(arr[i],arr[leftIndex]);
                                i=leftIndex;
                        }
                        else if(rightIndex<size && arr[rightIndex]>arr[i]){
                                swap(arr[i],arr[rightIndex]);
                                i=rightIndex;
                        }
                        // all nodes are goot to go:
                        else
                        {
                                return;
                        }
                }
        }
        
        void print()
        {
                for(int i=1;i<=size;i++)
                {
                        cout<<arr[i]<<" ";
                }
                cout<<endl;
                
        }
};
int main(){
        heap p;
        p.insert(50);
        p.insert(55);
        p.insert(53);
        p.insert(52);
        p.insert(54);
        // p.insert(60);
        p.print();
        p.deletetheroot();
        p.print();


}
