const config = require('./base-config.js');
const fs = require('fs');

Object.assign(config.config, {
	author: 'Napier_Sabre_V',
	description: '初めまして、SunProの3D担当ねいぴあさぶれ(@Napier_Sabre_V)です。今までの出展イベントではマスコットD言語くんとGopher、それにくっつける小物を作ることに終始しており、こうした記事を書くことはなかったのですが、毎回そういうマスコットを増やしていくにも限界があろうということで、もっと一般的な立体を作ってその製作過程を記事にすることとなりました。加えて、コミックマーケット89および91で配布していた3Dプリント外注に関するレポートペーパーもこの記事の後ろに掲載してあります。',
});

config.page = {
	url: 'napier.html',
	plain_title: '不可能図形を3Dプリントで実現する',
	title: '不可能図形を<wbr>3Dプリントで<wbr>実現する',
	subtitle: 'Napier_Sabre_V',
    content: fs.readFileSync('../webroot/napier.html'),
    pdf: {
      link: 'napier.pdf',
      size: 0.6,
    },
    prev: {
      link: 'hakatashi.html',
      title: '異世界でゼロからコンピューターを作る方法',
    },
    next: {
      link: 'columns.html',
      title: 'おまけ: コラム集',
    },
	og_image: 'images/napier/Inventor-4.png',
};

module.exports = config;
