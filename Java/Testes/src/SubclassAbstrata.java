public abstract class SubclassAbstrata extends Abstrata{
    //em uma annotation conhecida como @Override, significando que estamos sobrescrevendo o método da superclasse
    @Override
    public void imprime(){
        System.out.println("teste realizado");
    }
}
