package Java.Exam.Interface;

interface A{
    void a();
}
interface B extends A{
    void b();
}

class C implements B{
  @Override
  public void a() {
      // TODO Auto-generated method stub
      
  }
  public void b(){}
}

public class Interface {
    
}
