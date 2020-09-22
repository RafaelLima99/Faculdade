/**
 *
 * @author Rafael Lima
 */
public class ToBinario {
    public static void main(String[] args){
        int[] lista = {6, 8, -3, 2, -5};
        for(int i=0; i<5; i++){
            
            if(lista[i] < 0){
                lista[i] = 0;
            }
            
            else if(lista[i] >=0){
                lista[i] = 1;
            } 
        }
        
        for(int i=0; i<5; i++){
            System.out.println(lista[i]);
        }
    }
}
