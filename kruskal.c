#include<stdio.h>
struct node
{
int ver,chain;
};
struct new
{
int st,en,val;
};
int main()
{
    //for unweighted graph please input in sorted order of values of edges.
int v,a,b,c,d,e,f,g,h,ans=0,q,y,z,i;
scanf("%d %d",&v,&e);//vertices and edges nos
struct node x[v];//final
struct new asd[e];//input values
for(a=0;a<e;a++)
{
// printf("input number is %d\n",a);
scanf("%d %d %d",&asd[a].st,&asd[a].en,&asd[a].val);
}
for(a=0;a<v;a++)
{
x[a].ver=-1;
x[a].chain=0;
}
int count=0;
b=-1;
c=0;//chain up
while(count<v-1)
{
//starting edge ,ending edge, chain no

b++;
q=asd[b].st;//starts
y=asd[b].en;//ends

if(x[q].ver+x[y].ver==2)//both the points are already visited
{
if(x[q].chain==x[y].chain )//condition for closed loop
continue;
else
{

d=x[y].chain;
e=x[q].chain;
for(a=0;a<v;a++)
{
if(x[a].chain==d)
x[a].chain=e;
}

}

}
else if(x[q].ver+x[y].ver==0)//only one node is visited
{
d=asd[b].st;//starting vertex
e=asd[b].en;//ending vertex
if(x[d].ver==1)
{
x[e].ver=1;
f=x[d].chain;
g=x[e].chain;
for(a=0;a<v;a++)
{
if(x[a].chain==g)
{
x[a].chain=f;
}
}
}
else
{
x[d].ver=1;
f=x[e].chain;
g=x[d].chain;
for(a=0;a<v;a++)
{
if(x[a].chain==g)
{
x[a].chain=f;
}
}
}
}
else//both are unvisited
{
c++;
d=asd[b].st;//starting vertex
e=asd[b].en;//ending vertex
x[d].ver=1;
x[e].ver=1;
x[d].chain=c;
x[e].chain=c;
}ans=ans+asd[b].val;
count++;
}
for(a=0;a<v;a++)
{
// printf("%d %d \n",x[a].ver,x[a].chain);
}printf("ans is %d",ans);
return 0;

}
	
