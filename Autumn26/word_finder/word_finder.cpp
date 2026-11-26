#include <iostream>
#include <string>
#include <vector>


//returns a string based on indices provided.
std::string substring(std::string text, int start, int end) {
    std::string output;
    for(int i = start; i < end; i ++) {
        output = output + text[i];
    }

    return output;    
}



//checks if the string from the grid contains a word, returns -1 if not
int search_word(std::string text, std::string word) {
    for(int i = 0; i <= text.length() - word.length(); i++) {
        if(substring(text, i, i+word.length())==word) {
            return i;
        }
    }

    return -1;

}
 

//converts a column to a string
std::string col_to_string(const std::vector<std::string>& grid, int col) {
    std::string column;
    for(int i = 0; i < grid.size(); i++) {
        column = column + grid[i][col];
    }
    return column;
}

//creates a # grid for the solution vector
void initialise_solution(const std::vector<std::string>& grid, std::vector<std::string>& solution) {
    solution.clear();
    for(int row = 0; row < grid.size(); row++) {
        solution.push_back("#");
        for(int col = 1; col < grid[0].length(); col++) {
            solution[row] = solution[row] + "#";
        }
    }
}

//inserts the word in the ## grid for a column
void add_solution_col(std::vector<std::string>& solution, int col, std::string word, int start) {
    for(int i = 0; i < word.length(); i++) {
        solution[i+start][col] = word[i];
    }
}

void add_solution_row(std::vector<std::string>& solution, int row, std::string word, int start) {
    for(int i = 0; i < word.length(); i++) {
        solution[row][i+start] = word[i];
    }
}

int search_row(const std::vector<std::string>& grid, int row, std::string word) {
    return search_word(grid[row], word);
}

int search_col(const std::vector<std::string>& grid, int col, std::string word) {
    return search_word(col_to_string(grid, col), word);
}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
) {
    initialise_solution(grid, solution);
    int row_index;
    int col_index;
    bool found; 
    for(int i = 0; i < words.size(); i++) {
        found = false;
        
        //check if the word fits
        if(words[i].length() <= grid[0].length()) {

            //search each row
            for(int r = 0; r<grid.size(); r++) {
                row_index = search_row(grid, r, words[i]);
                if(row_index != -1) {
                    found = true;
                    add_solution_row(solution, r, words[i], row_index);
                }
            }

        }

        //check if it fits in the columns
        if(words[i].length() <= grid.size()) {
            
            //search each col
            for(int c = 0; c < grid[0].length(); c++) {
                col_index = search_col(grid, c, words[i]);

                if(col_index != -1) {
                    found = true;
                    add_solution_col(solution, c, words[i], col_index);
                }
            }
        }
        //add to not found if not found
        if(!found) {
            not_found.push_back(words[i]);
        }
    }
}


int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}