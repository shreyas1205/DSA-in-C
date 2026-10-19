int maxArea(int* height, int heightSize) {
    int i=0;
    int j=heightSize-1;
    int maxarea=0;
    while(i<j){
    int width=j-i;
    int min;
    if(height[i]<height[j])
    {
        min=height[i];
    }
    else
    {
        min=height[j];
    }
    int area=width*min;

    if(area>maxarea){
        maxarea=area;
    }
    if(height[i]<height[j]){
        i++;
    }
    else{
        j--;
    }

    }

return maxarea;


}
