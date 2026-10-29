# Left Rotation

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A $left\ rotation$ operation on a circular array shifts each of the array's elements $1$ unit to the left. The elements that fall off the left end reappear at the right end. Given an integer $d$, rotate the array that many steps to the left and return the result. 
 

**Example**  
$d=2$  
$arr = [1, 2, 3, 4, 5]$  

After $2$ rotations, $arr' = [3, 4, 5, 1, 2]$.

**Function Description**  

Complete the $rotateLeft$ function with the following parameters:  

- $int\ d$:  the amount to rotate by  
- $int\ arr[n]$: the array to rotate  

**Returns**  

- $int[n]$: the rotated array



**Input Format**

The first line contains two space-separated integers that denote $n$, the number of integers, and $d$, the number of left rotations to perform. 	
The second line contains $n$ space-separated integers that describe $arr[]$.  

**Constraints**

- $1 \le n \le 10^5$  
- $1 \le d \le n$  
- $1 \le a[i] \le 10^6$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:26:48.410Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    d = d%n;
    
    rotate(arr.begin() , arr.begin() + d, arr.end());
    
    return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = rotateLeft(d, arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/array-left-rotation/problem)