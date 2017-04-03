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

=== 高炉の原理

というわけで、ライター製作を楽にするためにも、一刻も速く異世界に高炉の技術を持ち込みましょう。
高炉は、水車などの動力を用いることにより飛躍的な発展を遂げた、製鉄用の@<kw>{溶鉱炉}の一種です。
いまでも多くの製鉄所には大型の高炉が設置されていますが、現代にいたるまでその基本的な原理は変わっていません。

名前の通り高さのある炉に@<kw>{鉄鉱石}と@<kw>{炭}を交互に投入し、炉の下部からこれを熱します。
この際、水車などの動力を用いて大量の空気を送風することによって、炉の温度を高めるとともに、
還元された鉄となった炉材を浸炭させ、炭素を4%ほど含む@<kw>{銑鉄}へと反応させます@<bib>{tanaka}。

元来、鉄というものは、含有する炭素の量によって性質が大きく変わる金属です。
炭素を全く含まない@<kw>{純鉄}は、融点が1500度と非常に高く、通常の製鉄では得られません。
炭素を添加することによって融点は下がり、飽和状態となる@<kw>{鋳鉄}では1200度程度となります。
この性質と、大量の酸素を送り込む高温還元を用いて、液体の状態で溶鉄を取り出せるようにしたのが、高炉の基本的なメカニズムです。

それ以前の時代の製鉄において、鉄とは原則として固体の状態で精製されるものでした@<bib>{history-of-iron}。
そのため鉄を取り出すたびに炉を破壊する必要があり、生産効率は非常に低かったと言われています。
高炉の登場によって鉄の生産性が大幅に向上すると同時に、@<kw>{二段階製鉄}という製鉄の新たなプロセスが生まれ、
その中間生成物として鋳鉄が得られるようになりました。
今回のコンピューター製作において、銅に次いで二番目に重要な金属です。

次に掲げる蒸気機関の設計にも、機械式計算機に用いられる精密な歯車の製造にも、鋳造に適した鉄材料が必要不可欠です。
鋳鉄は炭素を大量に含むため硬く脆く、大規模な構造物の建材には向きませんが、
融点が低く接合性が高いことから、複雑な形状の部品を鋳るのには最適です。

=== 高炉の動力

現代の高炉がそうであるように、高炉の動力は、高い送風力が得られる燃料装置によるものが望ましいです。
今回の挑戦では蒸気機関が最もそれに近いのですが……その蒸気機関を製造するのには高炉から生まれる鋳鉄が必要不可欠なので、
これは完全にニワトリとタマゴです。よって、最初の高炉の動力は蒸気機関ではありえません。

蒸気機関が発明される以前のヨーロッパにおける動力と言えば、水力、風力、畜力（特に馬力）あたりが中心です。
このうち風力は高い出力が得られず、馬力は維持費も導入費もかさむため、
移動させる必要がなく、比較的どこにでも建設可能な高炉においては、水力を利用するのが良いでしょう。
これも、ヨーロッパの製鉄の歴史をそのままなぞる形となります。

=== 高炉の立地

高炉の立地には非常に気を使う必要があります。
第一に水力を利用することから高低差の激しい河川部、それも、できればダムのように堰き止められる場所が望ましいでしょう。
水車といえば穏やかに流れる川に足を漬け、ゆったりと回る観覧車のようなものを想像する人も多いでしょうが、
そのような旧型の下がけ水車よりも、堰から生まれる水圧によって高速で噴射される水の運動エネルギーを利用するほうが効率がよいことが現代では知られています。
もっとも、高炉にそこまでのパワーは必要としないので、水利のよい異世界ならば適当な河川に建造することも可能です。

第二に、鉄鉱石と石灰、さらに還元剤かつ燃料として使用するコークスの原料である、石炭の産出地からなるべく近い所を選びます。
鉄鉱石や石灰はそれ以前の製鉄でも用いられるものなので、異世界でも容易に入手できるでしょう。
問題は石炭です。単に燃料として見るならば木炭のほうが優秀なので、異世界に石炭が流通していない可能性は大いにありえます。
乾留してコークスにするのも手間なので、場合によってはコークスの代わりに木炭を用いなければいけないかもしれません。

その他、高炉の建築材料の調達、炉から発生する煙による公害、そもそも私有できる土地であるかなどを考慮する必要があるでしょう。
これらの条件を総合して、高炉の建造に適した立地を、転生した異世界に応じて柔軟に決定しましょう。
例えば、実際に異世界に高炉の技術を持ち込む様子が描かれている『エルフ転生からのチート建国記』という作品の第二章十六話では、
特に炭鉱との距離と公害の影響を勘案して、「商業都市エリンの郊外」に高炉を建設しています。

