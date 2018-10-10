const config = require('./base-config.js');
const fs = require('fs');

Object.assign(config.config, {
	author: 'Napier_Sabre_V / hideo54',
	description: ''
});

config.page = {
	url: 'columns.html',
	plain_title: 'おまけ: コラム集',
	title: 'おまけ:<wbr> コラム集',
	subtitle: 'Napier_Sabre_V / hideo54',
    content: fs.readFileSync('../webroot/columns.html'),
    pdf: {
      link: 'columns.pdf',
      size: 0.5,
    },
    prev: {
      link: 'napier.html',
      title: '不可能図形を3Dプリントで実現する',
    },
    next: {
      link: 'bib.html',
      title: '参考文献',
    },
	og_image: 'favicon.png',
};

module.exports = config;
