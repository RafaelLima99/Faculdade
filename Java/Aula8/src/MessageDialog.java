//Blibliotecas para trbalhar com interface
import java.awt.Component;
import javax.swing.*;


public class MessageDialog {
    //atributo componet que recebe o nome janela
    private static Component janela;
    public static void main(String[] args){
       JOptionPane.showMessageDialog(janela, "Cuidado com as prova", "linguagem de proramação", JOptionPane.WARNING_MESSAGE);
    }
}
