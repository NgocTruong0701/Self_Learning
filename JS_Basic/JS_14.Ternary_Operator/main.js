// Toan tu 3 ngoi - Ternary Operator 

var source = {
    name: 'JS',
    coint: 250
};

if(source.coint > 0)
{
    console.log(`${source.coint} Coins`);
}
else
    console.log('Free');


var result = source.coint > 0 ? `${source.coint} Coins` : 'Free';
console.log(result);