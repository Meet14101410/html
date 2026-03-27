import java.util.ArrayList;
import java.util.List;

public class OntarioProvince {
    private String name = "Ontario";
    private String motto = "Ut Incepit Fidelis Sic Permanet";
    private List<String> techHubs = List.of("Toronto", "Waterloo", "Ottawa");

    public void displaySummary() {
        System.out.println("Summary for the Province of " + name);
        System.out.println("-------------------------------------");
        System.out.println("Motto:     " + motto);
        System.out.println("Tech Hubs: " + String.join(", ", techHubs));
        System.out.println("Economy:   Manufacturing, Tech, Finance, Mining");
    }

    public static void main(String[] args) {
        new OntarioProvince().displaySummary();
    }
}
