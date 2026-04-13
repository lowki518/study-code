#include <iostream>
#include <string>



class Note {
    private:
        std::string* text;
    public:
        Note(std::string input_text);
        Note(const Note& note);
        ~Note();
        void display();
};


Note::Note(std::string input_text) {
    text = new std::string(input_text);
}

Note::Note(const Note& note) {
    text = new std::string(*note.text);
}

Note::~Note() {
    delete text;
    std::cout << "Memory released\n";
}

void Note::display() {
    std::cout << *text + '\n';
}


int main() {
    Note my_note = Note("test1234");
    Note different_note = Note(my_note);
    my_note.display();
    different_note.display();

}