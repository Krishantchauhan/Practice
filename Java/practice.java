/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class practice {
    public static void main(String[] args) throws java.lang.Exception {
        // A s1 = new A("Krishant",29);
        // s1.show();

        // B b1 = new B();
        // b1.m1("Krishant",29);
        // b1.show();

        // even E1=new even();
        // E1.sum();

        // Animal a1=new Animal();
        // a1.eat();
        // a1.sleep();
        // Bird b2=new Bird();
        // b2.eat();
        // b2.sleep();
        // b2.fly();

        // cyclic c1=new cyclic();
        // c1.sum(12345);

        CalcArea ca = new CalcArea();
        ca.Area(4);
        ca.Area(4, 10);
        ca.Area(4.8);

    }
}

class A {
    String name;
    int roll_no;

    A(String name, int roll_no) {
        this.name = name;
        this.roll_no = roll_no;
    }

    void show() {
        System.out.println("Name " + name + " Roll No " + roll_no);
    }
}

class B {
    String name;
    int roll_no;

    void m1(String name, int roll_no) {
        this.name = name;
        this.roll_no = roll_no;
    }

    void show() {
        System.out.println("Name " + name + " Roll No " + roll_no);
    }
}

class even {

    void sum() {
        int num = 12345;
        int temp = num, sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            if (rem % 2 == 0)
                sum += rem;
            temp /= 10;
        }
        System.out.println(sum);
    }

}

// Create a class named as “Animal” which has methods eat() and sleep(). Create
// a child class of animal named as “Bird” and override the parent class methods
// such that define a new method named as fly() in the same class. Create an
// instance of Animal Class and invoke eat() and sleep(). Create an instance of
// Bird Class and invoke eat(), sleep() and fly().

class Animal {
    void eat() {
        System.out.println("Eating");
    }

    void sleep() {
        System.out.println("Sleeping");
    }
}

class Bird extends Animal {

    void eat() {
        System.out.println("Bird is eating");
    }

    void sleep() {
        System.out.println("Bird is Sleeping");
    }

    void fly() {
        System.out.println("Bird is flying");
    }
}

class cyclic {
    int num;

    void sum(int num) {
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            int rem = temp % 10;
            sum = sum + rem * rem;
            temp /= 10;
        }
        System.out.println(sum);
    }
}

class CalcArea {
    void Area(int s) {
        int a = s * s;
        System.out.println("Area of Square " + a);
    }

    void Area(int l, int b) {
        int a = l * b;
        System.out.println("Area of Rectangle " + a);
    }

    void Area(double r) {
        double a = 2 * 3.14 * r;
        System.out.println("Area of Circle " + a);
    }
}
