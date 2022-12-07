#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class MangaWorm {
private:
	fstream read_manga;
protected:
	static string manga_avail[10];
	bool manga_fee;
public:
	MangaWorm()
	{
	}
	void disp_manga()
	{
		for (string x : manga_avail)
		{
			cout << x << endl;
		}
	}
};
string MangaWorm::manga_avail[] = {};
class ComicWorm {
private:
	fstream read_comic;
protected:
	static string comic_books[10];
	bool comic_fee;
public:
	ComicWorm()
	{

	}

};
string ComicWorm::comic_books[] = {};
class StudyGeek {
private:
	fstream read_book;
protected:
	static string course_books[10];
	bool books_fee;
public:
	StudyGeek()
	{

	}
};
string StudyGeek::course_books[] = {};
class Freader:virtual public MangaWorm, virtual protected ComicWorm, virtual protected StudyGeek {
protected:
	bool freader_fee;
};

class Store :virtual public MangaWorm, virtual protected ComicWorm, virtual protected StudyGeek, virtual protected Freader {
private:
	fstream view_books; 
public:
	Store()
	{
		
		books_fee = true;
		comic_fee = true;
		manga_fee = true;
		freader_fee = false;
		view_books.open("Manga.txt", ios::in);
		for(int i=0; !view_books.eof(); i++)
		{
			getline(view_books, manga_avail[i]);
		}
		view_books.close();	
		view_books.open("Comics.txt", ios::in);
		for (int i = 0; !view_books.eof(); i++)
		{
			getline(view_books, comic_books[i]);
		}
		view_books.close();
		view_books.open("Course.txt", ios::in);
		for (int i = 0; !view_books.eof(); i++)
		{
			getline(view_books, course_books[i]);
		}
		view_books.close();
	}
	
};

int main(int argc, char *argv[])
{
	Store yagami;
	MangaWorm manga_reader; 
	ComicWorm comic_reader; 
	StudyGeek nerd;

}
