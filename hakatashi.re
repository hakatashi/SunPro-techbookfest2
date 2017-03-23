= 異世界でゼロからコンピュータを作る方法

//raw[|latex|\\chapterauthor{hakatashi}]

//lead{
突然ですが、異世界にいきなり飛ばされたら、あなたは何をしますか？

世界を救う？世界を滅ぼす？ヒロインと結ばれる？どれも魅力的ですが、
エンジニアないしプログラマーであるあなたにはもっと他にやることがあるはずです。

それは……そう、コンピュータを作ることです。

あなたが異世界転生して最初にするべきことは、蒸気機関を作ることなのです。
//}

=={hajimeni} はじめに

SunPro代表の博多市(@hakatashi)です。

近年、といっても最近十年程度のことですが、
@<kw>{異世界もの}と呼ばれる小説のジャンルが興隆を見せています。
これは物語の設定におけるパターンを用いた分類であり、
現実世界とは異なる場所に存在する@<kw>{異世界}の存在を仮定し、
主人公がそこに転移、もしくは転生することによって話が始まる……という
物語の構成方法を用いた小説の総称です。
このジャンルの小説は、主に@<kw>{小説家になろう}という小説投稿サイトで育まれたことから
@<kw>{なろう系小説}という名称も広く普及しており、
とりわけ中高生から二十代、三十代までの若者に遍く愛され、
出版化作品としても一大ジャンルを築いた現代のポピュラーカルチャーの一つです。

異世界ものの歴史は案外古く、例えばブックオフが制作した
「異世界召喚・転移・転生ファンタジーライトノベル年表@<fn>{isekai-time}」においては、
異世界ものの原点として、イザナギが黄泉の国を訪れる『古事記』や、
浦島太郎の原型である浦嶋子が記述されている『日本書紀』を紹介していたりします。
そこまで古くはなくとも、ある種異世界ものの典型ともいえる『ゼロの使い魔』が2004年、
さらに遡って初期ライトノベルで人気を博した『異次元騎士カズマシリーズ』が1988年と、
遡ろうと思えばいくらでも遡れてしまうのがこのジャンルの特徴です。

//footnote[isekai-time][@<href>{http://www.bookoffonline.co.jp/files/lnovel/pickup/pickup_isekai-history.html}]

さて、そんな異世界ものですが、筆者としては一つ不満点があります。
それは、現代の必須アイテムでありプログラマーの武器であるところの、@<kw>{コンピューター}がほとんど登場しないことです。

もちろん、物語の中の一要素としてコンピューターが登場する作品は数多く存在します。
例えば、元の世界から持ち込んだスマートフォンが物語の重要アイテムとして登場する『異世界はスマートフォンとともに。』や、
ゲーム会社で働くプログラマーが主人公の『デスマーチからはじまる異世界狂想曲』など、
著名なものでもいくつかの作品が挙げられます。
しかし、どれもコンピューターやプログラミングを物語の主体に置いているとは言い難く、
どちらかというと、すでに存在するコンピューターをチート的に利用して物語に色彩を与えているに過ぎません。

その理由は簡単で、異世界ものの作品に登場する異世界のほとんどが、
地球で言うところの「中世ヨーロッパ」をベースにしたものだからです。
現代世界から異世界に転移した主人公が忌憚なく活躍するためか、
はたまた魔法や魔術が登場するファンタジーの設定と違和感なく調和させるためか、
「異世界」の文明水準は総じて低く、奴隷制度・石造建築・封建制度といった設定が多く見受けられます。
このような世界観においてはコンピューターどころか電気ですら発見されていない可能性が高く、
ゆえに、プログラミングやエンジニアリングの登場する余地はない……というのが一般的な見解でしょう。

しかし、考えてもみてください。

この記事の読者であるあなた――多くがなんらかのプログラマーかエンジニアであることを想定しています――が、
突然異世界に転生したと仮定します@<fn>{how-to-tensei}。
そして着の身着のままでコンピューターどころか電気もない不毛の大地に立たされ、
プログラミングのできない窮地に立たされたとします。
あなたのするべきことは何でしょうか？

//footnote[how-to-tensei][転移は何らかのきっかけがないと難しいですが、転生は多くの場合トラックに轢かれて死亡すればいいだけなので簡単です。誰か別の人をかばいながらだとなお良いでしょう。]

