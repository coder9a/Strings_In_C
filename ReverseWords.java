/**
 * Given a String S, reverse the string without reversing its individual words.
 * Words are separated by dots.
 *
 * Example 1:
 *
 * Input:
 * S = i.like.this.program.very.much
 * Output: much.very.program.this.like.i
 * Explanation: After reversing the whole
 * string(not individual words), the input
 * string becomes
 * much.very.program.this.like.i
 * Example 2:
 *
 * Input:
 * S = pqr.mno
 * Output: mno.pqr
 * Explanation: After reversing the whole
 * string , the input string becomes
 * mno.pqr
 */

class ReverseWords
{
//    --------------------------------------------------------------------
//    Time Complexity = O(n^2)
//    static void reverseString(char []word, int start, int end)
//    {
//        char temp;
//        while(start<=end)
//        {
//            temp = word[start];
//            word[start] = word[end];
//            word[end] = temp;
//            start++;
//            end--;
//        }
//    }
//    static char[] reverseWords(char[] str)
//    {
//       int i=0;
//       for (int j=0;j<str.length;j++)
//       {
//           if(str[j]==' ')
//           {
//               reverseString(str,i,j);
//               i=j+1;
//           }
//       }
//       // For last string
//       reverseString(str,i,str.length-1);
//       // For entire string
//        reverseString(str,0,str.length-1);
//        return str;
//    }
//    public static void main(String[] args)
//    {
//        String str = "i like this program very much";
//        str = str + " ";
//        int n = str.length();
//        char [] p = reverseWords(str.toCharArray());
//        String s1 = String.valueOf(p);
////        System.out.println(s1);
//        System.out.println(s1.trim());
//    --------------------------------------------------------------------
//    Time Complexity = O(n)
//    Space Complexity = O(n)
//    public static void main(String[] args)
//    {
//        String str = "i like this program very much";
//        String[] str2 = str.split(" ");
//        String str3 = "";
//        for(int i=str2.length-1;i>=0;i--)
//        {
//            str3 +=  str2[i] + " ";
//        }
////        System.out.println(str3);
//        System.out.println(str3.trim());
//    --------------------------------------------------------------------
//    Time Complexity = O(n)
//    Space Complexity = O(1)
    static String[] reverseWord(String[]word, int len)
    {
        String temp;
        int i=0, j = len-1;
        while(i<j)
        {
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return word;
    }
    public static void main(String[] args)
    {
        String str = "i.like.this.program.very.much";
        String[] words = str.split("\\.");
        words = reverseWord(words, words.length);
        str = String.join(".",words);
        System.out.println(str);
    }
}
