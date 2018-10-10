module.exports = {
  config: {
    title: 'SunPro 2017技術書典',
    author: 'SunPro',
    email: 'admin@sunpro.io',
    description: '技術書典2にて発行された技術系同人誌『SunPro会誌 2017技術書典』です。現在無料公開中。「異世界でゼロからコンピューターを作る方法」「不可能図形を3Dプリントで実現する」「おまけ: コラム集」の3本でお届けします。',
    hatena_base: 'http://b.hatena.ne.jp/entry/s/sunpro.io/techbookfest2/',
    base: 'https://sunpro.io/techbookfest2/',
  },
  page: {
    url: '',
    plain_title: '',
    subtitle: '',
    content: '',
    posts: [],
  },
  theme: {
    'navbar-links': {
      'Home': undefined,
      'GitHub': 'https://github.com/hakatashi/SunPro-techbookfest2',
    },
    footer: [],
    avatar: '/../../favicon.png',
    comment: {
      enable: false,
    },
    highlight: {
      enable: true,
    },
    header: {
      title: 'SunPro <wbr>2017<wbr>技術書典',
      motto: '技術系よろず同人誌 (2017年4月発行)',
      bigimgs: [{
        src: '/../../cover.jpg',
        desc: '表紙',
      }],
    },
  },
  url_for: (path) => {
    if (path === undefined) {
      return './';
    } else if (path.startsWith('http')) {
      return path;
    } else {
      return `beautiful-hexo/source${path}`;
    }
  },
};
