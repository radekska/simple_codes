// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()

{ char prev ;

    Tours tours
            { "Tour Ticket Prices from Miami",
              {
                      {
                              "Colombia", {
                              { "Bogota", 8778000, 400.98 },
                              { "Cali", 2401000, 424.12 },
                              { "Medellin", 2464000, 350.98 },
                              { "Cartagena", 972000, 345.34 }
                      },
                      },
                      {
                              "Brazil", {
                              { "Rio De Janiero", 13500000, 567.45 },
                              { "Sao Paulo", 11310000, 975.45 },
                              { "Salvador", 18234000, 855.99 }
                      },
                      },
                      {
                              "Chile", {
                              { "Valdivia", 260000, 569.12 },
                              { "Santiago", 7040000, 520.00 }
                      },
                      },
                      { "Argentina", {
                              { "Buenos Aires", 3010000, 723.77 }
                      }
                      },
              }
            };

    // Unformatted display so you can see how to access the vector elements
    cout<<endl;
    cout<<setw(50)<< tours.title <<endl;
    cout<<endl;

    cout<<setw(20)<<left<<"Country"
        <<setw(20)<<"City";
    cout<<setw(15)<<right<<"Population"
        <<setw(15)<<"Price"<<endl;

    cout<<setfill('-')<<setw(70)<<"\0"<<endl;

    cout<<setfill(' ');

    int i {0};

    for(auto country : tours.countries) {   // loop through the countries
        std::cout << left<<setw(20)<<country.name ;
        i++;
        for(auto city : country.cities) {       // loop through the cities for each country
            if(i!=0) {
                std::cout << setw(20) << left << city.name
                          << setw(15) << right << city.population
                          << setw(15) << city.cost << std::endl;
                i=0;
            }else {
                std::cout << setw(20)<<' '<<setw(20)<<left<<city.name
                          << setw(15)<<right << city.population
                          << setw(15)<<city.cost << std::endl;

            }

        }

    }

    std::cout << std::endl << std::endl;
    return 0;
}
