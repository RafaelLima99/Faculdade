import java.awt.Component;
import javax.swing.*;

public class InputDialog {
    private static Component janela;
    public static void main(String[] args){
        String nome = JOptionPane.showInputDialog(janela,"Seu número de matricula","Linguagem de Proramação", JOptionPane.QUESTION_MESSAGE);
    }
}
