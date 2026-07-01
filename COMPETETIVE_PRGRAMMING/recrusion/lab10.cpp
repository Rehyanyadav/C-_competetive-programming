#include<iostream>


using namespace std;


void TOH(int n , char A , char  B , char C){
    if (n == 1)
    {
        cout<< "Move disk 1 from rod "<< A << " to rod "<< C << endl;
        return ;
    }
    TOH(n-1 , A , C , B);
    cout<< "Move disk "<< n << " from rod "<< A << " to rod "<< C << endl;
    TOH(n-1 , B , A , C);
}


int main(){

    
int n = 3;
    TOH(n , 'A' , 'B' , 'C');




}