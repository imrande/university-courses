class Student {
    String name;
    String id;
    static double stacc = 0;

    public Student(String n, String id){
        name = n;
        this.id = id;
    }

    void deposit(double b){
        stacc += b;
    }
    double getStAccount(){
        return stacc;
    }
}

public class AccountSimulation {
    public static void main(String[] args){
        Student ob1 = new Student("Kamal", "101");
        Student ob2 = new Student("Rahim", "99");

        ob1.deposit(5000);
        ob2.deposit(10000);
        ob1.deposit(1200);
        System.out.println(ob2.getStAccount());
    }
}