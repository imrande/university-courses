interface Engine {
    void setHorsePower(int hp);
        int getHorsePower();
        void setMaker(String mk);
        String getMaker();

    class Body {
        private String color;
        void setColor(String color){
            this.color = color;
        }
    }

    class Car extends Body implements Engine {
        int hp;
        String mk;
        Car(int hp, String mk, String color){
            this.hp = hp;
            this.mk = mk;
        }
        @Override
        public void setHorsePower(int hp){
            this.hp = hp;
        }
        @Override
        public int getHorsePower(){
            return hp;
        }
        @Override
        public void setMaker(String mk){
            this.mk = mk;
        }
        @Override
        public String getMaker(){
            return mk;
        }
    }

    public class interfaceSimulation {
        public static void main(String[] args){
            Car c = new Car(500, "Rafi", "red");
            Car pajero = new Car(800, "mitsubishi", "black");
            System.out.println(c.getHorsePower());
        }
    }
}