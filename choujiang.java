
import java.util.Scanner;

class choujiang{
	public static void main(String[] arsg){
		int value = (int)(Math.random() * 90 + 10);
		System.out.println(value);
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("������10-99�е�һ����λ����");
		int shuru = scan.nextInt();
		
		if (shuru >= 10 && shuru <= 99){
			int shuru_shi = shuru / 10;
			int shuru_ge = shuru % 10;
			int value_shi = value / 10;
			int value_ge = value % 10;
			
			if (shuru_shi == value_shi && shuru_ge == value_ge){
				System.out.println("��ϲ��� 10 000$");
			}
			else if(shuru_shi == value_ge && shuru_ge == value_shi){
				System.out.println("��ϲ��� 3 000$");
			}
			else if(shuru_shi == value_shi || shuru_ge == value_ge){
				System.out.println("��ϲ��� 1 000$");
			}
			else if(shuru_shi == value_ge || shuru_ge == value_shi){
				System.out.println("��ϲ��� 500$");
			}
			else{
				System.out.println("û�н���");
			}
		}
		else{
			System.out.println("�������");
		}
	}
}