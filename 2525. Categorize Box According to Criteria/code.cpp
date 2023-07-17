class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {

        long long int vol=(long long)(length)*(long long)(width)*(long long)(height);

        if((vol>=1000000000||length>=10000||width>=10000||height>=10000)&&mass>=100) return "Both";
        else if(vol>=1000000000||length>=10000||width>=10000||height>=10000) return "Bulky";
        else if(mass>=100) return "Heavy";
        else return "Neither";
        
    }
};
