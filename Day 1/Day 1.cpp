#include<iostream>
#include<vector>
using namespace std;
void inputArry(int arr[],int size);
vector<int> twoSum(int arr[], int size, int target);

int main()
{
    //This is lesson 1 of C++
    int size,target;
    int arr[100];
    cout<<"Intput size of array:";
    cin>>size;
    while(size <= 0 || size > 100)
    {
        if(size <= 0 || size > 100)
        {
            cout << "Invalid size. Please enter a size between 1 and 100." << endl;
            cout<<"Intput size of array:";
            cin>>size;
        }
    }
    inputArry(arr, size);
    cout << "Input target sum:"; 
    cin>> target;
    vector<int> result = twoSum(arr, size, target);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

void inputArry(int arr[],int size)
{
    for(int i=0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}
vector<int> twoSum(int arr[], int size, int target)
{
   for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if ((arr[i] + arr[j]) == target){
                    return {i, j};
                }
                
            }
        }
        return{};
}