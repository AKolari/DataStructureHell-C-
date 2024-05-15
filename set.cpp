//Lab 19
#include <iostream>
#include<string>
using namespace std;


template <class T>
class setClass{
public:
    int getLength();//Gets the length data of the setClass. length is the number of items in the array set
    T *getPointer();//The set contains an array of type T called set. This returns a pointer to a dynamic array which is identical to our set 
    void setDynArr();//This function creates the dynamic array
    void destroyDynArr();//This function deletes the dynamic array
    void setSet();//This function adds an element to the set.
private:
    T set[100];
    int length;
    T *dynArr;
   
};




int main(){
    setClass<int> intTest;//Here, we create our first set called intTest. Test for ints
    setClass<char> charTest;//Here, we create our second set called charTest. Test for chars
    //Testing adding stuff
    charTest.setSet();
    charTest.setSet();
    charTest.setSet();
    intTest.setSet();
    intTest.setSet();
    intTest.setSet();
    
    charTest.setDynArr();//Create dynamic array that contains the items in the set
    char *x=charTest.getPointer();//Initialzie the pointer to that array
    for(int i=0; i<charTest.getLength(); i++){//Use a for loop to output everyting in that array
        cout<<*(x+i)<<endl;
    }
    charTest.destroyDynArr();//Destroy the dynamic array
    
    //Repeat for int version
    intTest.setDynArr();
    int *y=intTest.getPointer();
    for(int i=0; i<intTest.getLength(); i++){
        cout<<*(y+i)<<endl;
    }
    intTest.destroyDynArr();
    
    return 0;
}

//Length getter
template <class T>
int setClass<T>:: getLength(){
  
    return length;
    
}


//pointer getter
template <class T>
T *setClass<T>:: getPointer(){
   
    return dynArr;
};

//Create dynamic array, which is equal to the array called set
template <class T>
void setClass<T>:: setDynArr(){
    dynArr=new T[length];
    dynArr=&set[0];//dynArr points to set
    }
//Delete dynArr
template <class T>
void setClass<T>:: destroyDynArr(){
    dynArr=NULL;
    delete dynArr;
    }
    
    //Add items to the set
template<class T>
void setClass<T>:: setSet(){
    T x;
    bool inSet=false;//We use this bool to see if the stuff is in the set
  
        cout<<"What will you add to the set?\n";
        cin>>x;
        //the for loop will check if x is in the set, and make inSet true if it is
    for(int i=0; i<length; i++){
        if(x==set[i]){
            inSet=true;
        }else{inSet=false;}
        
    }
    //If it is, say invalid. Otherwise, add to the set.
        if(inSet==true){
            cout<<"Invalid. Already in set.\n";
        }else{
            set[length]=x;
            length++;
            
        }
    
   
}