=== 高炉と魔法技術

転生先の異世界の魔法技術によっては、水力よりも効率的な方法が存在する可能性があります。
今回の高炉に必要なのは、動力そのものではなく炉の温度を上昇させるための送風装置なので、
例えば風系の魔法で炉に直接送風するというのは悪くない発想でしょう。
炎系の魔法で直接炉を加熱するという形態も考えられますが、
アニメなどで見られる炎系魔法の多くが赤い色の炎を吹き出すことを考慮するに、
高炉の稼働に必要な1200℃以上の温度が得られるかどうかは、はなはだ懐疑的です。

== 異世界と蒸気機関

高炉の建造は、全てがうまくいけば数ヶ月程度で終了するでしょう。
高炉が完成したら、次は蒸気機関を建造しましょう。
異世界に産業革命を起こすのです。

=== 蒸気機関の原理

よく知られているとおり、@<kw>{蒸気機関}とは、地球においては十八世紀のイギリスで発明された、熱機関を用いた世界初の実用的な動力であり、
その後のイギリス産業革命のきっかけにもなった、まさしく@<strong>{世界を変える発明}でした。

蒸気機関の動作原理は簡単で、ボイラーの水が熱されて蒸気に変化するときの膨張と、冷却され水に戻るときの収縮を、
シリンダーと呼ばれる機関部を用いた一連の機構により往復動に変換する、というものです。
現代の熱力学的視点から観ると、これは熱交換により熱エネルギーを運動エネルギーに変換する装置であり、
カルノーサイクルを実現するための最も単純な機構でもあります。

しかしながら、現実にこの装置を実現することは、そう容易いことではありません。
蒸気機関の発明には、セイヴァリ、ニューコメン、ワットなど複数の人物が連鎖的に関与したことが知られていますが、
それぞれにそれぞれのブレイクスルーがあり、蒸気機関の実用性はみるみる向上していきました。
特にジェームズ・ワットが発明した分離凝縮機機関とクランクの功績はめざましく、
蒸気機関それ自体にも大きな革命をもたらしました。

地球の歴史でこの後登場する内燃機関や電気機関に対して蒸気機関が優れているのは、何よりも燃料が自由に選べる点です。
これは、電気もガスも石油も入手が困難であろう異世界においては非常に重要なことであり、
木炭・石炭などはもちろん、ボイラーを加熱できるあらゆる魔法の応用を視野に入れることができます。

=== ワットの分離凝縮器機関

それでは、実際に異世界で蒸気機関を作るとしたら、どのような形になるでしょうか。
これは転生先の異世界によって様々なバリエーションが考えられますが、
基本的には@<strong>{ワットの分離凝縮器機関}あたりを参考にするのがよいでしょう。

ワット以前にニューコメンが発明した、実用上広く用いられた初めての蒸気機関は、またの名を@<kw>{大気圧機関}と呼びます。
大気圧機関ではまず、加熱したボイラーから噴出する蒸気をシリンダーに注入し、蒸気の圧力でピストンを持ち上げます。
ピストンが規定の位置まで持ち上がったら、搖動する@<kw>{ビーム}が噴射ポンプのピンを引き、
水槽からシリンダー内部に冷却水が噴出します。
これによりシリンダー内部に充満した蒸気が冷却されて一気に凝縮し、シリンダー内の圧力が下がります。
あとは大気圧との気圧差がピストンを押し下げるので、これを繰り返すことにより往復運動が行われます。

「蒸気の蒸発と凝縮を用いて熱エネルギーを運動エネルギーに変換する」という蒸気機関の基本原理を愚直に実装した、
非常に素朴でまっとうな機構ですが、この機関には大きな問題がありました。
それは、@<strong>{ピストンが往復するシリンダー部を、何度も加熱したり冷却したりしなければならない点です。}
理想的には、凝縮時に蒸気だけをうまく冷却すればこの部分で熱損失は生じませんが、
現実には、シリンダーやピストンも同時に冷却され、熱を失ってしまいます。
これは非常に効率が悪いばかりか、真鍮でできたピストンやシリンダーが熱により伸縮するため、
空気漏れの原因になったり、耐久性を下げる原因になったりします@<bib>{dickinson}。

