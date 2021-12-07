void main() {
  print("Hello DSC KIET");

//variables in dart
  var age;
  //age is just like a dynamic data type if it is not initialised at the time of declaration
  age = 5;
  print(age);

  age = 'flutter';
  print(age);

  //strict data type in dart
  //int
  int x;
  x = 10;
  print(x);

  //double
  double y = 2.092831209;
  print(y);

  //string
  String s = 'Aman';
  print(s);

  //list
  var list = [1, 'flutter', 2.124124];
  print(list);

  var aman_data = ['Aman', 19, 10.00];
  print(aman_data);

  //set ->stores only unique element
  var set = {1, 2, 3, 'abc', 'bcd'};
  print(set);

  //Map -> as like dictonary (key,value)
  Map studentData = {
    'ayush': 190434150213,
    'aman': 200232901319,
  };
  print(studentData);
  //if two key name is same then it's run and print last key
  Map dishes = {'Aman': 'Momos', 'Avinash': 'Paneer', 'Avinash': 'Paneer'};
  print(dishes);

  //Boolean
  bool xi = true;
  print(xi);

  var hitPoints = 100;
  print(hitPoints > 0);

  //functions
  /*Syntax

  returnType name(){

    //some code

  }
  */
  int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) {
      result *= a;
    }
    return result;
  }

  print(power(2, 3));
  //Conditional statement
  int z = 10;
  if (z % 2 == 0) {
    print("The number is even");
  }
  // can use else if
  else {
    print("The number is odd");
  }
}
/* Output
Hello DSC KIET
5
flutter    
10
2.092831209
Aman       
[1, flutter, 2.124124]
[Aman, 19, 10.0]
{1, 2, 3, abc, bcd}
{ayush: 190434150213, aman: 200232901319}
{Aman: Momos, Avinash: Paneer}
true
true
8
The number is even
*/
