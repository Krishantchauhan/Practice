package test;

class ArmstrongThread extends Thread {
    @Override
    public void run() {
        for (int i = 100; i <= 999; i++) {
            int number = i;
            int result = 0;
            int originalNumber = number;

            while (originalNumber != 0) {
                int remainder = originalNumber % 10;
                result += Math.pow(remainder, 3);
                originalNumber /= 10;
            }

            if (result == number) {
                System.out.println("Armstrong number: " + number);
            }

            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class EvenThread extends Thread {
    @Override
    public void run() {
        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 0) {
                System.out.println("Even number: " + i);
            }

            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Esec {
    public static void main(String[] args) {
        ArmstrongThread armstrongThread = new ArmstrongThread();
        EvenThread evenThread = new EvenThread();

        armstrongThread.start();
        evenThread.start();
    }
}

