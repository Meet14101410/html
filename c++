#include <iostream>
#include <string>
#include <vector>

struct OntarioProfile {
    std::string name = "Ontario";
    std::string capital = "Toronto";
    long long population_est = 16000000;
    std::vector<std::string> major_cities = {"Toronto", "Ottawa", "Mississauga", "Hamilton", "London"};
};

int main() {
    OntarioProfile ont;
    
    std::cout << "--- Province Profile: " << ont.name << " ---\n";
    std::cout << "Capital City: " << ont.capital << "\n";
    std::cout << "Population:   ~" << ont.population_est << "\n";
    std::cout << "Major Hubs:   ";
    for(size_t i = 0; i < ont.major_cities.size(); ++i) {
        std::cout << ont.major_cities[i] << (i == ont.major_cities.size()-1 ? "" : ", ");
    }
    std::cout << std::endl;
    
    return 0;
}
