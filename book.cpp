#include<iostream>
using namespace std;

class publication
{
    public:
        char title[20];
        float price;
        
        virtual void get()
        {
            cout<<"enter the book title"<<endl;
            cin>>title;
            cout<<"enter the book price"<<endl;
            cin>>price;
        }
        virtual void display()
        {
            cout<<"book title is:"<<title;
            cout<<"book price is:"<<price;
        }
};

class book:public publication
{
    public:
        int page_count;
        void get()
            {
                cout<<"enter the no of pages"<<endl;
                cin>>page_count;
              
            }
        void display()
        {
            cout<<"book title is:"<<title;
            
        }

};

class tape:public publication
{
	public:	
		float playtime;

		void get()
		{
			cout<<"\nEnter the time in minutes:";
			cin>>playtime;
		}

		void display()
		{
			cout<<"Playing time in tape:"<<playtime<<endl;
		}
};

int main()
{
    publication p;
    publication *ptr;
    p.get();
    p.display();
    book b;
    tape t;

    ptr=&b;
    

    ptr->get();
    ptr->display();
    ptr=&t;
    ptr->get();
    ptr->display();
    return 0;

}