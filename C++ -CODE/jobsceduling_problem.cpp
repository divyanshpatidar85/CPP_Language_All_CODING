#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the total number of processes \n";
    cin>>n;
    int at[n],bt[n],cat[n],cbt[n],ct[n],flag=-1,tat[n],wt[n];int nwdum=-5;
   int check[n]={0};
    // cout<<check[n-1];
    for(int i=0;i<n;i++){
        cout<<"Enter the arrival and burst time respectviely of process "<<i+1<<endl;
        cin>>at[i]>>bt[i];
        cat[i]=at[i];
        cbt[i]=bt[i];
    }
    sort(cat,cat+n);
    sort(cbt,cbt+n);
    // cout<<cat[0]<<"  "<<cbt[0]<<endl;

    int dumy=0;
    int min=0;
    for(int i=0;i<n;i++){
        dumy=0;
        for(int k=0;k<n;k++){
            if(nwdum==cbt[k]){
                cbt[k]=-1;
            }
            if(cbt[k]!=-1){
                dumy=k;
                cout<<" cbt is "<<cbt[k]<<endl;
                // break;
            } 
            if(at[min]>=cat[k] && bt[min]>=cbt[k] &&cbt[k]!=-1){
                min=k;
              cout<<"min is "<<at[min]<<"  "<<bt[min]<<" "<<min<<endl;
            }
        }
        for(int j=0;j<n;j++){
            // break;
            if((cat[i]!=cat[i+1] && flag<0)||( flag>=0)){
            if(cat[i]==at[j]  &&check[j]!=1 &&flag<at[j]){
                ct[j]=at[j]+bt[j];
                if(flag>0){
                int var=at[j]-flag;
                flag=flag+var;
                ct[j]=ct[j]-at[j]+flag;
                
                }
                check[j]=1;
                 nwdum=bt[j];
               cout<<"first one "<<ct[j]<<endl;
                if(flag<ct[j])
                flag=ct[j];
                cout<<"first flag is "<<flag<<endl;
                break;
            }else if(cbt[dumy]==bt[j] && check[j]!=1 && at[j]<=flag){
                cbt[dumy]=-1;
                cout<<"Second one  "<<flag<<endl;
                 ct[j]=bt[j]+flag;
                check[j]=true;
                if(flag<ct[j])
                flag=ct[j];
                break;
            }
            else{
                cout<<"dummy is here "<<j<<"\n";
                // dumy++;
                continue;
            }
        }else{
            flag =0;
            i=-1;
            break;
        }
        }
    }
     cout<<"AT      "<<"BT      "<<"CT      "<<"TAT      "<<"WT      "<<endl;
     for(int i=0;i<n;i++){
       tat[i]=ct[i]-at[i];
       wt[i]=tat[i]-bt[i];
       cout<<at[i]<<"       "<<bt[i]<<"       "<<ct[i]<<"       "<<tat[i]<<"        "<<wt[i]<<"       "<<endl;
    }
    
    return 0;
}#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the total number of processes \n";
    cin>>n;
    int at[n],bt[n],cat[n],cbt[n],ct[n],flag=-1,tat[n],wt[n];int nwdum=-5;
   int check[n]={0};
    // cout<<check[n-1];
    for(int i=0;i<n;i++){
        cout<<"Enter the arrival and burst time respectviely of process "<<i+1<<endl;
        cin>>at[i]>>bt[i];
        cat[i]=at[i];
        cbt[i]=bt[i];
    }
    sort(cat,cat+n);
    sort(cbt,cbt+n);
    // cout<<cat[0]<<"  "<<cbt[0]<<endl;

    int dumy=0;
    int min=0;
    for(int i=0;i<n;i++){
        dumy=0;
        for(int k=0;k<n;k++){
            if(nwdum==cbt[k]){
                cbt[k]=-1;
            }
            if(cbt[k]!=-1){
                dumy=k;
                cout<<" cbt is "<<cbt[k]<<endl;
                // break;
            } 
            if(at[min]>=cat[k] && bt[min]>=cbt[k] &&cbt[k]!=-1){
                min=k;
              cout<<"min is "<<at[min]<<"  "<<bt[min]<<" "<<min<<endl;
            }
        }
        for(int j=0;j<n;j++){
            // break;
            if((cat[i]!=cat[i+1] && flag<0)||( flag>=0)){
            if(cat[i]==at[j]  &&check[j]!=1 &&flag<at[j]){
                ct[j]=at[j]+bt[j];
                if(flag>0){
                int var=at[j]-flag;
                flag=flag+var;
                ct[j]=ct[j]-at[j]+flag;
                
                }
                check[j]=1;
                 nwdum=bt[j];
               cout<<"first one "<<ct[j]<<endl;
                if(flag<ct[j])
                flag=ct[j];
                cout<<"first flag is "<<flag<<endl;
                break;
            }else if(cbt[dumy]==bt[j] && check[j]!=1 && at[j]<=flag){
                cbt[dumy]=-1;
                cout<<"Second one  "<<flag<<endl;
                 ct[j]=bt[j]+flag;
                check[j]=true;
                if(flag<ct[j])
                flag=ct[j];
                break;
            }
            else{
                cout<<"dummy is here "<<j<<"\n";
                // dumy++;
                continue;
            }
        }else{
            flag =0;
            i=-1;
            break;
        }
        }
    }
     cout<<"AT      "<<"BT      "<<"CT      "<<"TAT      "<<"WT      "<<endl;
     for(int i=0;i<n;i++){
       tat[i]=ct[i]-at[i];
       wt[i]=tat[i]-bt[i];
       cout<<at[i]<<"       "<<bt[i]<<"       "<<ct[i]<<"       "<<tat[i]<<"        "<<wt[i]<<"       "<<endl;
    }
    
    return 0;
}