float postion m;

pp.h-m.y;
15 -3
15-4

if corner=top
{
	if top
	m.h=p.y*m.fh;
	m.y=(1-m.fy)(p.y-m.h)....
	
	m.y=(p.y-m.h)-(p.y-m.h)*m.fy
	
	if down
	m.h=(pp.h-py)*m.fh
    m.y=py+(pp.h-py-m.w)*m.fx...
     
}

if corner=left
{
	if left
	m.w=p.x*m.fw;
    m.x=(1-m.fx)(p.x-m.w)....
    m.x=p.x-m.w-(p.x-m.w)*m.fx
    
    if right
    m.w=(pp.w-p.x)*m.fw;
    m.x=(pp.w-p.x-m.w)*m.fx;...
     
}

if corner=down
{
	if top
	m.h=(p.h+p.y)*m.fh;
    m.y=(p.h+p.y-p.h)*(1-m.fy);...
    m.y=p.h+p.y-p.h-(p.h+p.y-p.h)*m.fy
    
	if down
	m.h=(pp.h-p.y-p.h)*m.fh;
	m.y=(pp.h-p.y-p.h-w.h)*m.fy;
	m.y=pp.h-p.y-p.h-w.h-(pp.h-p.y-p.h-w.h)*m.fy
    
}

if corner=right
{
	if left
	m.w=(p.w+p.x)*m.fw
	m.x=(p.w+p.x-m.w)*(1-m.fx)...
	
	if right
	m.w=(pp.w-p.w-p.x)*m.fw
    m.x=(pp.w-p.w-p.x-m.w)*m.fx...
	
}