/* #include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    // For Loop
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    // For each Loop
    for(int ele:arr){
        cout<<ele<<endl;
    }

    cout<<endl;

    //  While Loop
    int index = 0;
    while(index < size){
        cout<<arr[index]<<endl;
        index++;
    }
    return 0;
}*/










// Taking input from the user in an array


/*   #include<iostream>
using namespace std;

int main(){

    char vowels[5];

    // For Loop
    for(int i=0; i<5; i++){     // Input
        cin>>vowels[i];
    }

    for(int i=0; i<5; i++){     // Output
        cout<<vowels[i]<<" ";
    }

    // For each loop
    

    return 0;
}   */






// Sum of elements in an array

/*  #include<iostream>
using namespace std;

int main(){

    int array[] = {3,10,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum =0;

    for(int i=0; i<size; i++){
        sum+=array[i];
    }
    cout<<sum<<endl;

    return 0;
}   */









// Find the highest value in an array

/*  #include<iostream>
using namespace std;

int main(){

    int array[] = {2,5,7,9,3,12};
    int max = array[0];

    for(int i=1; i<6; i++){
        if(array[i]>array[i+1]){
            max = array[i];
        }
    }
    cout<<max<<endl;

    return 0;
}   */



// To intianlise an array with same value

#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 10);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
}







