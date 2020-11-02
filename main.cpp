
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int cutOffRank(int arr[], int n, int cutOff){
    vector<int>scores;
    int size = n;
    for(int i = 0; i < n; i++){
        scores.push_back(arr[i]);
        cout << scores[i] << " ";
    }
    int rank = 0;
    int count = 0;
    for(int i = 0; i < n-1; i++){
       while (rank <= cutOff) {
           if(scores[i] == scores[i + 1]) {
               count++;
               cout << "1st Condition: The rank is: " << rank << endl;
           } else {
                rank++;
               if(rank > cutOff){
                   count--;
               }
               count++;
               cout << "2st Condition: The rank is: " << rank << endl;
           }
       }
    }
    cout << "Players that met rank: " << count << endl;

}

int main() {
    int players;
    int cutOff;

    //test 2
    int scores[] = { 25, 50, 50, 100};
    sort(begin(scores), end(scores), greater<int>());
    cout << "Scores are: ";
    for(int const &i: scores){
        cout <<  i << " " << endl;
    }
    cutOffRank(scores, 4, 3);


    //test 2
    int scores2[] = {45, 33, 80, 65, 50, 63, 73};
    sort(begin(scores2), end(scores2), greater<int>());
    for(int const &i: scores2){
        cout <<  i << " " << endl;
    }
    cutOffRank(scores2,  7, 5);
    return 0;
}