ニューコメンの発明から50年後、@<kw>{ジェームズ・ワット}は非常に単純なアイデアでこれを解決しました。
ワットが発明した@<kw>{分離凝縮器機関}のブレイクスルーは、注入された蒸気を凝縮するための凝縮器を、
シリンダーから分離して@<kw>{分離凝縮器}とした点です。
シリンダーから直結したこの凝縮器は、常に水に浸けられ低音に保たれています。
シリンダー内を蒸気が満たした時に凝縮器に繋がる弁を開くと同時に凝縮器内に冷水のジェットを吹き込むと、
シリンダー内の蒸気は勢い良く凝縮器へと流れ、その中で水へと凝縮します。
こうして、シリンダー内を高音に保ったまま蒸気を凝縮することが可能となり、
蒸気機関の効率は一気に数倍に上昇しました。
この機構は現代でも@<kw>{復水器}として受け継がれており、発電所を支える重要な施設の一つとなっています。

ワットの功績はこの他にも、蒸気機関の往復運動を回転運動に変換する@<kw>{クランク}の実用化など、
枚挙に暇がありませんが、異世界において我々が最も必要とするであろう機構は、やはりこの分離凝縮器でしょう。
この後トレビシックにより高圧蒸気機関が発明されてからも、定置型の蒸気機関としては変わらずこの仕組みが使われ続けました。
これが今日ワットが「蒸気機関の父」と呼ばれ、「蒸気機関の発展にもよおした根本的な影響において、ジェームズ・ワットほど大きな寄与をしたものはいない」@<bib>{dickinson}
とまで言わしめる原因であります。
異世界で蒸気機関を作る際にも、きっとこの知識が役に立つでしょう。

=== 異世界と特許

異世界にやって来た時に、特許制度が存在するかどうかは重要なチェックポイントの一つです。
一般に異世界もので特許が登場する機会は少ないですが、例えばGCノベルズから発刊されている『異世界転移したのでチートを生かして魔法剣士やることにする』には、
前述のコークスを使用した製鉄に対して特許を取得するシーンが登場します。

//quote{
「カエデさんですね、技術については少し前に話が来ていましたが特許型の契約をお望みとのことで。特許料は利益の５割ほどでいいですか？」

（中略）

「はぁ……　5割というのは安めなんですかね？　ちょっとこういうことには疎くて」

「ええ、私も特許契約など初めてですし詳しい契約内容は商業ギルドの人にも仲介に入ってもらって決めることになりますが
大体特許料は利益の7～5割程度が相場かと思います、これほど大きい物を独占するとなると……」

　そういうものなのか……

　これは技術が保護されているということか？　この世界の文化レベルにしてはできすぎている気がしないでもない。

　まあどこの世界にも天才とかそういった類いの人間はいるのだろう。案外この文明レベルも魔道具が便利すぎるせいだったりして。
//}

「利益の7～5割程度」の特許料は確かに高めですが、特許が金になるのは本当です。
実際、ワットが契約者に請求した特許利用料は、@<strong>{新型蒸気機関によって節約された燃料費の３分の１}と定められていました@<bib>{dickinson}。
彼は商才ある実業家@<kw>{マシュー・ボールトン}の手を借りて、特許料取得の仕組みを制度化し、莫大な富を手にします。

今後コンピューターを製造する工程において、莫大な予算が必要となってくるでしょう。
異世界に特許制度があった場合、またボールトンのような商才あふれるパートナーと出会うことができた場合は、
蒸気機関ないし高炉の発明を特許化し、一度蓄財に力を入れることをオススメします。

異世界に特許制度がない場合、この部分で大きく苦労することになるでしょう。
もっとも地球において特許制度が確立したのは近世に入ってからなので、
上の引用でも言及されているとおり、異世界の文明水準では特許制度が存在しない確率のほうが高いです。
その場合、異世界によく登場する職人ギルドや商人ギルドの専売権を利用してうまくやりくりするしかありません。

=== 注意点

以下、異世界で実際に蒸気機関を操業する際に気をつけておくべきポイントを挙げていきます。

==== 溶存空気に注意

ボイラーで煮沸する水には、純粋な水分だけでなく微量の空気や不純物が溶存しています。
これをこのまま加熱し煮沸すると、蒸気だけではなく空気も一緒に注入され、
シリンダー内に少しずつ蓄積されていきます。
これをこのまま放置すると、凝縮時に溶け残る空気の割合が少しずつ増えていき、
蒸気機関の動作効率が悪くなって、やがて止まってしまいます@<bib>{dickinson}。

これは@<kw>{ウィンド・ロッギング,wind-logging}と呼ばれる現象で、ニューコメンが蒸気機関を実用化する際に立ちはだかった壁の一つでした。
当時の科学ではこの現象を解明できなかったため、ニューコメンはこの壁を乗り越えるのに多くの試行錯誤を費やしましたが、
これを解決するのは簡単で、@<strong>{シリンダー内の蒸気が凝縮した後に、数秒間シリンダーに蒸気を空流しすればよいのです。}
こうすることによって、蒸気とともに溶存していた空気が排出され、蒸気機関は止まることなく稼働し続けます。
異世界で蒸気機関を操業する際には、必ずこれを覚えておきましょう。

