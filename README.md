Depending upon dynamic memory held by object either we need to perform shallow copy or deep copy. to create copy of an object.
if variables of objects are dynamically allocated then we need to 
perform deep copy.

  Shallow copy - 

  In shallow copy object is created by simply copying data of all variables of old object to new object.
  if old object have dynamically allocated memory for some variables then variables of new
  object will also indicate same memory location.
  if we made some changes in old object those changes will get reflect in new object.

  Note - In c++ compiler implicitly create copy constructor and overload assignment operator in order to perform shallow copy at compile time.

  Deep copy - 
  In deep copy objects are Independent. to achieve deep copy we need to define explicit copy constructor and also need to assign 
  dynamic memory explicitly if required.
  
