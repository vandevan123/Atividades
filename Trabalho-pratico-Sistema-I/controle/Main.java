import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner Entrada = new Scanner(System.in);
    Instituicao campus = new Instituicao();

    while (true) {
      System.out.println("Escolha: \n [1] Informatica \n [2] Edificações");
      int escolha = Entrada.nextInt();
      Entrada.nextLine();
      
      if (escolha == 1){
        
      System.out.println("Digite seu nome: ");
      String nome = Entrada.nextLine();
        
      System.out.print("Digite Descrição: ");
      String descricao = Entrada.nextLine();
        
        Informatica info = new Informatica(nome, descricao);

        campus.adicionar(info);
        
        for(int i = 0; i < campus.tamanho(); i++){
          System.out.println(campus.mostrarCurso(i));  
          System.out.println("Posicao: " + i);
        }
      }
        
      else if (escolha == 2){
        System.out.println("Digite seu nome:");
        String nome = Entrada.nextLine();
        
        System.out.print("Digite Descrição:");
        String descricao = Entrada.nextLine();
        
        Edificacoes edif = new Edificacoes(nome, descricao);
        
        campus.adicionar(edif);
        
        for(int i = 0; i < campus.tamanho(); i++){
          System.out.println(campus.mostrarCurso(i));  
          System.out.println("Posicao: " + i);
  
        } 
      }
    }
  }
}