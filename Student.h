class Student {
  // private section
private:
  //    int studentId
  int studentId;
  //    name <- 20 charcters
  char name[20];
  // public section
public:
  //    assignDetails() method declaration
  void assignDetails(int pstudentId, const char pname[]);
  //    display() method declaration
  void display();
};