そう、@<strong>{コンピューターを作ることです。}

異世界だろうとなんだろうと関係ありません。我々がするべきことは常にエンジニアリングです。
地球の人類にできたことが異世界の技術でできないはずがありません。
コンピューターがなければ、作ってしまえばいいのです。
世界を同じ物理法則が支配する限り、技術はあらゆる場所で再現可能です。

これは、すべてのプログラマーとエンジニアに送る、異世界転生のための必読書です。

== 異世界の夜明け

=== 目標設定

この記事の目標は、技術水準の低い異世界で、ゼロからコンピューターを作りあげることです。

仮定としては、ある日突然現代日本から異世界に転生した主人公が、他のあらゆる些事には目もくれず、
ただただ最短でコンピューターを作ることに全力を尽くしたらどうなるか……というものです。

主人公は、高校生のアニオタでも29歳のプログラマーでも34歳無職でも、この際なんでも構いませんが、
異世界においてはお約束通り、青年期の男性の健全な肉体を持って生まれ変わるものとします。

また、異世界転生においては多くの場合何らかのチート的な能力を与えられる作品も多いですが、
その手の設定は考え始めるとキリがないので、その手のチート能力に関しては考えないことにします。
甘えは捨てましょう。苦境には身一つで戦うものです。

そして、転生先の異世界には魔法が存在します。

当然です。魔法の存在しない異世界は異世界じゃありません。
しかし、多くの異世界ファンタジーでそうであるように、この魔法の存在は、
場合によっては重要なファクターを握りうる、重大な要素です。
かの有名なアーサー・C・クラークの言葉、
「充分に発達した科学技術は魔法と区別がつかない」というのとは少しちがいますが、
中世風の世界観に持ち込まれた魔法という概念はある種オーバーテクノロジーのようなものであり、
今回のコンピューター製作をブーストさせる可能性が大いにあります。

また、魔法が使えるのが当然の世界観においては、主人公も何らかの努力で初歩的な魔法を習得できる可能性が高いでしょう。
魔法を厳密に定義するのは難しいですが、ここでは物理的な整合性は意図的に無視して、
人間の意志によって超常的な物理現象を発生しうるシステム……ということにしておきます。

転生の最終目標はコンピューターですが、コンピューターと一口にいってもさまざまなシステムが考えられます。
人類史において計算機を最初に発明したのはパスカルであると伝えられており、
その程度の計算機であれば中世初期程度の技術で容易に再現可能なため、あまりインパクトがありません。

== 世界設定

@<hd>{hajimeni}で紹介したとおり、異世界ものにおける「異世界」は、
ほとんどが地球における中世ヨーロッパのような世界観を持っていると言われています。
ここのところについてもう少し詳しく定義していきます。

=== 「中世ヨーロッパ」とは？

異世界の世界観を考える上で厄介なのは、何よりも「中世ヨーロッパ」という単語の曖昧さです。

西洋史において中世とは、概ね封建制度が社会の基盤となっていた時代を指し、
西ローマ帝国皇帝が退位した西暦476年から、百年戦争が終結した西暦1453年までと定義されることが多いです@<bib>{gies}。
つまり中世とは江戸時代のおよそ四倍にもなる千年間にわたって続いた時代であり、
当然、初期と終期では技術水準が全く異なります。

また、異世界ファンタジーに登場する社会制度の多くは、
絶対君主制・学校制度・
中世と言いながらどちらかというと近世や近代のものに近いことが知られています。

== 異世界と高炉

異世界でコンピューターを作るためには、なによりもまず材料が必要です。
我々が制作しようとしているコンピューターが電気によって制御されることを考慮すると、
異世界コンピューター第一号の構成部品のほとんどが、銅や鉄を主とする金属類であることは疑いないでしょう。
また、コンピューター部品の製造には、大型の工場と工作機械を必要とし、
それらの製造にも大量の鉄が用いられることでしょう。
鉄を確保することは異世界でコンピューターを作るための最初の一歩です。

加工しやすい鉄が大量に入手できるかどうかは、転生先の異世界の製鉄技術の程度、
特に@<kw>{高炉}が発明されているかどうかに懸かっています。

