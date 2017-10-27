const config = require('./base-config.js');
const fs = require('fs');

Object.assign(config.config, {
	author: '',
	description: '参考文献です。',
});

config.page = {
	url: 'bib.html',
	plain_title: '参考文献',
	title: '参考文献',
	subtitle: '',
    content: fs.readFileSync('../webroot/bib.html'),
    pdf: {
      link: 'bib.pdf',
      size: 0.5,
    },
    prev: {
      link: 'columns.html',
      title: 'おまけ: コラム集',
    },
	og_image: 'favicon.png',
};

module.exports = config;
