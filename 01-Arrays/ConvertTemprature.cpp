class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        //problem link-https://leetcode.com/problems/convert-the-temperature/
        //Most Basic and easy approach
        //Space complexity= O(1)
        //Time complexity = O(1)
        vector<double> convert ; // vector convert is used as both answers are inserted in it 
        convert.push_back(celsius+273.15); //Celcsius converted to Kelvin as Kelvin = Celsius + 273.15
        convert.push_back((celsius*1.80)+32.00); // converted to farhenhiet by the formula 
        return convert;
    }
};