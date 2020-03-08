package assignment5;

class Student{
  private String id;
  private String name;
  private double cgpa;
  // constructos
  Student(){
    id = "0";
    name = "unknown";
    cgpa = 0.0;
  }
  Student(String id_, String name_, double cgpa_){
    id = id_;
    name = name_;
    cgpa = cgpa_;
  }
  Student(Student obj){
    id = obj.id;
    name = obj.name;
    cgpa = obj.cgpa;
  }
  // Set id, name, cgpa 
  public void setId(String idNum){
    id = idNum;
  }
  public void setName(String studentName){
    name = studentName;
  }
  public void setcgpa(double grade){
    cgpa = grade;
  }
  // get id, name, cgpa
  public String getId(){
    return id;
  }
  public String getName(){
    return name;
  } 
  public double getcgpa(){
    return cgpa;
  } 
}
public class Assignment5 {
  public static void main(String[] args) {
    Student student = new Student();
    System.out.println(student.getId());
    System.out.println(student.getName());
    System.out.println(student.getcgpa());

    System.out.println();
    Student student2 = new Student("10", "Imran", 3.84);
    System.out.println(student2.getId());
    System.out.println(student2.getName());
    System.out.println(student2.getcgpa());

    System.out.println();
    Student student3 = new Student(student2);
    System.out.println(student3.getId());
    System.out.println(student3.getName());
    System.out.println(student3.getcgpa());

    System.out.println();
    Student student4 = new Student();
    student4.setId("15");
    System.out.println(student4.getId());

    student4.setName("Rahman");
    System.out.println(student4.getName());

    student4.setcgpa(3.89);
    System.out.println(student4.getcgpa());
  }
}

/*
Default Constructor ==>
0
unknown
0.0
Constructor with Arguments ==>
10
Imran
3.84
Constructor with Reference ==>
10
Imran
3.84

15
Rahman
3.89
*/