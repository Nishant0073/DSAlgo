import java.util.*;
import java.lang.*;

public class Sol{
    public static boolean isNumber(String str)
    {
        int n = str.length();
        for(int i=0;i<n;i++)
        {
            if(str.charAt(i)<'0' || str.charAt(i)>'9')
                return false;
        }
        return true;
    }
    public static boolean isPrime(int num)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
                return false;
        }
        return true;
    }
    public static String reverseStr(int num)
    {
        String str = Integer.toString(num);
        String revStr = "";
        for(int i=str.length()-1;i>=0;i--)
        {
            revStr+=str.charAt(i);
        }
        return revStr;
    }
    public static int getFactorCnt(int num)
    {
        if(num==1)
            return 1;
        else if(num==2)
            return 2;
        else{
            int fact = 2;
            for(int i=2;i<num;i++)
            {
                if(num%i==0)
                    fact++;
            }
            return fact;
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String str[] = sc.nextLine().split(" ");
        int sum = 0;
        for(int i=0;i<str.length;i++)
        {
                if(isNumber(str[i]))
                {
                    sum+=(str[i].charAt(str[i].length()-1))-'0';
                }
        }
        if(sum==0)
        {
            System.out.println(-1);
        }
        else
        {
            if(isPrime(sum))
            {
                System.out.println(sum);
            }
            else
            {
                String revStr = reverseStr(sum);
                int num = Integer.parseInt(revStr);
                if(isPrime(num))
                    System.out.println(num);
                else
                {
                    System.out.println(getFactorCnt(num));
                }
                
            }
        }
    }
}
