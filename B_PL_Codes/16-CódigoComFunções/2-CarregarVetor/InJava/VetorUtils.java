import java.util.Scanner;

public class VetorUtils {

   static void CarregarVetor(int[] num) {
      Scanner dados = new Scanner(System.in);

      for (int i = 0; i < num.length; i++) {
         System.out.printf("Informe um número (%d / %d): ", i, num.length);
         num[i] = dados.nextInt();
      }
      dados.close();
   }
}
