public class largestnumber {
    public static void main(String args[]) {
        int a[] = { 5, 1, 6, 7, 3, 9, 2 };
        int l = a[0];
        for (int i = 1; i < 7; i++) {
            if (l < a[i]) {
                l = a[i];
            }

        }
        System.out.println(l);
    }

}
