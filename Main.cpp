#include <iostream>
using namespace std;

int main(){
    int choice = 0;
    int attemptCount = 0;
    do{  
    cout<<"----------------------Recruitment Managment System----------------------\n\n\n";
   
    
    cout<<"1 - Login as a User"<<endl;
    cout<<"2 - Register as a User"<<endl;
    cout<<"3 - Login as a Company"<<endl;

     if(attemptCount > 0 ) cout<<"\n!!!!!----Please Choose on of the above options Correctly----!!!!!\n";

    cout<<"\nChoose one of the Above Option : ";
    cin>>choice;
    attemptCount++;
    //cout<<"\n--------------------------------------------------------------------\n\n";
    }
    while(choice <=0 or choice >3);
    if(choice == 1){
        cout<<"\nUser Login\n";   
    }
    else if (choice == 2){
        
        cout<<"\n--------------User Registration--------------\n";
    }
    else if (choice == 3){
         cout<<"\nComapany Login\n";
    }
    else "\nSomething Went Wrong\n";
    //do{}while();
    cout<<"\nEnd of Programme\n";
    return 0;
}