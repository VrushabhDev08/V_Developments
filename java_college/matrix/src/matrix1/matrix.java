package matrix1;
import java.util.*;
public class matrix {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
				System.out.print("The matrix multiplication ");
				int row1,col1,row2,col2;
				Scanner sc = new Scanner(System.in);
				System.out.println("Enter the row1");
				row1 = sc.nextInt();
				System.out.println("Enter the col1");
				col1 = sc.nextInt();
				System.out.println("Enter the row2");
				row2 = sc.nextInt();
				System.out.println("Enter the col2");
				col2 = sc.nextInt();
				int a[][] = new int[row1][col1];
				int b[][] = new int[row2][col2];
				int c[][] = new int[row1][col2];
				if(row1 != col2)
				{
					System.out.println("The matrix multiplication cant performed");
					return ;
				}
				else {
					System.out.println("enter the matrix 1");
					for(int i=0;i<row1;i++)
					{
						for(int j=0;j<col1;j++)
						{
							a[i][j]=sc.nextInt();
						}
					}
					System.out.println("enter the matrix 2");
					for(int i=0;i<row2;i++)
					{
						for(int j=0;j<col2;j++)
						{
							b[i][j]=sc.nextInt();
						}
					}
					System.out.println("matrix 1");
					for(int i=0;i<row1;i++)
					{
						for(int j=0;j<col1;j++)
						{
							System.out.print(a[i][j]+" ");
						}
						System.out.println();
					}
					System.out.println(" matrix 2");
					for(int i=0;i<row2;i++)
					{
						for(int j=0;j<col2;j++)
						{
							System.out.print(b[i][j]+" ");
						}
						System.out.println();
					}
					
					System.out.println("the matrix multiplication is");
					for(int i=0;i<row1;i++)
					{
						for(int j=0;j<col2;j++)
						{
							c[i][j]=0;
							for(int k=0;k<col1;k++)
							{
								c[i][j]+=a[i][k]*b[k][j];
							}
						System.out.print(c[i][j]+" ");
						}
						System.out.println();
					}
					
				}
				
	}

}
