public class Curso {
  private String nome;//Declaração de atributo
  
  public Curso(String nome) { //Construtor
    super();
    this.setNome(nome);
  }
  public void setNome(String nome) {
    this.nome = nome;
  }
  public String getNome(){
    return this.nome;
  }
  public String toString(){
    String t = "Nome = " + this.nome;
    return t; 
  }
}