==== パッキングに注意

蒸気機関の中で最も精密な部品は、ロッドに接続され各部の弁を制御する@<kw>{ピン}でも、
凝縮器内に冷水を吹き込む@<kw>{噴射ジェット}でもなく、
実は、機関の心臓部である@<strong>{シリンダーとピストン}です。

ピストンとシリンダーの隙間が蒸気を漏らさず、また摩擦なくスムーズに往復するために、
シリンダーは非常に正確な円筒形である必要があります。
ニューコメンの時代では、銃器の製造によって精密な円筒形を作る技術は知られていましたが、
蒸気機関で用いられるシリンダーの内径は大きいもので2メートルに及び、スケールがまるで違います。

そのためシリンダー製造の際にはなるべく正確な円筒形になるよう細心の注意を払う必要があります@<fn>{precise-cylinder}。
しかしやはり手工業によるには製造では限界があるため、どうしてもピストンがシリンダーにぴったり嵌まるということはないでしょう。
そこで、この2つの隙間を埋める@<kw>{パッキング}が必要になります。

//footnote[precise-cylinder][ニューコメンの時代は、鋳造した真鍮の円筒の内面を、砂を用いて一生懸命磨き上げた……とあります。]

パッキングは、蒸気機関が生まれた瞬間から現代に至るまで技術者を悩ませ続ける問題です。
ニューコメンは、ピストンに革のベルトを巻き付け、その上に水を張るという方法で、
ワットは、麻に牛脂を染み込ませたパッキングを、内側からリングで押し込むという方法でこれを解決しています。
革も麻も牛脂も、異世界では難なく手に入るでしょうから、これらの中から最も適した方法を選びましょう。

== 異世界と発電機

蒸気機関の発明から半世紀後、産業革命真っ只中のイギリスに、@<kw>{チャールズ・バベッジ}という数学者がいました。

バベッジは若くしてロンドン王立協会のメンバーとなった数学の天才でしたが、
あるとき@<fn>{arutoki}歯車とレバーで動く機械式計算機のアイデアを得たことから、
それ以降の人生を彼の思い描いた機械式計算機の設計に捧げることになります。
現世界の彼は残念ながら@<raw>{|latex|\\ruby[g]{絢爛なりし灰燼世界\}{ディメンション・オブ・スチーム\}}を発動できたりしませんが、
バベッジの発想は時代を一回りも二回りも先取りしており、
彼の設計した@<kw>{解析機関}には、現代のコンピューターに必要な、演算装置、メモリ、レジスタなどが含まれ、
完成すればプログラム可能な世界初の計算機となるはずでした。
歯車とレバーでできているのにもかかわらず、です。

//footnote[arutoki][1812年ごろ]

しかし、この解析機関は、時代を先取りしすぎていたがために、精密な部品や機構を大量に必要とし、
バベッジの時代の技術や資金ではとても実現できるものではありませんでした。
そのため、現代には彼の残した設計図だけが残されています。
現在、これらの設計図からバベッジの思い描いた解析機関を復元する、
@<kw>{Plan 28}というプロジェクトが進行中ですが、解析機関の完成には10年程度かかる見込みです。

当初、バベッジの流れを汲んだ機械式計算機を異世界で組み立てることも検討しましたが、
現代技術を用いても10年かかる代物を、異世界で現実的な時間内に組み立てられるとは思いません@<fn>{not-turing-complete}。
彼の着想はあらゆる意味で早すぎたのです。

//footnote[not-turing-complete][しかも、この計算機はプログラミング可能ですが、ジャンプなどの命令を持たないためチューリング完全ではありません。]

ところで、バベッジは、@<kw>{マイケル・ファラデー}や@<kw>{ジェームズ・マクスウェル}など、
後に@<kw>{電磁気学}として知られる学問の基礎を作り上げた科学者たちと親交があったことが知られています。
しかし、彼らが研究していた@<strong>{電気}という代物が、後にバベッジの夢想した計算機の時代をもたらそうとは、
当時としては誰ひとりとして想像していませんでした。

そう、現代のコンピューターには@<strong>{電気}が必要不可欠です。
頭書に記したような条件を満たすような計算機を実現する手段はいくつか考えられますが、
異世界で最も現実的に再現可能なものは、やはり@<kw>{電気式計算機}ということで落ち着きました。

=== 異世界と電気

電磁気学は前述の通り19世紀に発達した学問なので、普通に考えると中世ヨーロッパ風の世界でこれらが研究されている可能性は極めて低いでしょう。
しかし、それがいわゆる「異世界」であれば話は別です。

