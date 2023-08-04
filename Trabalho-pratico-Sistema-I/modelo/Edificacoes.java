public class Edificacoes extends Curso {
  private String descricao;

  public Edificacoes(String nome, String descricao){ //Construtor
    super(nome);
    this.setDescricao(descricao);
  }
  public void setDescricao(String descricao){
    this.descricao = descricao;
  }
  public String getDescricao(){
    return this.descricao;
  }
    public String toString() {
    String d = "Edificações[Nome: " + this.getNome() + "Descrição: " + this.descricao + "]";
    return d;
  }
}