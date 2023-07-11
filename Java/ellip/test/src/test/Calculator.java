package test;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.Action;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JToggleButton;

public class Calculator extends JFrame implements ActionListener {
		JTextField t1,t2;
		JButton btn;
		JLabel res,n1,n2;
		
		public Calculator() {
			n1=new JLabel("NUM 1:");
			t1=new JTextField(5);
			
			n2=new JLabel("NUM 2:");
			t2=new JTextField(5);
			
			btn= new JButton("Sum");
			res=new JLabel("Result");
			
			add(n1);
			add(t1);
			add(n2);
			add(t2);
			add(btn);
			add(res);
			
			btn.addActionListener(this);
			
			setLayout(new FlowLayout());
			setSize(400,400);
			setVisible(true);
		}
	
		public void actionPerformed(ActionEvent e) {
			int num1=Integer.parseInt(t1.getText());
			int num2=Integer.parseInt(t2.getText());
			int sum=num1+num2;
			
			res.setText(String.valueOf(sum));
		}

    public static void main(String[] args) {
        new Calculator();
    }
}


