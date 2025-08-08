public class Q3479 {
    // 要分块，先不写了
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        int count = baskets.length;
        for(int i=0;i<fruits.length;i++){
            for(int j=0;j<baskets.length;j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j] = 0;
                    count--;
                    break;
                }
            }
        }
        return count;
    }
}
