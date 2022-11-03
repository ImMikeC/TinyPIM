#ifndef Address_dot_h
#define Address_dot_h 1

//Address class implemented using fixed-length strings
class Address
{
    public:
    //Constructor
        Address();
    //Field accessors
    const char* lastname() const { return lastname_; }
    void lastname(const char*);


    const char* firstname() const { return firstname; }
    void firstname(const char*);

    const char* phone() const { return phone; }
    void phone(const char*);

    const char* address() const { return address; }
    void address(const char*);


private:
    //Enumerate string lengths
    enum { namelen = 16, phonelen = 16, addrlen = 100};

    //Data fields
    char lastname_[namelen];
    char firstname_[namelen];
    char phone_[phonelen];
    char address_[addrlen];
};

#endif // Address_dot_h
