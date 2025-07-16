
 import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

 class newclass {
    public static void main(String[] args) {
        // Create a list of names
        List<String> names = new ArrayList<>();

        // Add names to the list
        names.add("John");
        names.add("Alice");
        names.add("Bob");
        names.add("Eve");
        names.add("Charlie");

        // Sort the list in alphabetical order
        Collections.sort(names);

        // Print the sorted list
        System.out.println("Names Sorted in Alphabetical Order:");
        for (String name : names) {
            System.out.println(name);
        }
    }
}


