#include <iostream>
#include <vector>
#include <string>

class Patient {
private:
    std::vector<std::string> symptoms;

public:
    // Constructor
    Patient(const std::vector<std::string>& initialSymptoms) : symptoms(initialSymptoms) {}

    // Function to add symptoms
    void addSymptom(const std::string& symptom) {
        symptoms.push_back(symptom);
    }

    // Function to get the list of diseases based on symptoms (dummy example)
    std::vector<std::string> getDiseases() const {
        // In a real-world scenario, this would involve a more sophisticated diagnosis algorithm or database
        // Here, we just provide a dummy example for illustration purposes
        std::vector<std::string> diseases;

        for (const auto& symptom : symptoms) {
            if (symptom == "Fever") {
                diseases.push_back("Common Cold");
            } else if (symptom == "Cough") {
                diseases.push_back("Flu");
            } else if (symptom == "Headache") {
                diseases.push_back("Migraine");
            }
            // Add more conditions as needed
        }

        return diseases;
    }
};

int main() {
    // Get initial symptoms from the user
    std::cout << "Enter initial symptoms (separated by spaces): ";
    std::vector<std::string> initialSymptoms;
    
    // Read symptoms from input
    std::string symptom;
    while (std::cin >> symptom) {
        if (symptom == "done") {
            break;
        }
        initialSymptoms.push_back(symptom);
    }

    // Create a patient with initial symptoms
    Patient patient(initialSymptoms);

    // Allow the user to add more symptoms
    std::cout << "Add more symptoms (separated by spaces, enter 'done' to finish): ";
    while (std::cin >> symptom && symptom != "done") {
        patient.addSymptom(symptom);
    }

    // Get the list of diseases
    std::vector<std::string> diseases = patient.getDiseases();

    // Display the results
    std::cout << "List of possible diseases:" << std::endl;
    for (const auto& disease : diseases) {
        std::cout << "- " << disease << std::endl;
    }

    return 0;
}
