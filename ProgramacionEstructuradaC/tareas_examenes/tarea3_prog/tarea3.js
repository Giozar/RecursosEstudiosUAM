let d = 10,s = 12, g = 1,t = 1,l = 1,gm=0,tm=0,lm=0;
console.log(`0 0 0`); 
for (let i = 0; i < s; i++) {
    gm = gm + g;
    if(gm>=d){
        gm = gm - d;
    }
    tm = tm + t;
    if(tm>=d){
        tm = tm - d;
    }
    lm = lm + l;
    if(lm>=d){
        lm = lm - d;
    }
    console.log(`${gm} ${tm} ${lm}`);
}
