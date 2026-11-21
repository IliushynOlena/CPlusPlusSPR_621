#include <iostream>
using namespace std;

struct Movie
{
    int id;
    char name[50];
    char director[50];
    char genre[50];
    float rating;
    float price;
};

void Show(Movie &m)
{
    cout << "\t\tId: " << m.id << endl;
    cout << "\t\tName: " << m.name << endl;
    cout << "\t\tDirector: " << m.director << endl;
    cout << "\t\tGenre: " << m.genre << endl;
    cout << "\t\tRating: " << m.rating << endl;
    cout << "\t\tPrice: " << m.price << "$" << endl;
}
void SearchByName(Movie movies[],int size, char name [])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].name, name) == 0)
        {
            Show(movies[i]);
        }
    }
}
void SearchByDirector(Movie movies[], int size, char dir[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].director, dir) == 0)
        {
            Show(movies[i]);
        }
    }
}
void SearchByGenre(Movie movies[], int size, char genre[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            Show(movies[i]);
        }
    }
}
void SearchTheMostPopulatInGenre(Movie movies[], int size, char genre[])
{
    float max = 0;
    int max_index;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            if (movies[i].rating > max)
            {
                max = movies[i].rating;
                max_index = i;
            }
        }
    }
    Show(movies[max_index]);
}
void ChangeMovie(Movie movies[], int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (movies[i].id == id) {
            Show(movies[i]);
            cout << "Id : "; cin >> movies[i].id;
            cout << "Name : "; cin >> movies[i].name;
            cout << "Director : "; cin >> movies[i].director;
            cout << "Genre : "; cin >> movies[i].genre;
            cout << "Rating : "; cin >> movies[i].rating;
            cout << "Price : "; cin >> movies[i].price;
        }
    }
}
int main()
{
    const int size = 5;
    Movie movies[size] = {
         {0, "Back to future","Tom Kruise", "Fantasy", 8.2, 102.99},
        {1, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 250.0},
        {2, "The Matrix", "Lana Wachowski", "Action", 8.7, 200.0},
        {3, "Interstellar", "Christopher Nolan", "Sci-Fi", 8.6, 300.0},
        {4, "The Godfather", "Francis Ford Coppola", "Crime", 9.2, 180.0}
    };
  
    int num;
    char name[50];
    do
    {
        cout << "----------- Menu -------------" << endl;
        cout << "Search by name                       [1]" << endl;
        cout << "Search by director                   [2]" << endl;
        cout << "Search by genre                      [3]" << endl;
        cout << "Search most popular movie in genre   [4]" << endl;
        cout << "Show all                             [5]" << endl;
        cout << "Change all                           [6]" << endl;
        cout << "Exit                                 [0]" << endl;
        cin >> num;
        cin.ignore();
        switch (num)
        {
        case 1:
            cout << "Enter film name : ";
            cin.getline(name, 50); //cin >> name;
            SearchByName(movies, size, name);
            break;
        case 2:
            cout << "Enter film director : ";
            cin.getline(name, 50); 
            SearchByDirector(movies, size, name);
            break;
        case 3:
            cout << "Enter film genre : ";
            cin.getline(name, 50); 
            SearchByGenre(movies, size, name);
            break;
        case 4:
            cout << "Enter film genre : ";
            cin.getline(name, 50);
            SearchTheMostPopulatInGenre(movies, size, name);
            break;
        case 5:
            for (int i = 0; i < size; i++)
            {
                Show(movies[i]); cout << endl;
            }
            break;
        case 6:
            ChangeMovie(movies, size, 2);
            break;
        case 0:
            cout << "Goodbye" << endl;
            break;
        default:
            break;
        }







    } while (num != 0);
    

}
