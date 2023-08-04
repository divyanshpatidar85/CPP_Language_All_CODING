
#include <bits/stdc++.h>

using namespace std;

vector<pair<int,pair<char,char>>>vec1[6];
void creation(int v1,int v2,int w,char c1,char c2){
    vec1[v1].push_back({w,{c1,c2}});
     vec1[v2].push_back({w,{c2,c1}});
    
}

void spanning_tree(vector<pair<int,pair<char,char>>>vec2[],int base){
    int conut=0,dum=0,l;
      vector<int>vec3;
      vector<int>vec5;
      vector<char>vec4;
      while(dum!=5){
      for(int i=0;i<vec2[base].size();i++){
          vec3.push_back(vec2[base][i].first);
           sort(vec3.begin(), vec3.end());
      }
      for(int i=0;i<vec2[base].size();i++){
        if(vec2[base][i].first==vec3[0] &&( !(count(vec4.begin(), vec4.end(),vec2[base][i].second.first)) ||!(count(vec4.begin(), vec4.end(),vec2[base][i].second.second))) ){
            l=vec2[base][i].second.second-65;
            cout<<vec2[base][i].second.first<<" -> "<<vec2[base][i].second.second<<endl;
            break;
        }
      }
       for(int i=0;i<vec2[base].size();i++){
          if(vec2[base][i].first==vec3[0]){
              if(count(vec4.begin(), vec4.end(),vec2[base][i].second.first) &&count(vec4.begin(), vec4.end(),vec2[base][i].second.second)){
                  vec3.erase(vec3.begin());
                  continue;
                  
          }
          else{
              if(!(count(vec4.begin(), vec4.end(),vec2[base][i].second.first))){
                  vec4.push_back(vec2[base][i].second.first);
                 // cout<<vec2[base][i].second.first<<endl;
              }
              if(!(count(vec4.begin(), vec4.end(),vec2[base][i].second.second))){
                  vec4.push_back(vec2[base][i].second.second);
                 //  cout<<vec2[base][i].second.second<<endl;
              }
           
       //    cout<<" ram=> "<<(vec2[base][i].first)<<endl;
        //   cout<<"l is => "<<l<<endl;
             dum++;
             vec5.push_back(base);
             base=l;
             vec3.erase(vec3.begin());
            break;
          }
      }
      
    
    
}
}
}

int main()
{
    creation(0,1,4,'A','B');
    creation(0,2,4,'A','C');
    creation(1,0,4,'B','A');
    creation(1,2,2,'B','C');
    
    creation(2,0,4,'C','A');
    creation(2,1,2,'C','B');
    creation(2,3,3,'C','D');
    creation(2,4,4,'C','E');
    creation(2,5,2,'C','F');
    
    
    creation(2,2,3,'D','C');
    creation(2,4,3,'D','E');
    
    
    creation(4,3,3,'E','D');
    creation(4,5,3,'E','F');
    
   creation(5,2,2,'F','C');
   creation(5,4,3,'F','E');
 spanning_tree(vec1,0);
    

    return 0;
}