異世界には魔法があり、多くの場合「炎」「水」「氷」といった属性によるジャンル分けがなされています。
その中でも特にメジャーな属性に@<strong>{雷属性}が存在します。
雷属性の魔法というのは要するにドラクエで言うところのベギラマであり、
雷に似た放電現象を引き起こす魔法の総称……と言った扱いの場合がほとんどです。

雷属性の魔法が広く浸透している異世界ならば、
危険な凧揚げをするまでもなく、雷の正体が電気現象であることはすぐに調べがつくでしょう。
となると、そこからさらに進んだ電磁気の研究がなされていても不思議ではありません。

たとえ雷魔法がある世界でも、電動機や電球などの簡易な電力機器さえ発明されていれば、
電気を継続的に供給する装置への需要は高いはずです。
ちょうど地球において、臼を挽くだけなら人の手で足りるにもかかわらず、
効率化や自動化のために水車や風車による挽臼が普及していったのと同じような感じです。

なので、異世界において何らかの形で発電機が発明されている可能性は高いと思われます。
それが人力なのか水力なのか風力なのか、はたまた魔石とかそういう系のファンタスティックなエネルギーなのかはわかりませんが、
電磁気学の研究さえ進んでいれば、小学生でも工作できる発電機の発明を妨げるものは何一つありません。
どころか、質の高い導線さえ発見されていれば、大規模な電力システムがすでに構築されている可能性すらあります。

@<strong>{いくら魔法と言えど、結局は人間が介在しなければならないという限りにおいては、まったく科学を置き換えるに足るものではありません。}
人の手を介さないエネルギー供給、そして社会と一体化したエネルギー循環システムを構築できて初めて、科学を超えたといえるのです。
この点において、我々は異世界において魔法ではなく科学が発展している可能性を大いに考慮するべきです。
これは、異世界で電気式計算機を作るべき第2の理由でもあります。

しかし残念なことに、それほど大規模なエネルギーシステムが整った異世界には未だにお目にかかったことがありません。
これは水道や道路と同じように、いかに十分な技術があろうと、
インフラとして整えられるにはそれに見合った社会制度が必要とされるということなのかもしれません。

=== 発電機の作り方

というわけで、我々は異世界に電気が普及していなかった可能性を考えて、
発電機を一から組み上げる方法を習得しておく必要があります。

……といっても、先ほども述べたとおり、発電機に必要な機構はそう大したものではありません。
後に制作する電気式計算機に必要なのが直流電源であること、また効率の良い整流器も得難いことから、
必要とされるのは@<kw>{オルタネーター}や@<kw>{誘導発電機}ではなく大型の@<kw>{直流ダイナモ}であり、
その意味でも、（これ以前のものに比べると）非常にハードルの低い壁だと思われます。

ダイナモとは、運動エネルギーを電力に変換する発電機の中でも、特に初期に完成したものであり、
@<kw>{電磁石}と@<kw>{磁石}と@<kw>{整流子}を用いて直流電源を得るものの総称です。
ちょうど、小学校の工作でよく作る@<kw>{整流子電動機}を、逆に作動させたものだと思えばよいでしょう。
この形式の発電機は、地球ではすぐに@<kw>{交流発電機}に置き換えられて姿を消しますが、
かつて19世紀末から20世紀初頭にかけては広く用いられた形式でした。

@<kw>{ゼノブ・グラム}が発明した、世界で初めて商用に実用化された発電機は、@<kw>{多極式}の@<kw>{他励電磁発電機}でした@<bib>{hippolyte-fontaine}。
つまり、単純にN極とS極の2つの方向を向いた二極を持つコイルを磁界の中で回転させるのではなく、
5つから6つ程度の複数の方向を向いた極を持つコイルを利用するものです。
これにより、二極では回転に合わせて出力が変動し扱いづらい出力電流が平滑化され、
安定した高出力の直流電流を得ることができます。
これは、発明者の名前を取って@<kw>{グラム発電機}と呼ばれています。

グラム発電機は、当時すでに広く普及していた蒸気機関と接続され、200ボルトの直流電流を供したとされます@<bib>{history-of-dynamo}。
異世界で発電機を作る際も、基本的にはこの形式を模して作ればよいでしょう。
余裕があれば、同時代にジーメンスやホイートストンが発明した@<kw>{自励式発電機}を実装することもできます。
動力は先ほど制作した蒸気機関を使用してもいいですし、場所によっては水力ないし風力が適しているかもしれません。
ただ、異世界の水車や風車など高が知れているので、高出力を得るためにはおそらく蒸気機関を利用する必要があるでしょう。

