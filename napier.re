= 不可能図形を3Dプリントで実現する

//raw[|latex|\\chapterauthor{Napier\\_Sabre\\_V}]

//lead{
初めまして、SunProの3D担当ねいぴあさぶれ(@Napier_Sabre_V)です。
今までの出展イベントではマスコットD言語くんとGopher、それにくっつける小物を作ることに終始しており、
こうした記事を書くことはなかったのですが、毎回そういうマスコットを増やしていくにも限界があろうということで、
もっと一般的な立体を作ってその製作過程を記事にすることとなりました。
加えて、コミックマーケット89および91で配布していた3Dプリント外注に関するレポートペーパーもこの記事の後ろに掲載してあります。
//}

== 目標の検討

今回のテーマは不可能図形のうちの「ネッカーの立方体」です。
しかしそれだけでは新規性に大いに疑問がありますね。Thingiverseなどにも不可能図形の先例がいくつもあります。
//indepimage[cube-and-stairs][]
これらの作品@<bib>{Thingiverse-Cube}@<bib>{Thingiverse-Stairs}を見てみると、立体の一部を途切れさせたうえで、
途切れたところを背後に溶け込ませる手法によって繋がっているかのように見せていることに気が付きます。
また、繋がっていても
//indepimage[CubeOtherSolution][]
このような形状@<bib>{BentSolution}はInventorでは面倒なので(作れはするようですが)作りたくありません。
そこでこのような条件を課すこととします。

	* 立体の一部を途切れさせず、単一の立体によって錯視を実現すること
	* ただし曲面による強引な繋げ方をしないこと

 さて3Dプリントフレンドリーな立体は作れるのでしょうか？
(ここから先で用いているのはMetasequoiaとAutodesk Inventor Professional 2017です。
学生でなくなってこれが使えなくなった時のためにFusion 360に移行する話はまた次回にでも。)

== Metasequoia

まずネッカーの立方体の説明をしたいところですが、
手前にあるはずの辺が奥の辺よりも後ろに……などと言っても正確にイメージをつかむのは難しいので
パブリックドメインの画像を引っ張ってきました、こちらでご確認ください。
//indepimage[NeckerCube][]
それではさっくり作ってみます。
Inventorは作りたい形が定まっているときには強力ですが、あれこれ位置をずらしてみたりするのには
不向きなのでまずMetasequoiaで試作します。
//indepimage[Metaseq-1][]
椅子状の物体ができたところで、奥にある棒が手前の柱の前を通りつつ後ろへ戻るようにせねばなりません。すなわち、こう。
//indepimage[Metaseq-2][]
いきなり強引な手法をとったように見えますが、奥の四角形を歪めるよりも手前の柱を動かすほうが
全体の改変が少なくて済む気がするのでこれでよいのです。それではつなげていきましょう。
//indepimage[Metaseq-3][]
完成？でもちょっと待って！
これでは遠くに飛ばした柱は下に降りていくにしたがって、手前下側の棒は奥に行くにしたがって、細く見えてしまいますよね？
//indepimage[Metaseq-4][]
そこで奥側の面を拡大。

最後に、この錯視の最大のトリックである
「手前の面と奥の面をつないでいるように見えて、実は奥の面から出てさらに奥へ向かう」
底面の棒の見え方について検討します。
Metasequoiaのパースビュー上ではあまり問題ないように見えますが、
現実の視覚では奥に向かっていくにつれて細くなっているように見えるはずです。
棒は、「奥が手前」(な…何を言っているのかわからねーと思うが以下略)なので、
「手前」にあるはずの部分が奥より細いと違和感を感じてしまうはずです。
遠近感を騙すために奥に行くにしたがって太くならなくてはなりません(そして視覚上はほぼ均一な太さに見えるように)。
//indepimage[Metaseq-5][]
完成です。それではこの位置関係を参考にしてInventorで実現しましょう。
//indepimage[Metaseq-6][]

== Inventor

Metasequoiaではメッシュをぐりぐり動かすだけでよかったのですが、
実際に3Dプリントするとなれば重なった部分が金平糖よろしくトゲトゲしていてはいけませんね。
そこでこのように
//indepimage[Inventor-1][]
//indepimage[Inventor-2][]
ロフト機能を使って三本の飛び出した棒がピッタリくっつくようにします。
作りたいフィーチャの起点のスケッチを(本来の)立方体の頂点に相当する部分に描いておき、
飛び出した棒@<fn>{FirstFeature}の側面に沿って終点のスケッチを描けば出来上がりです。
その間はねじれがあっても自動的につないでくれます。
//footnote[FirstFeature][他の二本がくっつくベースとなる最初の一本もロフト機能で作っています。終点は既存平面からオフセットした作業平面上に描きます]
//indepimage[Inventor-3][]
おや、どうやら太さが足りないように見えますね。
でも大丈夫、終点スケッチの寸法をいじるだけでロフトも自動的に修正されます。Inventorはかしこいので。
//indepimage[Inventor-4][]
めでたしめでたし、さてこれで3Dプリントの注文をしましょ……
//indepimage[Price][]
オ゛ァ゛ァ゛―ッ！！(画像略)
仕方がありません、全パーツ分割です。ナイロン樹脂における面接着は衝撃にかなり弱いことがC91の経験から分かっているので、はめ込み式にします。
//indepimage[PartsDivided][]
闇魔術を使って各辺をバラバラにして並べなおしました。こうすると@<strong>{1,832円}で済みます。
差額の8,949円がパーツ分割の苦労、あるいは一体成形の名人(名出力機)芸の価値に相当するわけですね。
スカスカの物体を分割することで空間費(最大外形寸法によって計算)の削減を行うのは、
DMM3Dプリントを利用する場合の一般的なテクなのでどんどん使っていきましょう(一体成形にこだわらなければ)。
ただしパーツを分割しても距離が離れていたり方向がそろっていないと外形寸法を削減できません。
私の場合はInventorのアセンブリモードで各パーツを読み込み、一列に並べた上でSTL出力するという方法をとりました。

