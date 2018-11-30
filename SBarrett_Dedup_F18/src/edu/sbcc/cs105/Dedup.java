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
import java.io.*;
import java.util.*;

public class Dedup {
private String filename;
private int ofThisValue;
private int howMany;
ArrayList<Integer> list = new ArrayList<Integer>(); //initiated outside of constructor for global access

	public Dedup(String filename) throws Exception{
		this.filename = filename;
	
		File file = new File(this.filename);
		BufferedReader reader = null;
		try {
		    reader = new BufferedReader(new FileReader(file));
		    String text = null;

		    while ((text = reader.readLine()) != null) {
		        list.add(Integer.parseInt(text));
		    }
		} catch (FileNotFoundException e) {
		    e.printStackTrace();
		} catch (IOException e) {
		    e.printStackTrace();
		} finally {
		    try {
		        if (reader != null) {
		            reader.close();
		        }
		    } catch (IOException e) {
		    }
		}

	}
	
	public void printing() {
		System.out.print(list);
	}
	
	public int howMany(int ofThisValue) {
		this.ofThisValue = ofThisValue;
		int i;
		for(i = 0; i < list.size() - 1; i++) {
			if (list.get(i).equals(this.ofThisValue)) {
				this.howMany++;
			}
		}
		
		return this.howMany;
	}
//	
//	public ArrayList<Integer> returnUnique(){
//		
//	}
}
