import java.util.ArrayList;

public class Instituicao{
  private ArrayList<Curso> Cursos;

  public Instituicao(){ //Contrutor da classe
    super(); 
    Cursos = new ArrayList<Curso> ();
  }
  public void adicionar(Curso curso){ 
    Cursos.add(curso);
  }
  public int tamanho(){
    return this.Cursos.size();
  }
  public Curso mostrarCurso(int CursoX){
    return Cursos.get(CursoX);
    }
}