int tax(int salary,int insurance)
{
    int tax_salary=salary-insurance;
    int tmp=tax_salary-3500;
    if(tmp<0)
	return 0;
    else if(tmp<=1500)
	return tmp*0.03;
    else if(tmp<=4500)
	return tmp*0.10-105;
    else if(tmp<=9000)
	return tmp*0.2-555;
    else if(tmp<=35000)
	return tmp*0.25-1005;
    else if(tmp<=55000)
	return tmp*0.3-2755;
    else if(tmp<=80000)
	return tmp*0.35-5505;
    else 
	return tmp*0.45-13505;
}
