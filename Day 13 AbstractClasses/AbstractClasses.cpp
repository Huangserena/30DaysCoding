// Write your MyBook class here
class MyBook: public Book{
    //   Class Constructor
    //private:
        int price;
    public:
    MyBook(string title, string author, int price): Book(title, author){
        this->price = price;
    }
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    void display(){
        cout << "Title: "<< this->title << endl;
        cout << "Author: "<< this->author << endl;
        cout << "Price: " << this->price << endl;
    }
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
    
// End class
};