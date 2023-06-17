
public class palindrome {

    public static boolean isPalindrome(String s1) {
        String rev = "";

        boolean ans = false;

        for (int i = s1.length() - 1; i >= 0; i--) {
            rev = rev + s1.charAt(i);
        }

        if (s1.equals(rev)) {
            ans = true;
        }
        return ans;
    }

    public static void main(String[] args) {

        String s1 = "abba";

        s1 = s1.toLowerCase();
        boolean S = isPalindrome(s1);
        System.out.println(S);
    }
}
