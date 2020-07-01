public class ProblemJava {
    public static void main(String[] args) {
        int[] A = {4,5,10,11,6};

        int n;
        n = A.length;

        int i,j;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
            {
                if(A[i] - A[j] == -1)
                    System.out.println(i + "-" + j);
                else if(A[i] - A[j] == 1)
                    System.out.println(j + "-" + i);
            }
    }
}
