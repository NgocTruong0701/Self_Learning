/*
    Array Method
        1. forEarch
        2. every
        3. some
        4. find
        5. filter
        6. map
        7. reduce
*/
const sports = [
    {
        name: 'Bóng rổ',
        like: 0
    },
    {
        name: 'Bơi lội',
        like: 5
    },
    {
        name: 'Bóng đá',
        like: 10
    },
]
/*-----------------------------------------------------------------------------------------------------*/
// forEarch() -- dung de duyet mang
sports.forEach(function(value,index){
    console.log(index, value);
}
);

/*-----------------------------------------------------------------------------------------------------*/
// every -- tra ve boolen, duyet moi phan tu cua mang, tra ve true neu moi phan tu thoa man 1 dieu kien gi do
// se dung duyet neu gap 1 phan tu khong thoa man dieu kien
var IsNotLike = sports.every(function(value, index){ 
    return value.like === 0; // false
});
console.log(IsNotLike);

/*-----------------------------------------------------------------------------------------------------*/
// some -- tuong tu nhu every, duyet moi phan tu cua mang, tra ve true neu it nhat 1 phan tu thoa man 1 dieu kien gi do
// se dung duyet neu nhu gap 1 phan tu thoa man dieu kien ay roi
var isLike = sports.some(function(value, index){
    return value.like === 0; // true
})
console.log(isLike);

/*-----------------------------------------------------------------------------------------------------*/
// Find -- duyet mang va tra ve phan tu dau dien thoa man dieu kien
var sport = sports.find(function(value, index){
    return value.name === 'Bóng đá';
});
console.log(sport);

/*-----------------------------------------------------------------------------------------------------*/
// Filter -- duyet mang va tra ve cac phan tu thoa man dieu kien
var listSports = sports.filter(function(value,index){
    return value.like > 0;
});
console.log(listSports);

/*-----------------------------------------------------------------------------------------------------*/
function getMostFavoriteSport(arr)
{
    var listArr = arr.filter(function(object, index) {
        return object.like > 5;
    })

    return listArr;
}

// Kỳ vọng
console.log(getMostFavoriteSport(sports)) 
// Output: [{ name: 'Bóng rổ, like: 6 }, { name: 'Bóng đá, like: 10 }]

/*-----------------------------------------------------------------------------------------------------*/
// Map -- kha giong forEach nhung ma Map tao ra mang moi dua tren function ben trong, forEach thi k the return gia tri
// Muon tao ra 1 "mang moi" co them thuoc tinh name thay doi coin  ta dung map va index cua cac object trong mang
function createNewArr(value, index)
{
    return{
        name: `Day la mon ${value.name}`,
        like: value.like,
        coin: 100,
        index: index
    };
};
var newArrSport = sports.map(createNewArr);
console.log(newArrSport);

/*-----------------------------------------------------------------------------------------------------*/
// Reduce -- Dung khi muon nhan ve 1 gia tri duy nhat sau khi tinh toan va su ly tren cac phan tu cua array, chang han nhu 
// tong tien hay cai gi do
// Trong bai nay la tong like
var totalLike = sports.reduce(function(accumulator/*bien luu tru gia tri dua ra*/,currentValue/*value cua mang do*/, currentIndex, originArray/*mang bang dau dung(sports)*/){
    return accumulator + currentValue.like;
}, 0/*gia tri ban dau cua bien luu tru*/);
console.log(totalLike); // 15

var sportes = [
    {
        name: 'Bơi lội',
        gold: 11
    },
    {
        name: 'Boxing',
        gold: 3
    },
    {
        name: 'Đạp xe',
        gold: 4
    },
    {
        name: 'Đấu kiếm',
        gold: 5
    },
]

function getTotalGold(arr){
    var totalGold = arr.reduce(function(accumulator,currentValue){
        return accumulator + currentValue.gold;
    }, 0);

    return totalGold;
};

// Expected results:
console.log(getTotalGold(sportes)) // Output: 23

// Truong hop khong co doi so thu 2 la initia value thi accumulator gan luon phan tu dau tien va tinh phan tu thu 2
// VD
var c = [1,2,3,4,5];
var toltalc = c.reduce(function(total, number){
    return total + number; // lan dau total = 1 + number = 2; cac lan tiep theo thi cu cong, tu do tiet kiem di 1 lan lap
});// k co doi so 2, that ra co van duoc nhung k co thi tiet kiem 1 lan lap
console.log(toltalc); // 15

// Bai tap
// Flat - "lam phang" mang tu Depth array - "Mang sau"
// dung loop
var depthArray = [1, 10, [3, 4], 5 ,6 ,[7, 8, 9]];
var flatArray = [];
// for(var key in depthArray)
// {
//     flatArray = flatArray.concat(depthArray[key]);
// }
for(var i = 0;i < depthArray.length;i++)
{
    flatArray = flatArray.concat(depthArray[i]);
}
console.log(flatArray);
// Dung reduce
var flatarray = depthArray.reduce(function(accumulator, value) {
    return accumulator.concat(value);
}, []);
console.log(flatarray);

