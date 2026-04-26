import java.util.Scanner;

public class VetorUtils {

   static void CarregarVetor(int[] num, int tam_vet) {
      Scanner dados = new Scanner(System.in);

      for (int i = 0; i < tam_vet; i++) {
         System.out.printf("Informe um número (%d / %d): ", i, tam_vet);
         num[i] = dados.nextInt();
      }
      dados.close();
   }
}
