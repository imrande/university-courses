// Explain finally with an example. 

A finally block is a block of code that will be executed after a try/catch block has
completed and before the code following the try/catch block. The finally block will execute
whether or not an exception is thrown. If an exception is thrown, the finally block will
execute even if no catch statement matches the exception.

import java.io.*;

class Test {
	public static void main(String[] args){
		BufferedWriter bout = null;
		
		try {
			bout = new BufferedWrite(new FileWriter("c:/a.txt"));
			bout.write("Hello!");
		} catch (IOException e){
			System.out.println("Error! " + e);
		} finally {
			bout.close();
		}
	}
}

In the above example, if any IOException occurs while executing the code in the try
block, then after executing the code in the catch block, the file will be closed (this
instruction is given in the finally block). If any other type of exceptions occur which is not
handled in the catch block (such as SecurityException), then still the code in the finally
block will execute before the program terminates. If all the statements in the try block
executes successfully, then again, the code in the finally block will execute.