// Bai 2: Flat - mang object, dua cac object ra 1 mang cung cap
var topics = [
    {
        topic: 'Front-end',
        courses: [
            {
                id: 1,
                title: 'HTML, CSS'
            },
            {
                id: 2,
                title: 'Javascript'
            }
        ]
    },
    {
        topic: 'Back-end',
        courses: [
            {
                id: 1,
                title: 'PHP'
            },
            {
                id: 2,
                title: 'NodeJS'
            }
        ]
    }
];
// dua cac courses ra 1 mang moi
var listCourses = topics.reduce(function(courses, topic){
    return courses.concat(topic.courses);
}, []);
console.log(listCourses);

/*-----------------------------------------------------------------------------------------------------*/
// On tap

var watchList = [
    {
    "Title": "Inception",
    "Year": "2010",
    "Rated": "PG-13",
    "Released": "16 Jul 2010",
    "Runtime": "148 min",
    "Genre": "Action, Adventure, Crime",
    "Director": "Christopher Nolan",
    "Writer": "Christopher Nolan",
    "Actors": "Leonardo DiCaprio, Joseph Gordon-Levitt, Elliot Page, Tom Hardy",
    "Plot": "A thief, who steals corporate secrets through use of dream-sharing technology, is given the inverse task of planting an idea into the mind of a CEO.",
    "Language": "English, Japanese, French",
    "Country": "USA, UK",
    "imdbRating": "8.8",
    "imdbVotes": "1,446,708",
    "imdbID": "tt1375666",
    "Type": "movie",
    },
    {
    "Title": "Interstellar",
    "Year": "2014",
    "Rated": "PG-13",
    "Released": "07 Nov 2014",
    "Runtime": "169 min",
    "Genre": "Adventure, Drama, Sci-Fi",
    "Director": "Christopher Nolan",
    "Writer": "Jonathan Nolan, Christopher Nolan",
    "Actors": "Ellen Burstyn, Matthew McConaughey, Mackenzie Foy, John Lithgow",
    "Plot": "A team of explorers travel through a wormhole in space in an attempt to ensure humanity's survival.",
    "Language": "English",
    "Country": "USA, UK",
    "imdbRating": "8.6",
    "imdbVotes": "910,366",
    "imdbID": "tt0816692",
    "Type": "movie",
    },
    {
    "Title": "The Dark Knight",
    "Year": "2008",
    "Rated": "PG-13",
    "Released": "18 Jul 2008",
    "Runtime": "152 min",
    "Genre": "Action, Adventure, Crime",
    "Director": "Christopher Nolan",
    "Writer": "Jonathan Nolan (screenplay), Christopher Nolan (screenplay), Christopher Nolan (story), David S. Goyer (story), Bob Kane (characters)",
    "Actors": "Christian Bale, Heath Ledger, Aaron Eckhart, Michael Caine",
    "Plot": "When the menace known as the Joker wreaks havoc and chaos on the people of Gotham, the caped crusader must come to terms with one of the greatest psychological tests of his ability to fight injustice.",
    "Language": "English, Mandarin",
    "Country": "USA, UK",
    "imdbRating": "9.0",
    "imdbVotes": "1,652,832",
    "imdbID": "tt0468569",
    "Type": "movie",
    },
    {
    "Title": "Batman Begins",
    "Year": "2005",
    "Rated": "PG-13",
    "Released": "15 Jun 2005",
    "Runtime": "140 min",
    "Genre": "Action, Adventure",
    "Director": "Christopher Nolan",
    "Writer": "Bob Kane (characters), David S. Goyer (story), Christopher Nolan (screenplay), David S. Goyer (screenplay)",
    "Actors": "Christian Bale, Michael Caine, Liam Neeson, Katie Holmes",
    "Plot": "After training with his mentor, Batman begins his fight to free crime-ridden Gotham City from the corruption that Scarecrow and the League of Shadows have cast upon it.",
    "Language": "English, Urdu, Mandarin",
    "Country": "USA, UK",
    "imdbRating": "8.3",
    "imdbVotes": "972,584",
    "imdbID": "tt0372784",
    "Type": "movie",
    },
    {
    "Title": "Avatar",
    "Year": "2009",
    "Rated": "PG-13",
    "Released": "18 Dec 2009",
    "Runtime": "162 min",
    "Genre": "Action, Adventure, Fantasy",
    "Director": "James Cameron",
    "Writer": "James Cameron",
    "Actors": "Sam Worthington, Zoe Saldana, Sigourney Weaver, Stephen Lang",
    "Plot": "A paraplegic marine dispatched to the moon Pandora on a unique mission becomes torn between following his orders and protecting the world he feels is his home.",
    "Language": "English, Spanish",
    "Country": "USA, UK",
    "imdbRating": "7.9",
    "imdbVotes": "876,575",
    "imdbID": "tt0499549",
    "Type": "movie",
    }
];

function calculateRating(arr)
{
    // Dùng phương thức filter để lấy ra những bộ phim do Christopher Nolan làm đạo diễn
    var array = arr.filter(function(obj, index){
        return obj.Director === 'Christopher Nolan';
    });

    // Dùng phương thức reduce để tính tổng điểm IMDB
    var totalRating = array.reduce(function(total,obj){
        return total + Number.parseFloat(obj.imdbRating);
    },0.0);
    
    // Tính điểm IMDB trung bình
    var averageTotal = totalRating / array.length;
    return averageTotal;
}
  // Expected results
console.log(calculateRating(watchList)); // Output: 8.675 dua ra diem trung binh cua dao dien Christopher Nolan
