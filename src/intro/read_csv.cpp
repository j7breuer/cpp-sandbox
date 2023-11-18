
// Read in csv using boost tokenizer library
# include "../../libraries/csv-parser/single_include/csv.hpp"

using namespace csv;

int main() {
    // Set to utf-8 encoding
    std::locale::global(std::locale("en_US.UTF-8"));

    // Declare reader
    CSVReader reader("../../data/dialogues.csv");
    int row_num = 0;

    // Loop through rows then fields within rows and stream
    for (CSVRow& row: reader) {

        // Get field vals
        std::string original = row["Original"].get<>();
        std::string translation = row["Translated"].get<>();

        // Print row num, original, and translated text
        std::cout << "=============\nRow " << row_num++ << ": \nOriginal: " << original << "\nTranslation: " << translation << "\n=============\n" << std::endl;

    }

    return 0;

}

