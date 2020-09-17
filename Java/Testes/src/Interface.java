
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author rafael lima
 */
public class Interface {
    public static void main(String[] args){
        //criando o Frame
        JFrame f= new JFrame();
        //tamanho do frame largura, autra
        f.setSize(400,500);
        //titulo que fica no frame
        f.setTitle("Cadastro de Categorias"); 
        //localização do frame na tela esquerda/direita, baixo/cima
        f.setLocation(20,0);
        //ativa a função de feixar do butao vermelho do frame
        f.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        
        JPanel pl = new JPanel(); 
        pl.setLayout(null);// gerenciador de Layout 
        //cria um label
        JLabel meuLabel = new JLabel("Texto do Label");
        meuLabel.setBounds(10, 10, 60, 20); 
        
        //cria um campo de texto
        JTextField meuCampoTexto = new JTextField(" ");
        meuCampoTexto.setBounds(80, 10, 60, 20); 
        //cria um butão
        JButton meuBotao = new JButton("NomeBotão"); 
        meuBotao.setBounds(150, 10, 100, 20); 
        
        //colando os componentes no painel
        pl.add(meuLabel);
        pl.add(meuCampoTexto);
        pl.add(meuBotao);
        
        //colando painel no frame
        f.add(pl);
        f.setVisible(true);

    }
}
