#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Patient {
private:
    vector<string> symptoms;
    unordered_map<string, vector<string>> diseaseSymptoms;

public:
   
    Patient(const unordered_map<string, vector<string>>& initialDiseaseSymptoms)
        : diseaseSymptoms(initialDiseaseSymptoms) {}


    void addSymptom(const string& symptom) {
        symptoms.push_back(symptom);
    }

   
    vector<string> getDiseases() const {
        vector<string> diseases;

        for (const auto& symptom : symptoms) {
            for (const auto& entry : diseaseSymptoms) {
                if (find(entry.second.begin(), entry.second.end(), symptom) != entry.second.end()) {
                    diseases.push_back(entry.first);
                }
            }
        }

        return diseases;
    }
};

int main() {
    
    unordered_map<string, vector<string>> initialDiseaseSymptoms = {
      {"Common Cold", {"Fever", "Sneezing", "Runny or stuffy nose", "Cough"}}, 
        {"Flu", {"Fever", "Chills", "Cough", "Muscle or body aches"}},
        {"Migraine", {"Severe headache", "Sensitivity to light and sound", "Nausea"}},
        {"Allergies", {"Sneezing", "Itching", "Runny or stuffy nose", "Watery eyes"}},
        {"Pneumonia", {"High fever", "Cough with phlegm", "Shortness of breath", "Chest pain"}},
        {"Urinary Tract Infection", {"Pain during urination", "Frequent urination", "Cloudy urine", "Abdominal pain"}},
        {"Asthma", {"Shortness of breath", "Wheezing", "Coughing", "Chest tightness"}},
        {"COVID-19", {"Fever", "Cough", "Shortness of breath", "Fatigue", "Loss of taste or smell"}},
        {"Diabetes", {"Increased thirst", "Frequent urination", "Unexplained weight loss", "Fatigue", "Blurred vision"}}
      
    };

    Patient patient(initialDiseaseSymptoms);

    cout << "Enter initial symptoms (separated by spaces, enter 'done' when finished): ";
    string symptom;
    while (cin >> symptom && symptom != "done") {
        patient.addSymptom(symptom);
    }

    vector<string> diseases = patient.getDiseases();


    cout << "List of possible diseases:" << endl;
    for (const auto& disease : diseases) {
        cout << "- " << disease << endl;
    }

    return 0;
}