== 成果物

	* 造形精度
単純な形状のパーツの集合体であるためか、繁忙期でないためか、はたまたプリント速度が向上したのかはわかりませんが、
ウェブサイトに掲載されている発送目安の7～9日よりかなり早い4日で届きました(造形開始から発送通知までは2日でした)。
//indepimage[PrintedParts][]
こうして出力してもらうのも3回目となると、経験則らしきものが浮かび上がってきます。
その一つは「凹部と凸部による接続は難しい」ということです。	
つまり、穴をあけて、そこに差し込むことで固定する手法は取りづらいのです。
同一寸法で凹凸部を設計すると穴のほうが大きくなりがちで、
結局瞬間接着剤に頼ることになります(それでも面に直接接着剤を塗るよりは外れにくくなります)。

D言語くんの胴体と手足を繋げるのに利用したT字スリットであれば、開口部が隠れないというデメリットはありますが、
パーツが完全に外れてしまうまでに余裕があり(深く差し込んでいるため)さらにプラスマイナスどちらの誤差にも対応しやすい@<fn>{Tolerance}
のではないかと考えています(削る場合は細いヤスリが必要になりますが)。
//footnote[Tolerance][構造力学や精密工学を学んでいるわけではないので、もっと良い形状があればご教示ください]
//indepimage[BarbedConnector][]

	* 組み立て後の見た目
組み立てた状態の写真は、どうしてもパースが目立ってしまい肉眼での見た目とかなり異なるものなので省略します。写真で撮っても錯視が成り立つような設計の方法を考えたいところです。
肉眼での見た目はおおよそInventorの項で掲載した画像の通りになっています。ただし、肉眼はInventorのパースペクティブビューよりも水平方向について敏感で垂直方向について鈍感であるように感じました。
例えばInventorでは下部手前側の横棒は右側(本当は奥)に行っても太さは変わらないように見えていますが、実際は太くなっているのがはっきり見て取れます。
細く見えるぶんには太く見えるより違和感が少ないので、遠近感の補償をしようと遠くにある部分を太めにするのは慎重にしたほうがよいという教訓が得られました。

	* 塗装
「手前にあるはずの柱が奥の棒に遮られる」視覚的効果をより明確にするため、垂直方向の棒4本をグレーに塗ることとしました。
しかし仮組みをバラして塗ることは難しすぎ、また組んだ後では細かい場所で意図せぬところに塗料がついてしまったり@<fn>{NylonMat}することが多発したため、
色を演出に利用することを考えるならば真正面からテクスチャを焼き込みして石膏フルカラーで出力するべきなのかもしれません。
寸法の調整やメッシュの重複などを考えると、この場合の作業フローはMetasequoiaで全体像を作る→Inventorで正確な形状を作る→Metasequoiaにインポートして、テクスチャの焼き込みを行う、ということになりそうです。
//footnote[NylonMat][ナイロンの成型色は透明感のある白なので、一度色を付けてしまうと削るしか元に戻す手段はありません]

== 今後の方針

めでたく肉眼で錯視を実現できる立体物を作ることには成功したわけですが、
こんな簡単にできてしまうものに新規性があるわけはありませんでした。
杉原(2013)にて既に示されている通り@<bib>{Sugihara2013}、直角以外の角度を用いることによって錯視を実現するのは「不連続のトリック」や「曲面のトリック」よりは新しい手法ではあるものの、
少なくとも4年前には実現されてしまっていたのです。ただ同論文で述べられているように、
「通常の材料(板材や角材)を使った通常の加工法では、作るのが難しい」(前掲書, pp.145)のは事実なので、
3Dプリントのおかげでこの手法による不可能立体の実現が容易になったことをこうして明らかにしたところに本記事の意義を見出すとしましょう。

今回私が作ったものはだまし絵立体と呼ばれる古典的な立体錯視の一つですが、杉原(2016)によれば「新しい立体錯視が次々と発見されている」
ようであり@<bib>{Sugihara2016}、今後はより新しい形の立体錯視の3Dプリントに取り組んでいこうと思っています。