ちなみに、発電機に必要なコイルを制作するには、@<kw>{絶縁電線}が必要ですが、
19世紀当時の科学者は主に銅線に絹布を巻きつけたものを使用していました@<bib>{history-of-wire1}。
ゴムで被覆した電線が登場するのは20世紀に入ってからです@<bib>{history-of-wire2}@<bib>{history-of-wire3}。
異世界でゴムまで製造している暇はないと思うので、特に問題なければ布の被覆で済ませるのがよいと思われます。

== 異世界と回路素子

さて、いよいよもって目的のコンピューターに近づいてきました。
このあたりで一度、コンピューターを作る時に必要なものについて考えておきましょう。

=== レッドストーンにならって

マインクラフトというゲームに興味がある方は、@<kw>{レッドストーン回路}というものを聞いたことがある人も多いと思われます。
マインクラフトは、仮想的な3次元空間の中で、建物を立てたり、狩猟をしたり、採掘をしたりと自由に生活するゲームで、
空間内を区切るブロックと言う単位で物を配置したり合成したりすることができます。
その中でも@<kw>{レッドストーン}と呼ばれるブロックは、他のいくつかのブロックと組み合わせることで回路のようなものを作ることができ、
応用すると複雑な計算やプログラミングまでできることが知られています。
これはまさしくコンピューターそのものと言っていいでしょう。

では、コンピューターを制作できるレッドストーンの機能とはどのようなものなのでしょうか？
レッドストーン回路の主要部分は、@<strong>{レッドストーン}と@<strong>{レッドストーントーチ}という部品で構成されています。

レッドストーンは電気回路で言うところの導線の役割を果たしており、ONとOFFの2つの状態をワイヤーのように伝達することができます。
また、2つのレッドストーンワイヤーを合流させれば、
入力された2つの信号のどちらかに反応するような回路（論理回路でいうOR回路）を組むことができます。

レッドストーントーチは、火の付いたトーチであり、通常ON状態を持つ信号源です。
そして重要な特徴として、@<strong>{ON状態のレッドストーンにトーチを接続すると、逆に火が消えます。}
つまり、トーチを経由してレッドストーンを接続することで、ONとOFFを逆転させる回路（論理回路でいうNOT回路）を組むことができます。

なんと、レッドストーンの持つ機能はこれだけです。
デジタル回路の知識を持った方ならすぐにピンときたでしょうが、
NOT素子とOR素子があればNAND素子を構成することができるため、
それを使って他のあらゆる論理回路を組み立てることができてしまいます。
それこそ電卓から我々が使っているコンピューターに至るまで、全てです。

レッドストーンによる回路設計を可能にしたのは、何よりもトーチの存在が大きいです。
レッドストーントーチの、入力信号を反転させて別の導線に伝えるという機能、
もっと一般化して言うと、@<strong>{ある信号が別の信号のON/OFFを制御することができるという特徴}によって、
コンピューターを作ることが可能になったのです。

コンピューターを作るのに必要なのは、突き詰めて言うとこの機能を持つ部品です。
現代のコンピューターでは、@<kw>{トランジスタ}がこの機能を担っています。
トランジスタには@<kw>{バイポーラトランジスタ}や@<kw>{電界効果トランジスタ}など多くの種類が存在しますが、
いずれも原料に@<kw>{半導体}を使用して作られています。

異世界において、この半導体を製造するのは至難の業です。
なにせ半導体の製造には、@<strong>{純度99.999999999%}という超高純度シリコンの精製が必要であり、異世界で作り始めると何十年かかるかわかりません。
膨大な設備と資産が必要となることは想像に難くないでしょう。

それでは、我々は何を使ってコンピューターを作るべきでしょうか。
我々がコンピューターを作るのに必要なのは、「ある信号が別の信号のON/OFFを制御することができる装置」です。
実は、このような機能を持つ装置は、地球でもトランジスタの発見に100年以上も先駆けて発見されていました。
それが、@<kw>{リレー}という装置です。

=== 異世界とリレー

リレーは、@<kw>{継電器}とも呼ばれる電子部品の一つであり、
小さな入力電流で大きな電流を制御するための部品です。

リレーの仕組みは非常に単純です。
リレーの入力部には小さな電磁石が接続されており、この部分に電気が流れることで磁力が発生します。
この磁力で、出力部に繋がるスイッチを物理的に開閉します。
そのため、リレーが動作する時にはスイッチが切り替わる「カチッ」という音がなります。

リレーは1835年に@<kw>{ジョセフ・ヘンリー}によって発明された、歴史ある電子部品ですが、
現代でも意外と多くの電子機器に使用されています。
例えば、車のウインカーが点滅している時に鳴る「カチッカチッ」という音は、
実はわざと鳴らしているのではなく、車体に組み込まれた車載リレーが作動している音です。

