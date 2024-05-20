import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'dayOfProgrammer' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts INTEGER year as parameter.
     */

        public static int checkGreg(int year){
    if(year%400 == 0){
        return 1;
    }
    else if(year%4 == 0){
        if(year%100 == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}
public static int checkJul(int year){
    if(year%4 == 0){
        return 1;
    }
    else{
        return 0;
    }
}


    public static String dayOfProgrammer(int year) {
    // Write your code here
        if(year <= 1917){
            if(checkJul(year) == 1){
                return "12.09."+year;
            }
            else{
                return "13.09."+year;
            }
        }
        if(year > 1918){
            if(checkGreg(year) == 1){
                return "12.09."+year;
            }
            else{
                return "13.09."+year;
            }
        }
        return "26.09.1918";
    }


}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int year = Integer.parseInt(bufferedReader.readLine().trim());

        String result = Result.dayOfProgrammer(year);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
