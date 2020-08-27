public class Automovel {
    private String modelo, cor;
    private int ano;
    private boolean estadoMotor;
    
    //metodos
    
    public void ligarMotor()
    {
       this.estadoMotor = true; 
    }
    public void desligarMotor()
    {
        this.estadoMotor = false;
    }
    
    //getters e seters
    
    public String getModelo()
    {
        return this.modelo;
    }
    public void setModelo(String modelo)
    {
        this.modelo = modelo;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public boolean getEstadoMotor() {
        return estadoMotor;
    }

    public void setEstadoMotor(boolean estadoMotor) {
        this.estadoMotor = estadoMotor;
    }
}
