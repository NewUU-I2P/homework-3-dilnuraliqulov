#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
if (s=="M"){
    if (height<1.7)
        result="Short";
    else if(height>=1.7&&height<=1.85)
        result="Normal";
    else
        result="Tall";
}else if (s=="F"){
    if(height<1.6)
        result="Short";
    else if(height>=1.6&&height<1.75)
        result="Normal";
    else
        result="Tall";
}
    // use return to return your result
    // make use of control flow statements
    return result;
}