ヨーロッパにおいて、高炉はおもに15世紀から16世紀にかけて普及した技術です。
異世界の技術水準を中世盛期のヨーロッパと定めるならば、高炉のような技術は出現していないと考えるのが普通でしょう。
実際、多くの異世界ものでは「鋼鉄の鎧」「鋼鉄の槍」などの@<kw>{鋼鉄}を用いたアイテムが多く登場しますが、
精錬に高炉を必要とする@<kw>{鋳鉄}や@<kw>{銑鉄}は登場しません。

作品によっては、魔法技術の一環として「鍛冶スキル」なる能力を設定しているものもあります。
例えば「小説家になろう」版『この素晴らしい世界に祝福を』の第二部では、
この鍛造スキルを用いてオイルライターを製造することが物語の重要イベントとなっているのですが@<fn>{konosuba-bunko}、
肝心のその製造過程を見てみると……。

//footnote[konosuba-bunko][ちなみに、文庫版では単に「内職」となっています。]

//quote{
　小さな金槌を使い、鍛冶スキルで薄い鉄板を伸ばしていく。

　そして形を整えてから暖炉の前の火を使い、それを鍛冶スキルで綺麗に溶接。

　俺が朝から暖炉の前でせっせとジッポ作っているそんな様子を、
暖炉の前に斜めに置いたソファーに陣取り、アクアがじっと眺めていた。
//}

なんと、@<strong>{ライターの部品を金槌でせっせと鍛造しています。}
これはまさしく中世初期に見られる鍛冶職人の仕事そのものであり、
歯車やパレットのような精密部品の鋳造に必要な冶金術がまだ整っていなかった時代のものです。
金槌だけでライターを製造するのはさぞかし大変なことでしょう。

というわけで、ライター製作を楽にするためにも、一刻も速く異世界に高炉の技術を持ち込みましょう。
高炉は、機械動力を用いることにより飛躍的な発展を遂げた、製鉄用の溶鉱炉の一種です。
いまでも多くの製鉄所には大型の高炉が設置されていますが、現代にいたるまでその基本的な原理は変わっていません。

元来、鉄というものは、含有する炭素の量によって性質が大きく変わる金属です。
炭素を全く含まない純鉄は、融点が1500度と非常に高く、通常の製鉄では得られません。
炭素を添加することによって融点は下がり、飽和状態となる鋳鉄では1200度程度となります。
この性質と、大量の酸素を送り込む高温還元を用いて、液体の状態で溶鉄を取り出せるようにしたのが、高炉の基本的なメカニズムです。

それ以前の時代の製鉄において、鉄とは原則としてほぼ固体の状態で取り出すものでした。
そのため鉄を取り出すたびに炉を破壊する必要があり、生産効率は非常に低かったと言われています。
高炉の登場によって鉄の生産性が大幅に向上すると同時に、二段階製鉄という製鉄の新たなプロセスが生まれ、
その中間生成物として鋳鉄が得られるようになりました。
今回のコンピューター製作において、銅に次いで二番目に重要な金属です。

次に掲げる蒸気機関の設計にも、機械式計算機に用いられる精密な歯車の製造にも、
鋳造に適した鋳鉄が必要不可欠です。
鋳鉄は炭素を大量に含むため柔らかく、大規模な構造物の設計にｓ

蒸気機関が発明される以前のヨーロッパにおける動力と言えば、水力か馬力が中心です。
このうち馬力は維持費も導入費もかさむため、
移動させる必要がなく、比較的どこにでも建設可能な高炉においては、水力を利用するのが良いでしょう。
これも、ヨーロッパの製鉄の歴史をそのままなぞる形となります。

転生先の異世界の魔法技術によっては、水力よりも効率的な方法が存在する可能性があります。
今回の高炉に必要なのは、動力そのものではなく炉の温度を上昇させるための送風装置なので、
例えば風系の魔法で炉に直接送風するというのは悪くない発想でしょう。
炎系の魔法で直接炉を加熱するという形態も考えられますが、
アニメなどで見られる炎系魔法の多くが赤い色の炎を吹き出すことを考慮するに、
高炉に必要な1200℃以上の温度が得られるかどうかははなはだ懐疑的です。

== 異世界と蒸気機関

== 異世界と発電機

== 異世界とリレー

== 異世界とコンピューター

== 異世界コンピューティング計画

== 異世界
