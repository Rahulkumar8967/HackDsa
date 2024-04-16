package JavaCoding;

public class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }

    class Dog extends Animal {
        void bark() {
            System.out.println("Animal is barking");
        }
    }

    public static void main(String[] args) {
        Dog g = new Animal().new Dog();
        g.bark();
        g.eat();
    }
}
