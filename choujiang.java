
import java.util.Scanner;

class choujiang{
	public static void main(String[] arsg){
		int value = (int)(Math.random() * 90 + 10);
		System.out.println(value);
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("请输入10-99中的一个两位数：");
		int shuru = scan.nextInt();
		
		if (shuru >= 10 && shuru <= 99){
			int shuru_shi = shuru / 10;
			int shuru_ge = shuru % 10;
			int value_shi = value / 10;
			int value_ge = value % 10;
			
			if (shuru_shi == value_shi && shuru_ge == value_ge){
				System.out.println("恭喜获得 10 000$");
			}
			else if(shuru_shi == value_ge && shuru_ge == value_shi){
				System.out.println("恭喜获得 3 000$");
			}
			else if(shuru_shi == value_shi || shuru_ge == value_ge){
				System.out.println("恭喜获得 1 000$");
			}
			else if(shuru_shi == value_ge || shuru_ge == value_shi){
				System.out.println("恭喜获得 500$");
			}
			else{
				System.out.println("没中奖呢");
			}
		}
		else{
			System.out.println("输入错误！");
		}
	}
}