import java.io.*;
class IO{
	public static void main(String args[]){
		System.out.println("Hello");
		try {
		  //  FileOutputStream fos=new FileOutputStream("data.txt");
		  //  String s="1234";
		  //  fos.write(s.getBytes());
		  //  fos.close();
		  //  FileInputStream fis=new  FileInputStream("data.txt");
		  //  for(int i=0;i<4;i++){
		  //      System.out.println((char)fis.read());
		  //  }
		  //  fis.close();
		  
		  
		  //FileWriter fw=new FileWriter("data.txt");
		  //fw.write("4321");
		  //fw.close();
		  //FileReader fr=new FileReader("data.txt");
		  //BufferedReader br=new BufferedReader(fr);
		  //System.out.println(br.readLine());
		  //br.close();
		  //for(int i=0;i<4;i++){
		  //    System.out.println((char)fr.read());
		  //}
		  //fr.close();
		  
            
        Writer fw=new FileWriter("data.txt");
        PrintWriter pw=new PrintWriter(fw,true);
        pw.println("abcd");
		    pw.close();
		    fw.close();
    
		} catch(Exception e) {
		}
		
	}
}
