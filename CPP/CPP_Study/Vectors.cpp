#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

//Add elements to vector
vector<int> initializeVector(int n)
{
	vector<int> a;
	for(int i =1; i <= n; i ++){
		a.push_back(i);
	}
	return a;
}

//Sum of Elements in vector
int sumOfVector(vector<int> v)
{
	int res = 0;
	for (int i = 0; i < v.size(); i++)
	{
		res +=v[i];
	}
	
	return res;
}

//Sum of Odd elements
int sumOfOddElements(vector<int> v)
{
    int result = 0;
    /*Iterator in C ++ is an object used to iterate over elements in data structures such as vector, map, set, list, ... 
    It seems like a pointer that points to the elements in these data structures.*/
    vector<int>::iterator it;
    /*in addition to vector, there are many other data types such as set, map, list, ... in C++. 
    Not all data types can use loops and operators []. Therefore, the iterator was born to provide a general way of iterating
     all of these data types regardless of what type of data it is, how it is stored internally.*/
    for (it = v.begin(); it != v.end(); it++) {
        if( *it %2 !=0){
            result += *it;
        }
    }
    return result;
}

//Resize vector
vector<int> resizeVector(std::vector<int> v, int n)
{
    v.resize(n);
    return v;
}

//Sort vector
vector<int> sortVector(std::vector<int> v)
{
    sort(v, v + v.size());
    return v;
}

//MaxProductOf2ConsecutiveElement
int maxProductOfAdjacentElements(std::vector<int> v)
{
    int max = v[0] * v[1];
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i] * v[i + 1] > max) {
            max = v[i] * v[i + 1];
        }
    }
    return max;
}

//Find longest strings in vector of strings
vector<string> findLongestStrings(std::vector<string> arr)
{
    int max = 0;
    vector<string> result;
    //Find Max Size
    for (int i = 0; i < arr.size(); i++) {
        if (max < arr[i].size()) {
            max = arr[i].size();
        }
    }
    //Add string with max size to vector Result
    for (int i = 0; i < arr.size(); i++) {
        if (max == arr[i].size()) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

//Remove last element
vector<int> removeLastElement(std::vector<int> v)
{
    v.pop_back();
    return v;
}

//first and last element
int sumOfFirstAndLastElement(std::vector<int> v)
{
    return (v.front() + v.back());
}

//remove elements
vector<int> removeElements(std::vector<int> v, int l, int r)
{
    // erase first 2 elements
    v.erase(v.begin(), v.begin() + 2); 
    // erase last 2 elements
    v.erase(v.end() - 2, v.end()); 
    //erase element from i to r
    v.erase(v.begin() + i, v.begin() + r + 1);
    return v;
}

int main(){
    
    system("pause");
    return 0;
}