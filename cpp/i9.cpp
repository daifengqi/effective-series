// Item 9. Never call virtual function during construction or destruction,

//✦ Don’t call virtual functions during construction or destruction,
//  because such calls will never go to a more derived class than that of the currently executing constructor or destructor.