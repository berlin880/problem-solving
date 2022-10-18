import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class App {
static int bin(int low,int high,int key,int a[])
{
    while(low<high)
    {
        int mid=(low+high)/2;
        if(a[mid]<=key)
        {
            low=mid+1;
        }
        else
            high=mid;
    }
    return low;
}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
       int n=in.nextInt();
       int a[]=new int[n];
       for(int i=0;i<n;i++)
       {
           a[i]=in.nextInt();
       }
       Arrays.sort(a);
       int q=in.nextInt();
       while(q-->0)
       {
           int k=in.nextInt();
           System.out.println(bin(0,n,k,a));
       }
        
    }
}