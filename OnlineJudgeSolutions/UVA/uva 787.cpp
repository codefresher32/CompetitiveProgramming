import java.util.Scanner;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        BigInteger com=new BigInteger("-999999");
        while(sc.hasNext()){
            int id=1;
            BigInteger dp[]=new BigInteger[500];
            while(true){
                BigInteger a=sc.nextBigInteger();
                if(a.equals(com)) break;
                dp[id++]=a;
            }
            BigInteger mx=new BigInteger("-99999");
            for(int i=1;i<id;i++){
                BigInteger one=new BigInteger("1");
                for(int j=i;j<id;j++){
                    one=one.multiply(dp[j]);
                    int ck=mx.compareTo(one);
                    if(ck==-1) mx=one;
                }
            }
            System.out.println(mx);
        }
    }
}
