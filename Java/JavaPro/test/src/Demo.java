import java.util.HashMap;
import java.util.Map;

public class Demo {
    public static void main(String[] args) {
//        Student stu = new Student(21);
        Map<Student,Student> map = new HashMap<>();
        map.put(new Student("a",21),new Student("b",21));
        System.out.println(map);
    }
}
