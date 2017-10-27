const config = require('./base-config.js');
const fs = require('fs');

Object.assign(config.config, {
	author: 'hakatashi',
	description: '突然ですが、異世界にいきなり飛ばされたら、あなたは何をしますか？世界を救う？世界を滅ぼす？ヒロインと結ばれる？どれも魅力的ですが、エンジニアないしプログラマーであるあなたにはもっと他にやることがあるはずです。それは……そう、コンピューターを作ることです。あなたが異世界転生して最初にするべきことは、蒸気機関を作ることなのです。',
});

config.page = {
	url: 'hakatashi.html',
	plain_title: '異世界でゼロからコンピューターを作る方法',
	title: '異世界で<wbr>ゼロから<wbr>コンピューターを<wbr>作る方法',
	subtitle: 'hakatashi',
    content: fs.readFileSync('../webroot/hakatashi.html'),
    pdf: {
      link: 'hakatashi.pdf',
      size: 0.6,
    },
    next: {
      link: 'napier.html',
      title: '不可能図形を3Dプリントで実現する',
    },
	og_image: 'favicon.png',
};

module.exports = config;