このように、現代では主に回路の開閉や保護など、ちょっとした制御に用いられるリレーですが、
先ほど挙げた、コンピューターに必要な「ある信号が別の信号のON/OFFを制御することができる」という要件を満たしています。
つまり、@<strong>{リレーだけを使ってコンピューターを構成することができます。}
リレーは先程も述べたとおり非常に単純な仕組みで動作し、
必要な部品も、鉄心、巻線、スイッチといった基本的なものばかりです。
細かな調整は必要でしょうが、これなら異世界でもなんとか製造が可能でしょう。

鉄心の材料には、透磁率が高い@<kw>{ケイ素鋼}が望ましいのですが、
トランジスタの製造が難しいのと同様の理由で、これを得るのは難しいと思われます@<fn>{silicon}。
通常の錬鉄や銑鉄でまかないましょう。

//footnote[silicon][トランジスタほどの純度は必要ないのですが、電気精製を用いる方法は大量の電力を消費するため不可能です。また、二酸化ケイ素とマグネシウムを反応させてケイ素を得るという方法もありますが、量産は難しいでしょう。]

その他の細かい材料は、鋳鉄などを用いて鋳造すればよいでしょう。ここでもやはり高炉の存在が役に立ってきます。

== 異世界とコンピューター

リレーを使えば@<em>{理論上}コンピューターを作ることができることがわかりました。
では、現実にリレーでコンピューターを作るにはどれほどの手間が必要なのでしょうか。

そもそも、トランジスタの代わりにリレーを使ってコンピューターを作るというのは、なにも夢物語ではありません。
今では多くが忘れ去られてしまいましたが、地球でもかつてリレーを使ったコンピューターが作られてきました。

=== Zuse Z3

「世界初のコンピューター」の一つ@<fn>{the-first-computer}である@<kw>{Zuse Z3}は、リレー式のコンピューターでした。

//footnote[the-first-computer][世界初のコンピューターというのは定義が難しく多くの議論を呼びますが、Z3は「世界初の動作可能でプログラム可能な自動計算機」と定義されます。]

コンピューター草創期に生まれた計算機といえば、回路素子に@<kw>{真空管}を利用した@<kw>{ENIAC}が有名ですが、
リレーを使用したZ3はそれよりも5年早く、1941年に完成していました。

Z3の製作者である@<kw>{コンラッド・ツーゼ}は、第二次大戦中のドイツを生きた技術者でした。
彼は計算機のアイデアを独力で思いついてから、チャールズ・バベッジと同じ純機械式計算機を設計し、
自宅の居間に完成させました。これが@<kw>{Zuse Z1}です。

Z1はやはりバベッジの解析機関と同じように（複雑さは段違いですが）独立した演算部とメモリを持ち、
外部からプログラム可能な汎用計算機でした。
惜しむらくは、やはり3万個におよぶ複雑な機械部品を正確に噛み合わせることに無理があり、
ほとんど正常に動作しなかった点です。
その後、ツーゼの関心は機械式計算機からリレーを使用した電気式計算機へと移行し、
演算部分をリレーに置き換えた@<kw>{Zuse Z2}を経て、完全にリレーで動作するZ3を作り上げました。

Z3には、演算部に600個、メモリ部に1400個、@<strong>{計約2000個}のリレーが使われています@<bib>{ohkoma}。
異世界で製造するにはかなり頭が痛くなる量ですが、実を言うと、Z3は我々の定義に合致するコンピューターではありません。
Z3は分かりやすい入出力を持ち、電卓のように使えるほか、映画フィルムを加工したパンチカードからプログラムを読み込むことが可能ですが、
分岐命令を備えていないため、普通に使うとチューリング完全な機械ではありません@<fn>{z3-turing-complete}。

//footnote[z3-turing-complete][「普通に使うと」と言うのは、実はZ3の完成から50年以上経った1998年に、特殊な方法でZ3でチューリングマシンを実装する方法が示され、チューリング完全であることが証明されてしまったためです。しかしいずれにせよZ3でプログラミングするのは厳しいので、チューリング不完全として扱うことにします。]

=== その後のリレー式コンピューター

Z3が完成してからトランジスタが普及するまでのわずかな間、
リレーは真空管と並んで多くのコンピューターの回路素子として使われました。
例えば、ベル研究所のModel I、II、III、IBMのHarvard Mark I、II、
国内ではカシオの14-Aや富士通のFACOM 128A, 128Bなどがリレー式コンピューターとして知られていますが、
実は、これらの多くはチューリング完全ではありません@<bib>{colossus}。
即ち、条件分岐やジャンプといった命令を持ちませんでした。

