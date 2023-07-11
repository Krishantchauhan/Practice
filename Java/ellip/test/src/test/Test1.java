package test;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Test1 extends JFrame implements ActionListener   {
	JButton btn;
	JTextField n1,n2;
	JLabel res,l1,l2;
	public Test1(){	
		l1=new JLabel("num1");
		n1=new JTextField(5);
		
		l2=new JLabel("num2");
		n2=new JTextField(5);
		
		btn=new JButton("sum");
		res=new JLabel("res");
		
		add(l1);
		add(n1);
		add(l2);
		add(n2);
		add(btn);
		add(res);
		
		btn.addActionListener(this);
		
		setLayout(new FlowLayout());
		setSize(500,500);
		setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e) {
		int num1=Integer.parseInt(n1.getText());
		int num2=Integer.parseInt(n2.getText());
		int sum=num1+num2;
		res.setText(String.valueOf(sum));
	}
	
	public static void main(String[] args) {
		new Test1();
		System.out.print("krishna");
	}
}
