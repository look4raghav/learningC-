// max min finding

pair<long long, long long> getMinMax(long long a[], int n)
{
    long maximumele = INT_MIN;
    long minimumele = INT_MAX;
    
   for(int i=0; i<n; i++)
   {
    if(a[i] > maximumele){
        maximumele=a[i];}
        
    if(a[i] < minimumele){
        minimumele=a[i];}
   }
    
    pair<long long , long long>p({minimumele,maximumele});
    
    return p;
}