これは、当時のコンピューターが完全な万能計算機として動作する必要がなく、
特定用途の計算に使えれば十分だったためなのですが、
我々が求めるコンピューターの要求は満足にプログラミングできることなので、
特定用途の計算だけでは物足りません。
やはり最低限チューリング完全であることは抑えたいものです。

その後トランジスタの登場により時代はシリコン全盛期を迎え、
商用計算機としてリレー式コンピューターが製造されることはなくなりました。
しかし、現代でも物好きな有志によってリレー式コンピューターが制作されることがあります。

趣味で制作されたそんなコンピューターの中には、技術的に興味深いものがいくつもありますが、
その中でも特に注目したいのは、「チューリング完全な世界最小のリレー式コンピューター」を自称する@<kw>{TIM-8}@<fn>{tim-8}です。

//footnote[tim-8][TIM Relay Computer @<href>{http://www.northdownfarm.co.uk/rory/tim/tim-8.htm]

TIM-8は@<kw>{Rory Mangles}らによって制作された8ビットの@<kw>{ハーバード・アーキテクチャ}のコンピューターであり、
5つのレジスタと8つの命令セットと12バイトのメインメモリ、そしてディップスイッチで実装された16バイトのROMを持っています。
これはノイマン型でないことを除けば現代のコンピューターとほぼ同じ構成で、条件分岐やループといった命令も有しています。
この機械を用いた操作は十分プログラミングと言ってよいでしょう。

使用したリレー数は、なんとわずか@<strong>{152個}と記録されています。
TIM-8はメモリ部分に@<kw>{DRAM}を採用しているためZ3と単純に比較することはできませんが、
これはZ3が演算部に使用した600個のリレーと比べても確実に効率化されているといえるのではないでしょうか。

異世界ではDRAMとして使用できるほど信頼性の高い@<kw>{コンデンサ}は入手し難いと思われるので、
メモリには依然リレーを使用する必要があると思われます。
しかし、TIM-8の結果から類推するに、チューリング完全なマシンとして動作可能なコンピューターを作るのに必要なリレーの数は、
うまく作ればせいぜい@<strong>{300個から500個程度}で済むのではないかと推測されます。
リレーを1個1個手作りしなければならないことを考えると大変な量ですが、
時間をかければ決して不可能な数ではないはずです。

もちろん、スペックを追求し始めると切りがありません。


仮にいま異世界でコンピューターを組み立てるのに必要なリレーの数を500個とします。

== 異世界コンピューティング計画のまとめ

そう、今ここに、異世界でゼロからコンピューターを作るための計画の全貌が明かされました。
ここで、異世界にやってきてからコンピューターが完成するまでの流れを、
かかる時間の見積もりとともに振り返ってみましょう。

 1. ［１年］転生先、ないし転移先の異世界について詳しく調査する。パートナーを探す。秘められた才能がある場合は開花しておく。
 2. ［２年］高炉建設に必要な建材や鋼材を入手する。傭兵稼業などを大いに活用すること。有効な魔法があれば習得しておく。
 3. ［３年］高炉の立地に適した場所を探し、高炉を建設する。同時に蒸気機関について小型の実験を行い動作を確かめる。
 4. ［３年］蒸気機関を建設する。商業化を視野に入れて製造プロセスを確立する。同時に高炉を用いて銅線や
 5. ［］

== おわりに

「異世界に転生したら現代技術の知識で無双できるのでは？」
「古代にタイムスリップしたら現代の知識でやりたい放題できるのでは？」というのは、
誰もが一度は考えたことがあることだと思います。
実際、小説家になろうや関連サイトでは、そのような趣旨の小説が、「技術チート」というジャンルで多く投稿されています。

しかし、少しシリアスに考え始めると、そのような挑戦がいかに無謀であるかがわかります。
なにせ異世界ときたら、明かりを灯そうにも電球はなく、
プラスチックを作ろうにも油田はなく、
現代兵器を作ろうにも特殊鋼はなく、
そして、プログラミングをしようにも当然コンピューターなんてない世界なのです。

肝心の現代知識を活かすための基盤が圧倒的に足りないのです。
逆に捉えると、現代社会がいかに多くの技術基盤の上に成り立っているかということを痛感させられます。

この記事は、現代を支えるそんな技術基盤について、少しでも多く知りたいという思いから始まりました。
技術チートの定番といえば「銃」「火薬」「蒸気機関」あたりですが、
実際問題、これらの詳細な製造方法について詳しく知っている現代人がはたしてどれほどいるでしょうか？
そもそもそれ以前に、中世の冶金術について、建築技術について、紡績技術について、どれほど知っているか？
と考え始めると、我々は技術チートどころか、異世界を生き抜くことすら難しいことがわかります。

== 読書ガイド
