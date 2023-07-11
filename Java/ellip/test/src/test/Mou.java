package test;

import java.awt.FlowLayout;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

import javax.swing.JFrame;
import javax.swing.JLabel;

//public class Mou extends JFrame implements MouseListener {
//
//		JLabel l1;
//		public Mou() {
//			addMouseListener(this);
//			l1=new JLabel("l1");
//			add(l1);
//			
//			setLayout(new FlowLayout());
//			setSize(400,400);
//			setVisible(true);
//		}
//	
//		public void mouseClicked(MouseEvent e) {
//			int x = e.getClickCount();
//			System.out.println("You CLICKED the mouse " + x + " times.");
//		}
//	
//		public void mousePressed(MouseEvent e) {
//			int x=e.getX();
//			int y=e.getY();
//			l1.setText(x+" "+y);
//		}
//		
//		 public void mouseEntered(MouseEvent e) {
//		    }
//
//		    public void mouseExited(MouseEvent e) {
//		    }
//
//		    public void mouseReleased(MouseEvent e) {
//		    }
//	
//	public static void main(String[] args) {
//		new Mou();
//
//	}
//
//}


public class Mou extends JFrame  {

	JLabel l1;
	public Mou() {
		addMouseListener(new MouseAdapter() {
			public void mousePressed(MouseEvent e) {
				int x=e.getX();
				int y=e.getY();
//				System.out.println(x+ " " + y);
                l1 = new JLabel("Pressed at (" + x + ", " + y + ")");
				add(l1);
				revalidate();
			}
		});
	setLayout(new FlowLayout());
	setSize(400,400);
	setVisible(true);
}

	public static void main(String[] args) {
		new Mou();

	}

}








