//char cccoh[200]="Ntrack==2&&mumucl>0.6&&pmucl>0.25&&muang_t<15&&veract<420";
char cccoh[200]="Ntrack==2&&mumucl>0.6&&pmucl>0.25&&muang_t<15&&veract*7.66339869e-2<34";
//char cccoh[200]="Ntrack==2&&mumucl>0.6&&pmucl>0.25&&pang<90&&muang_t<15&&veract*7.66339869e-2<34";
char cccohmva[200]="Ntrack==2 && pang<90 && !(mufc==0 && pene<9) && pidfsi>0.05 && veract*7.6634e-2<50 && pidfsi1prescor>-0.05 && pidfsiccqecor<0.0";
char ccincl[200]="1";

//float result=0.619;
//float result_qe=0.305;
//float bgrat=0.4516;

//float result=0.630;//ratio of data to prediction?
float result=0.6305;
float result_qe=0.307;
float bgrat=0.4665;//purity?

//float resultmva=0.700280112;//380/542.64
float resultmva=0.6305;
float result_qemva=0.307;
//float result_qemva=0.472;
float bgratmva=0.4323;//purity

