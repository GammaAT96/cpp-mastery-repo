#include<iostream>
int main(){
    int elephent_count;
    int lion_count{};//initialize to zero
    int dog_count{10};//initialize to 10
    int cat_count{15};//use for safety and type checking
    int cakes_count(12);//use it only during contructor calls
    int bke_count = 6;//use it when you are sure
    std::cout<<"size of dog_count: "<<sizeof(dog_count)<<std::endl;
    std::cout<<"size of lion_count: "<<sizeof(lion_count)<<std::endl;
    //int value1 {10};
    int value2 {-200};
    signed int value1 {10};
    //unsigned int value2 {-200};
    std::cout<<"value1: "<<value1<<std::endl;
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    std::cout << "--- Short Types ---\n";
    std::cout << "short_var: " << short_var << "\n";
    std::cout << "short_int: " << short_int << "\n";
    std::cout << "signed_short: " << signed_short << "\n";
    std::cout << "signed_short_int: " << signed_short_int << "\n";
    std::cout << "unsigned_short_int: " << unsigned_short_int << "\n";
    std::cout << "Size of short: " << sizeof(short) << " Bytes\n\n";

    // Int (4 Bytes)
    int int_var{55};
    signed var{66}; // shorthand
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    std::cout << "--- Int Types ---\n";
    std::cout << "int_var: " << int_var << "\n";
    std::cout << "signed var: " << var << "\n";
    std::cout << "signed_int: " << signed_int << "\n";
    std::cout << "unsigned_int: " << unsigned_int << "\n";
    std::cout << "Size of int: " << sizeof(int) << " Bytes\n\n";

    // Long (4 or 8 Bytes)
    long long_var{88};
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    std::cout << "--- Long Types ---\n";
    std::cout << "long_var: " << long_var << "\n";
    std::cout << "long_int: " << long_int << "\n";
    std::cout << "signed_long: " << signed_long << "\n";
    std::cout << "signed_long_int: " << signed_long_int << "\n";
    std::cout << "unsigned_long_int: " << unsigned_long_int << "\n";
    std::cout << "Size of long: " << sizeof(long) << " Bytes\n\n";

    // Long Long (8 Bytes)
    long long long_long{888};
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "--- Long Long Types ---\n";
    std::cout << "long_long: " << long_long << "\n";
    std::cout << "long_long_int: " << long_long_int << "\n";
    std::cout << "signed_long_long: " << signed_long_long << "\n";
    std::cout << "signed_long_long_int: " << signed_long_long_int << "\n";
    std::cout << "unsigned_long_long_int: " << unsigned_long_long_int << "\n";
    std::cout << "Size of long long: " << sizeof(long long) << " Bytes\n";

    return 0;




}
    








