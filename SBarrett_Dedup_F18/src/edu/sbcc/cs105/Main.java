/**
 * CS 105 Theory and Practice I
 * CRN: 39626
 * Assignment: Dedup
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author Spencer Barrett
 */
package edu.sbcc.cs105;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String y = "small.txt";
		try {
			Dedup tst = new Dedup(y);
			tst.printing();
			System.out.print("\n" + tst.howMany(19));
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
