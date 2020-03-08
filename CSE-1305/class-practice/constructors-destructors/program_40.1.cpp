// Syntax of Copy Constructor

class <class_name>{
  Access Specifier;
    Data member;
    variable;

  Access Specifier:
    <class_name>(arguments with value/non-value){
      variable = value
    }

    <class_name>(class_name &object){
      variable = object.variable
    }

    return_type fn_name(){
      // print value
    }
};

int main(){
  <class_name> obj_name;
  <class_name> obj_name_2;

  obj_name.fn_name();
  obj_name_2.fn_name(obj_name)
}
