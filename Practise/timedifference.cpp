#include <iostream>

class base_class {
protected:
  int time1[3];

public:
  void get_data();
};

class derived_class : public base_class {
private:
  friend class time_diff;
  int time2[3] = {2, 30, 15};

public:
  void add_time();
};

class time_diff {
private:
  int time_diff[3];

public:
  void get_timediff(derived_class objd);
  void display();
};

void base_class::get_data() {
  std::cout << "Enter hour, minute and second: ";
  std::cin >> time1[0] >> time1[1] >> time1[2];
}

void derived_class::add_time() {
  for (int i = 0; i < 3; i++) {
    time2[i] = time1[i] + time2[i];
  }
}

void time_diff::get_timediff(derived_class objd) {
  for (int i = 0; i < 3; i++) {
    time_diff[i] = std::abs(objd.time1[i] - objd.time2[i]);
  }
}

void time_diff::display() {
  std::cout << "\nTime diff: " << time_diff[0] << "hrs " << time_diff[1]
            << "min " << time_diff[2] << "sec.\n";
}

int main() {
  derived_class d1;
  time_diff t1;
  d1.get_data();
  d1.add_time();
  t1.get_timediff(d1);
  t1.display();
  return 0;
}
