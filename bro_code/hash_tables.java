import java.util.*;

// Data strucuture which stores unique keys to values
// each key/value = entry
// Fast insertion, look up, deletion of key/value pairs
// Great for large data sets
// 
// bucket = index storage location for one or more entries can store multiple entries in case of a collision

// Runtime complexity: Best Case O(1); Worst Case(n)

public class Main {
  public static void main(String args[]) {
    Hashtable<String, String> table = new Hashtable<>(10);
    
    table.put("100", "Spongebob");
    table.put("123", "Patrick");
    table.put("982", "Squidward");
    table.put("617", "Sandy");

    // table.remove(617);

    for(String key: table.keySet()) {
      System.out.println(key.hashCode() + "\t" + key + "\t" + table.get(key));
    }
  }
}