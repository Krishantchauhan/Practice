package test;

//Create a thread main and child. The task of main thread is to display armstrong number 
//between 100 to 999 and job for child thread is to display even no. Between 1 to 100 both
//thread sleep for  1000 milliseconds after display one result


//class Arm extends Thread{
//	public void run() {
//		for(int i=100;i<1000;i++) {
//			int num=i;
//			int as=0;
//			while(num>0) {
//				int rem=num%10;
//				as+=rem*rem*rem;
//				num/=10;
//			}
//			if(as==i)
//				System.out.println(as);
//			try {
//				Thread.sleep(100);
//			}
//			catch(Exception e){
//				
//			}
//		}
//	}
//}







class even extends Thread{
	public void run() {
		for(int i=1;i<101;i++) {
			if(i%2==0)
				System.out.println(i);
			try {
				Thread.sleep(10);
			}
			catch(Exception e) {
				
			}
		}
	}
		
}

class B extends Thread {
    public void run() {
        System.out.println("working of yield thread");
        for (int i = 1; i <= 3; i++) {
            System.out.println("child yield " + i);
            if(i==1)
            	Thread.yield();
        }
    }
}


public class Test2 {

	public static void main(String[] args) throws InterruptedException {
//		Arm ob1=new Arm();
		even ob2=new even();
		ob2.start();
//		ob2.join();
			for(int i=100;i<1000;i++) {
				int num=i;
				int as=0;
				while(num>0) {
					int rem=num%10;
					as+=rem*rem*rem;
					num/=10;
				}
				if(as==i)
					System.out.println(as);
				try {
					Thread.sleep(10);
				}
				catch(Exception e){
					
				}
			}
			B ob3=new B();
			ob3.start();
		
//		even ob2=new even();
//		ob2.start();	
			
	}

}


