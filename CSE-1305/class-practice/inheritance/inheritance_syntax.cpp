class <derived_class> :access specifier(Private/Public) <base_class>{
  Access Specifier:
    data member;
  Access specifier:
    return_type member_fn(){

    }
};

/*
A new class can be derived in one of 2 following methods
1) Private
-> When a class is derived privately, derived class obj has no permission to access even
the public members of base class. In this case the public member of base class can only
be accessed using the public member fn in the derived class.
2) Public
-> If the Base class data member/member fn is public, so they can be easily access from derived
class(also public inheritance) with the help of dot operator, without any member fn or anything else...
If the base class contains Private members and derived class contains public inheritance, then
they can't be allowed directly call, In this case base class must have public member fn which
contains private members. This public member fn can be easily accessed from derived class with
the help of dot operator...
*/
