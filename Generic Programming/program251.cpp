#include<iostream>
using namespace std;

template <class T>
class ArrayX{

    public:
        T *arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        T Addition();        
};

template <class T>
ArrayX<T> :: ArrayX(int no){        // <T> : It tells that its not array class but its a generic class
    iSize = no;
    arr = new T [iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX(){
    delete [] arr;
}

template <class T>
void ArrayX<T> :: Accept(){
    int i = 0;
    cout<<"Enter the elements: \n";

    for(int i = 0; i < iSize; i++){
        cin>>arr[i];
    }
}

template <class T>
void ArrayX<T> :: Display(){
    int i = 0;
    cout<<"Elements of array are: \n";

    for(int i = 0; i < iSize; i++){
        cout<<arr[i]<<endl;
    }
}

template <class T>
T ArrayX<T> :: Addition(){
    T iSum = 0;
    for(int i = 0; i < iSize; i++){
        iSum += arr[i];
    }
    return iSum;
}


int main(){

    // ArrayX <int>aobj(5);
    // ArrayX <float>aobj(5);

   // Working with float array
    ArrayX<float> *floatObj = new ArrayX<float>(5);

    floatObj->Accept();
    floatObj->Display();
    cout << "Addition of float elements is: " << floatObj->Addition() << endl;

    delete floatObj; // Properly delete the object

    // Working with int array
    ArrayX<int> *intObj = new ArrayX<int>(5);

    intObj->Accept();
    intObj->Display();
    cout << "Addition of int elements is: " << intObj->Addition() << endl;

    delete intObj; // Properly delete the object

    return 0;
}