const exp = require('constants');
const express = require('express');
const app = express();
const path = require('path');
const { v4: uuid } = require('uuid');
const methodOverride = require('method-override');

app.set('views', path.join(__dirname, 'views'))
app.use(express.urlencoded({ extended: true }))
app.use(express.json())
app.use(methodOverride('_method'))
app.set('view engine', 'ejs');

const post = [{
        'id': uuid(),
        'title': 'Title 1',
        'contend': 'Russia-Ukraine news: Russia announced yet another temporary ceasefire and the establishment of safe corridors to allow civilians to flee the besieged Ukrainian cities of Kyiv, Mariupol, Kharkiv, and Sumy on Monday.'
    },
    {
        'id': uuid(),
        'title': 'Title 2',
        'contend': 'Russia-Ukraine news: Russia announced yet another temporary ceasefire and the establishment of safe corridors to allow civilians to flee the besieged Ukrainian cities of Kyiv, Mariupol, Kharkiv, and Sumy on Monday.'
    },
    {
        'id': uuid(),
        'title': 'Title 3',
        'contend': 'Russia-Ukraine news: Russia announced yet another temporary ceasefire and the establishment of safe corridors to allow civilians to flee the besieged Ukrainian cities of Kyiv, Mariupol, Kharkiv, and Sumy on Monday.'
    },
    {
        'id': uuid(),
        'title': 'Title 4',
        'contend': 'Russia-Ukraine news: Russia announced yet another temporary ceasefire and the establishment of safe corridors to allow civilians to flee the besieged Ukrainian cities of Kyiv, Mariupol, Kharkiv, and Sumy on Monday.'
    },
]

app.get('/', (req, res) => {
    res.render('index', { post });
})

// Create Post
app.get('/new', (req, res) => {
    res.render('new');
})

// Submit Post Data
app.post('/submits', (req, res) => {
    // console.log(req.body);
    const { id, title, contend } = req.body;
    post.push({ id:uuid(), title, contend })
    res.redirect('/');
})


// View Data
app.get('/new/:id', (req, res) => {
    const { id } = req.params;
    const posts = post.find(c => c.id === id);
    res.render('show', { posts });
})

app.get('/new/:id/edit', (req, res) => {
    const { id } = req.params;
    const posts = post.find(c => c.id === id);
    res.render('edit', { posts });
})

// Updating Post
app.patch('/new/:id', (req, res) => {
    const { id } = req.params;
    const newPost = req.body.contend;
    const oldPost = post.find(c => c.id === id);
    oldPost.contend = newPost;
    res.redirect('/');
})



app.listen(3000, () => {
    console.log("Its Port 3000")
})