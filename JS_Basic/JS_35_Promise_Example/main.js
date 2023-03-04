// Vi du va ung dung thuc te cua promise

var users = [
    {
        id: 1,
        name: 'User_1' 
    },

    {
        id: 2,
        name: 'Admin',
    },

    {
        id: 3,
        name: 'User_2'
    },
];

var comments = [
    {
        id: 1,
        values: 'Hello xin chao!!!!!!',
        user_id: 1,
    },
    {
        id: 2,
        values: 'Chao mung den voi binh nguyen vo tan >_<',
        user_id: 2,
    },

    {
        id: 3,
        values: 'Chao moi nguoi ne ==))',
        user_id: 3
    }
];

// 1. Lay commnents
// 2. Tu comments lay ra user_id
// 3. Tu user_id lay ra user tuong ung

// API lay ra du lieu 
function getCommnets()
{
    return new Promise(function(resolve, reject)
    {
        setTimeout(function(){
            resolve(comments)
        }, 1000)
    })
}

function getUsersByIDs(userIDs)
{
    return new Promise(function(resolve)
    {
        setTimeout(function()
        {
            var result = users.filter(function(user)
            {
                return userIDs.includes(user.id)
            })
            resolve(result);
        },1000)
    })
}


getCommnets()
    .then(function(comments){
        var userIDs = comments.map(function(comment)
        {
            return comment.user_id;
        })

        return getUsersByIDs(userIDs)
            .then(function(users){
                return {
                    users : users,
                    comments: comments
                }
            })
    })
    .then(function(data)
    {
        var commentBlock = document.getElementById('comment-block');
        
        var html = '';
        data.comments.forEach(function(commnent){
            var user = data.users.find(function(user){
                return user.id === commnent.user_id;
            })
            //html += `<li>${user.name}: ${comment.values}</li>`
            html += `<li>${user.name}: ${commnent.values}</li>`
        })
        
        commentBlock.innerHTML = html
    })


