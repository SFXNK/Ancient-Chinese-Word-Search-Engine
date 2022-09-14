#include <iostream>
#include <cstring> 
#include <cstdio>
#include <fstream>
using namespace std;

char tar[100];

char yongxue[1100] = "。谢太傅寒雪日内集，与儿女讲论文义。俄而雪骤，公欣然曰：“白雪纷纷何所似？”兄子胡儿曰：“撒盐空中差可拟。”兄女曰：“未若柳絮因风起。”公大笑乐。即公大兄无奕女，左将军王凝之妻也。#";

char chentaiqiou[1100] = "。陈太丘与友期行，期日中。过中不至，太丘舍去，去后乃至。元方时年七岁，门外戏。客问元方：“尊君在不？”答曰：“待君久不至，已去。”友人便怒：“非人哉！与人期行，相委而去。”元方曰：“君与家君期日中。日中不至，则是无信；对子骂父，则是无礼。”友人惭，下车引之。元方入门不顾。#";

char lunyushi[1100] = "。子曰：“学而时习之，不亦说乎？有朋自远方来，不亦乐乎？人不知而不愠，不亦君子乎？”曾子曰：“吾日三省吾身：为人谋而不忠乎？与朋友交而不信乎？传不习乎？”子曰：“吾十有五而志于学，三十而立，四十而不惑，五十而知天命，六十而耳顺，七十而从心所欲，不逾矩。”子曰：“温故而知新，可以为师矣。”子曰：“学而不思则罔，思而不学则殆。”子曰：“贤哉，回也！一箪食，一瓢饮，在陋巷，人不堪其忧，回也不改其乐。贤哉，回也！”子曰：“知之者不如好之者，好之者不如乐之者。”子曰：“饭疏食饮水，曲肱而枕之，乐亦在其中矣。不义而富且贵，于我如浮云。”子曰：“三人行，必有我师焉。择其善者而从之，其不善者而改之。”子在川上曰：“逝者如斯夫，不舍昼夜。”子曰：“三军可夺帅也，匹夫不可夺志也。”子夏曰：“博学而笃志，切问而近思，仁在其中矣。”#";

char jiezishu[1100] = "。夫君子之行，静以修身，俭以养德。非淡泊无以明志，非宁静无以致远。夫学须静也，才须学也，非学无以广才，非志无以成学。淫慢则不能励精，险躁则不能治性。年与时驰，意与日去，遂成枯落，多不接世，悲守穷庐，将复何及！#";

char lang[1100] = "。一屠晚归，担中肉尽，止有剩骨。途中两狼，缀行甚远。屠惧，投以骨。一狼得骨止，一狼仍从。复投之，后狼止而前狼又至。骨已尽矣，而两狼之并驱如故。屠大窘，恐前后受其敌。顾野有麦场，场主积薪其中，苫蔽成丘。屠乃奔倚其下，弛担持刀。狼不敢前，眈眈相向。少时，一狼径去，其一犬坐于前。久之，目似瞑，意暇甚。屠暴起，以刀劈狼首，又数刀毙之。方欲行，转视积薪后，一狼洞其中，意将隧入以攻其后也。身已半入，止露尻尾。屠自后断其股，亦毙之。乃悟前狼假寐，盖以诱敌。狼亦黠矣，而顷刻两毙，禽兽之变诈几何哉？止增笑耳。#";








char sunquanquan[1100] = "。初，权谓吕蒙曰：“卿今当涂掌事，不可不学！”蒙辞以军中多务。权曰：“孤岂欲卿治经为博士邪！但当涉猎，见往事耳。卿言多务，孰若孤？孤常读书，自以为大有所益。”蒙乃始就学。及鲁肃过寻阳，与蒙论议，大惊曰：“卿今者才略，非复吴下阿蒙！”蒙曰：“士别三日，即更刮目相待，大兄何见事之晚乎！”肃遂拜蒙母，结友而别。#";

char mulanshi[1100] = "。唧唧复唧唧，木兰当户织。不闻机杼声，惟闻女叹息。问女何所思，问女何所忆。女亦无所思，女亦无所忆。昨夜见军帖，可汗大点兵，军书十二卷，卷卷有爷名。阿爷无大儿，木兰无长兄，愿为市鞍马，从此替爷征。东市买骏马，西市买鞍鞯，南市买辔头，北市买长鞭。旦辞爷娘去，暮宿黄河边，不闻爷娘唤女声，但闻黄河流水鸣溅溅。旦辞黄河去，暮至黑山头，不闻爷娘唤女声，但闻燕山胡骑鸣啾啾。万里赴戎机，关山度若飞。朔气传金柝，寒光照铁衣。将军百战死，壮士十年归。归来见天子，天子坐明堂。策勋十二转，赏赐百千强。可汗问所欲，木兰不用尚书郎，愿驰千里足，送儿还故乡。爷娘闻女来，出郭相扶将；阿姊闻妹来，当户理红妆；小弟闻姊来，磨刀霍霍向猪羊。开我东阁门，坐我西阁床，脱我战时袍，著我旧时裳。当窗理云鬓，对镜帖花黄。出门看火伴，火伴皆惊忙：同行十二年，不知木兰是女郎。雄兔脚扑朔，雌兔眼迷离；双兔傍地走，安能辨我是雄雌#";

char maiyouweng[1100] = "。陈康肃公善射，当世无双，公亦以此自矜。尝射于家圃，有卖油翁释担而立，睨之久而不去。见其发矢十中八九，但微颔之。康肃问曰：”汝亦知射乎？吾射不亦精乎？”翁曰：”无他，但手熟尔。”康肃忿然曰：”尔安敢轻吾射！”翁曰：”以我酌油知之。”乃取一葫芦置于地，以钱覆其口，徐以杓酌油沥之，自钱孔入，而钱不湿。因曰：”我亦无他，惟手熟尔。”康肃笑而遣之。#";

char loushiming[1100] = "。山不在高，有仙则名。水不在深，有龙则灵。斯是陋室，惟吾德馨。苔痕上阶绿，草色入帘青。谈笑有鸿儒，往来无白丁。可以调素琴，阅金经。无丝竹之乱耳，无案牍之劳形。南阳诸葛庐，西蜀子云亭。孔子云：何陋之有？#";

char ailanshuo[1100] = "。水陆草木之花，可爱者甚蕃。晋陶渊明独爱菊。自李唐来，世人甚爱牡丹。予独爱莲之出淤泥而不染，濯清涟而不妖，中通外直，不蔓不枝，香远益清，亭亭净植，可远观而不可亵玩焉。予谓菊，花之隐逸者也；牡丹，花之富贵者也；莲，花之君子者也。噫！菊之爱，陶后鲜有闻。莲之爱，同予者何人？牡丹之爱，宜乎众矣！#";

char hezhongshi[1100] = "。沧州南一寺临河干，山门圮于河，二石兽并沉焉。阅十余岁，僧募金重修，求二石兽于水中，竟不可得。以为顺流下矣，棹数小舟，曳铁钯，寻十余里，无迹。一讲学家设帐寺中，闻之笑曰：“尔辈不能究物理，是非木杮，岂能为暴涨携之去？乃石性坚重，沙性松浮，湮于沙上，渐沉渐深耳。沿河求之，不亦颠乎？”众服为确论。一老河兵闻之，又笑曰：“凡河中失石，当求之于上流。盖石性坚重，沙性松浮，水不能冲石，其反激之力，必于石下迎水处啮沙为坎穴，渐激渐深，至石之半，石必倒掷坎穴中。如是再啮，石又再转。转转不已，遂反溯流逆上矣。求之下流，固颠；求之地中，不更颠乎？”如其言，果得于数里外。然则天下之事，但知其一，不知其二者多矣，可据理臆断欤？#";








char sanxia[1100] = "。自三峡七百里中，两岸连山，略无阙处。重岩叠嶂，隐天蔽日，自非亭午夜分，不见曦月。至于夏水襄陵，沿溯阻绝。或王命急宣，有时朝发白帝，暮到江陵，其间千二百里，虽乘奔御风，不以疾也。春冬之时，则素湍绿潭，回清倒影，绝巘多生怪柏，悬泉瀑布，飞漱其间，清荣峻茂，良多趣味。每至晴初霜旦，林寒涧肃，常有高猿长啸，属引凄异，空谷传响，哀转久绝。故渔者歌曰：“巴东三峡巫峡长，猿鸣三声泪沾裳。”#";

char daxiezhong[1100] = "。山川之美，古来共谈。高峰入云，清流见底。两岸石壁，五色交辉。青林翠竹，四时俱备。晓雾将歇，猿鸟乱鸣；夕日欲颓，沉鳞竞跃，实是欲界之仙都，自康乐以来，未复有能与其奇者。#";

char jichengtian[1100] = "。元丰六年十月十二日夜，解衣欲睡，月色入户，欣然起行。念无与为乐者，遂至承天寺寻张怀民。怀民亦未寝，相与步于中庭。庭下如积水空明，水中藻荇交横，盖竹柏影也。何夜无月？何处无竹柏？但少闲人如吾两人者耳。#";

char yuzhuyuan[1100] = "。风烟俱净，天山共色。从流飘荡，任意东西。自富阳至桐庐一百许里，奇山异水，天下独绝。水皆缥碧，千丈见底。游鱼细石，直视无碍。急湍甚箭，猛浪若奔。夹岸高山，皆生寒树，负势竞上，互相轩邈，争高直指，千百成峰。泉水激石，泠泠作响；好鸟相鸣，嘤嘤成韵。蝉则千转不穷，猿则百叫无绝。鸢飞戾天者，望峰息心；经纶世务者，窥谷忘反。横柯上蔽，在昼犹昏；疏条交映，有时见日。#";

char mengzier[1100] = "。景春曰：“公孙衍、张仪岂不诚大丈夫哉？一怒而诸侯惧，安居而天下熄。”孟子曰：“是焉得为大丈夫乎？子未学礼乎？丈夫之冠也，父命之；女子之嫁也，母命之，往送之门，戒之曰：‘往之女家，必敬必戒，无违夫子！’以顺为正者，妾妇之道也。居天下之广居，立天下之正位，行天下之大道。得志，与民由之；不得志，独行其道。富贵不能淫，贫贱不能移，威武不能屈，此之谓大丈夫。”舜发于畎亩之中，傅说举于版筑之间，胶鬲举于鱼盐之中，管夷吾举于士，孙叔敖举于海，百里奚举于市。故天将降大任于是人也，必先苦其心志，劳其筋骨，饿其体肤，空乏其身，行拂乱其所为，所以动心忍性，曾益其所不能。人恒过，然后能改，困于心衡于虑而后作，征于色发于声而后喻。入则无法家拂士，出则无敌国外患者，国恒亡，然后知生于忧患而死于安乐也。#";

char yugongyishan[1100] = "。太行、王屋二山，方七百里，高万仞，本在冀州之南，河阳之北。北山愚公者，年且九十，面山而居。惩山北之塞，出入之迂也。聚室而谋曰：“吾与汝毕力平险，指通豫南，达于汉阴，可乎？”杂然相许。其妻献疑曰：“以君之力，曾不能损魁父之丘，如太行、王屋何？且焉置土石？”杂曰：“投诸渤海之尾，隐土之北。”遂率子孙荷担者三夫，叩石垦壤，箕畚运于渤海之尾。邻人京城氏之孀妻有遗男，始龀，跳往助之。寒暑易节，始一反焉。河曲智叟笑而止之曰：“甚矣，汝之不惠！以残年余力，曾不能毁山之一毛，其如土石何？”北山愚公长息曰：“汝心之固，固不可彻，曾不若孀妻弱子。虽我之死，有子存焉；子又生孙，孙又生子；子又有子，子又有孙；子子孙孙无穷匮也，而山不加增，何苦而不平？”河曲智叟亡以应。操蛇之神闻之，惧其不已也，告之于帝。帝感其诚，命夸娥氏二子负二山，一厝朔东，一厝雍南。自此，冀之南，汉之阴，无陇断焉。#";

char zhouyafu[1100] = "。文帝之后六年，匈奴大入边。乃以宗正刘礼为将军，军霸上；祝兹侯徐厉为将军，军棘门；以河内守亚夫为将军，军细柳：以备胡。上自劳军。至霸上及棘门军，直驰入，将以下骑送迎。已而之细柳军，军士吏被甲，锐兵刃，彀弓弩，持满。天子先驱至，不得入。先驱曰：“天子且至！”军门都尉曰：“将军令曰：‘军中闻将军令，不闻天子之诏。’”居无何，上至，又不得入。于是上乃使使持节诏将军：“吾欲入劳军。”亚夫乃传言开壁门。壁门士吏谓从属车骑曰：“将军约，军中不得驱驰。”于是天子乃按辔徐行。至营，将军亚夫持兵揖曰：“介胄之士不拜，请以军礼见。”天子为动，改容式车。使人称谢：“皇帝敬劳将军。”成礼而去。既出军门，群臣皆惊。文帝曰：“嗟呼，此真将军矣！曩者霸上、棘门军，若儿戏耳，其将固可袭而虏也。至于亚夫，可得而犯邪？”称善者久之。#";








char taohuayuan[1100] = "。晋太元中，武陵人捕鱼为业。缘溪行，忘路之远近。忽逢桃花林，夹岸数百步，中无杂树，芳草鲜美，落英缤纷，渔人甚异之，复前行，欲穷其林。林尽水源，便得一山，山有小口，仿佛若有光。便舍船，从口入。初极狭，才通人。复行数十步，豁然开朗。土地平旷，屋舍俨然，有良田美池桑竹之属。阡陌交通，鸡犬相闻。其中往来种作，男女衣着，悉如外人。黄发垂髫，并怡然自乐。见渔人，乃大惊，问所从来。具答之。便要还家，设酒杀鸡作食。村中闻有此人，咸来问讯。自云先世避秦时乱，率妻子邑人来此绝境，不复出焉，遂与外人间隔。问今是何世，乃不知有汉，无论魏晋。此人一一为具言所闻，皆叹惋。余人各复延至其家，皆出酒食。停数日，辞去。此中人语云：“不足为外人道也。”既出，得其船，便扶向路，处处志之。及郡下，诣太守，说如此。太守即遣人随其往，寻向所志，遂迷，不复得路。南阳刘子骥，高尚士也，闻之，欣然规往。未果，寻病终，后遂无问津者。#";

char xiaoshitan[1100] = "。从小丘西行百二十步，隔篁竹，闻水声，如鸣珮环，心乐之。伐竹取道，下见小潭，水尤清冽。全石以为底，近岸，卷石底以出，为坻，为屿，为嵁，为岩。青树翠蔓，蒙络摇缀，参差披拂。潭中鱼可百许头，皆若空游无所依，日光下澈，影布石上。佁然不动，俶尔远逝，往来翕忽。似与游者相乐。潭西南而望，斗折蛇行，明灭可见。其岸势犬牙差互，不可知其源。坐潭上，四面竹树环合，寂寥无人，凄神寒骨，悄怆幽邃。以其境过清，不可久居，乃记之而去。同游者：吴武陵，龚古，余弟宗玄。隶而从者，崔氏二小生：曰恕己，曰奉壹。#";

char hezhouji[1500] = "。明有奇巧人曰王叔远，能以径寸之木，为宫室、器皿、人物，以至鸟兽、木石，罔不因势象形，各具情态。尝贻余核舟一，盖大苏泛赤壁云。舟首尾长约八分有奇，高可二黍许。中轩敞者为舱，箬篷覆之。旁开小窗，左右各四，共八扇。启窗而观，雕栏相望焉。闭之，则右刻“山高月小，水落石出”，左刻“清风徐来，水波不兴”，石青糁之。船头坐三人，中峨冠而多髯者为东坡，佛印居右，鲁直居左。苏、黄共阅一手卷。东坡右手执卷端，左手抚鲁直背。鲁直左手执卷末，右手指卷，如有所语。东坡现右足，鲁直现左足，各微侧，其两膝相比者，各隐卷底衣褶中。佛印绝类弥勒，袒胸露乳，矫首昂视，神情与苏、黄不属。卧右膝，诎右臂支船，而竖其左膝，左臂挂念珠倚之——珠可历历数也。舟尾横卧一楫。楫左右舟子各一人。居右者椎髻仰面，左手倚一衡木，右手攀右趾，若啸呼状。居左者右手执蒲葵扇，左手抚炉，炉上有壶，其人视端容寂，若听茶声然。其船背稍夷，则题名其上，文曰“天启壬戌秋日，虞山王毅叔远甫刻”，细若蚊足，钩画了了，其色墨。又用篆章一，文曰“初平山人”，其色丹。通计一舟，为人五；为窗八；为箬篷，为楫，为炉，为壶，为手卷，为念珠各一；对联、题名并篆文，为字共三十有四。而计其长，曾不盈寸。盖简桃核修狭者为之。嘻，技亦灵怪矣哉！#";

char zhuangzier[1100] = "。北冥有鱼，其名为鲲。鲲之大，不知其几千里也；化而为鸟，其名为鹏。鹏之背，不知其几千里也；怒而飞，其翼若垂天之云。是鸟也，海运则将徙于南冥。南冥者，天池也。《齐谐》者，志怪者也。《谐》之言曰：“鹏之徙于南冥也，水击三千里，抟扶摇而上者九万里，去以六月息者也。”野马也，尘埃也，生物之以息相吹也。天之苍苍，其正色邪？其远而无所至极邪？其视下也，亦若是则已矣。庄子与惠子游于濠梁之上。庄子曰：“鲦鱼出游从容，是鱼之乐也。”惠子曰：“子非鱼，安知鱼之乐？”庄子曰：“子非我，安知我不知鱼之乐？”惠子曰：“我非子，固不知子矣；子固非鱼也，子之不知鱼之乐全矣！”庄子曰：“请循其本。子曰‘汝安知鱼乐’云者，既已知吾知之而问我，我知之濠上也。”#";

char lijier[1100] = "。虽有嘉肴，弗食，不知其旨也；虽有至道，弗学，不知其善也。是故学然后知不足，教然后知困。知不足，然后能自反也；知困，然后能自强也。故曰：教学相长也。《兑命》曰：“学学半。”其此之谓乎。大道之行也，天下为公，选贤与能，讲信修睦。故人不独亲其亲，不独子其子，使老有所终，壮有所用，幼有所长，矜、寡、孤、独、废疾者皆有所养，男有分，女有归。货恶其弃于地也，不必藏于己；力恶其不出于身也，不必为己。是故谋闭而不兴，盗窃乱贼而不作，故外户而不闭，是谓大同。#";

char mashuo[1100] = "。世有伯乐，然后有千里马。千里马常有，而伯乐不常有。故虽有名马，祗辱于奴隶人之手，骈死于槽枥之间，不以千里称也。马之千里者，一食或尽粟一石。食马者不知其能千里而食也。是马也，虽有千里之能，食不饱，力不足，才美不外见，且欲与常马等不可得，安求其能千里也？策之不以其道，食之不能尽其材，鸣之而不能通其意，执策而临之，曰：“天下无马！”呜呼！其真无马邪？其真不知马也！#";

char maowuwei[1100] = "。八月秋高风怒号，卷我屋上三重茅。茅飞渡江洒江郊，高者挂罥长林梢，下者飘转沉塘坳。南村群童欺我老无力，忍能对面为盗贼。公然抱茅入竹去，唇焦口燥呼不得，归来倚杖自叹息。俄顷风定云墨色，秋天漠漠向昏黑。布衾多年冷似铁，娇儿恶卧踏里裂。床头屋漏无干处，雨脚如麻未断绝。自经丧乱少睡眠，长夜沾湿何由彻！安得广厦千万间，大庇天下寒士俱欢颜！风雨不动安如山。呜呼！何时眼前突兀见此屋，吾庐独破受冻死亦足！#";

char maitanweng[1100] = "。卖炭翁，伐薪烧炭南山中。满面尘灰烟火色，两鬓苍苍十指黑。卖炭得钱何所营？身上衣裳口中食。可怜身上衣正单，心忧炭贱愿天寒。夜来城外一尺雪，晓驾炭车辗冰辙。牛困人饥日已高，市南门外泥中歇。翩翩两骑来是谁？黄衣使者白衫儿。手把文书口称敕，回车叱牛牵向北。一车炭，千余斤，宫使驱将惜不得。半匹红纱一丈绫，系向牛头充炭直。#";









char yueyanglou[1100] = "。庆历四年春，滕子京谪守巴陵郡。越明年，政通人和，百废具兴。乃重修岳阳楼，增其旧制，刻唐贤今人诗赋于其上。属予作文以记之。予观夫巴陵胜状，在洞庭一湖。衔远山，吞长江，浩浩汤汤，横无际涯；朝晖夕阴，气象万千。此则岳阳楼之大观也，前人之述备矣。然则北通巫峡，南极潇湘，迁客骚人，多会于此，览物之情，得无异乎？若夫淫雨霏霏，连月不开，阴风怒号，浊浪排空；日星隐曜，山岳潜形；商旅不行，樯倾楫摧；薄暮冥冥，虎啸猿啼。登斯楼也，则有去国怀乡，忧谗畏讥，满目萧然，感极而悲者矣。至若春和景明，波澜不惊，上下天光，一碧万顷；沙鸥翔集，锦鳞游泳；岸芷汀兰，郁郁青青。而或长烟一空，皓月千里，浮光跃金，静影沉璧，渔歌互答，此乐何极！登斯楼也，则有心旷神怡，宠辱偕忘，把酒临风，其喜洋洋者矣。嗟夫！予尝求古仁人之心，或异二者之为，何哉？不以物喜，不以己悲；居庙堂之高则忧其民；处江湖之远则忧其君。是进亦忧，退亦忧。然则何时而乐耶？其必曰“先天下之忧而忧，后天下之乐而乐”乎。噫！微斯人，吾谁与归？时六年九月十五日。#";

char zuiwengting[1100] = "。环滁皆山也。其西南诸峰，林壑尤美，望之蔚然而深秀者，琅琊也。山行六七里，渐闻水声潺潺而泻出于两峰之间者，酿泉也。峰回路转，有亭翼然临于泉上者，醉翁亭也。作亭者谁？山之僧智仙也。名之者谁？太守自谓也。太守与客来饮于此，饮少辄醉，而年又最高，故自号曰醉翁也。醉翁之意不在酒，在乎山水之间也。山水之乐，得之心而寓之酒也。若夫日出而林霏开，云归而岩穴暝，晦明变化者，山间之朝暮也。野芳发而幽香，佳木秀而繁阴，风霜高洁，水落而石出者，山间之四时也。朝而往，暮而归，四时之景不同，而乐亦无穷也。至于负者歌于途，行者休于树，前者呼，后者应，伛偻提携，往来而不绝者，滁人游也。临溪而渔，溪深而鱼肥。酿泉为酒，泉香而酒洌；山肴野蔌，杂然而前陈者，太守宴也。宴酣之乐，非丝非竹，射者中，弈者胜，觥筹交错，起坐而喧哗者，众宾欢也。苍颜白发，颓然乎其间者，太守醉也。已而夕阳在山，人影散乱，太守归而宾客从也。树林阴翳，鸣声上下，游人去而禽鸟乐也。然而禽鸟知山林之乐，而不知人之乐；人知从太守游而乐，而不知太守之乐其乐也。醉能同其乐，醒能述以文者，太守也。太守谓谁？庐陵欧阳修也。#";

char huxinting[1100] = "。崇祯五年十二月，余住西湖。大雪三日，湖中人鸟声俱绝。是日更定矣，余拏一小舟，拥毳衣炉火，独往湖心亭看雪。雾凇沆砀，天与云与山与水，上下一白。湖上影子，惟长堤一痕、湖心亭一点、与余舟一芥，舟中人两三粒而已。到亭上，有两人铺毡对坐，一童子烧酒炉正沸。见余，大喜曰：“湖中焉得更有此人！”拉余同饮。余强饮三大白而别。问其姓氏，是金陵人，客此。及下船，舟子喃喃曰：“莫说相公痴，更有痴似相公者！”#";








char yuwosuo[2000] = "。鱼，我所欲也；熊掌，亦我所欲也。二者不可得兼，舍鱼而取熊掌者也。生，亦我所欲也；义，亦我所欲也。二者不可得兼，舍生而取义者也。生亦我所欲，所欲有甚于生者，故不为苟得也；死亦我所恶，所恶有甚于死者，故患有所不辟也。如使人之所欲莫甚于生，则凡可以得生者何不用也？使人之所恶莫甚于死者，则凡可以辟患者何不为也？由是则生而有不用也，由是则可以辟患而有不为也。是故所欲有甚于生者，所恶有甚于死者。非独贤者有是心也，人皆有之，贤者能勿丧耳。一箪食，一豆羹，得之则生，弗得则死。呼尔而与之，行道之人弗受；蹴尔而与之，乞人不屑也。万钟则不辩礼义而受之，万钟于我何加焉！为宫室之美，妻妾之奉，所识穷乏者得我与？乡为身死而不受，今为宫室之美为之；乡为身死而不受，今为妻妾之奉为之；乡为身死而不受，今为所识穷乏者得我而为之；是亦不可以已乎？此之谓失其本心。#";

char tangjvbu[2000] = "。秦王使人谓安陵君曰：“寡人欲以五百里之地易安陵，安陵君其许寡人！”安陵君曰：“大王加惠，以大易小，甚善；虽然，受地于先王，愿终守之，弗敢易！”秦王不说。安陵君因使唐雎使于秦。秦王谓唐雎曰：“寡人以五百里之地易安陵，安陵君不听寡人，何也？且秦灭韩亡魏，而君以五十里之地存者，以君为长者，故不错意也。今吾以十倍之地，请广于君，而君逆寡人者，轻寡人与？”唐雎对曰：“否，非若是也。安陵君受地于先王而守之，虽千里不敢易也，岂直五百里哉？”秦王怫然怒，谓唐雎曰：“公亦尝闻天子之怒乎？”唐雎对曰：“臣未尝闻也。”秦王曰：“天子之怒，伏尸百万，流血千里。”唐雎曰：“大王尝闻布衣之怒乎？”秦王曰：“布衣之怒，亦免冠徒跣，以头抢地耳。”唐雎曰：“此庸夫之怒也，非士之怒也。夫专诸之刺王僚也，彗星袭月；聂政之刺韩傀也，白虹贯日；要离之刺庆忌也，仓鹰击于殿上。此三子者，皆布衣之士也，怀怒未发，休祲降于天，与臣而将四矣。若士必怒，伏尸二人，流血五步，天下缟素，今日是也。”挺剑而起。秦王色挠，长跪而谢之曰：“先生坐！何至于此！寡人谕矣：夫韩、魏灭亡，而安陵以五十里之地存者，徒以有先生也。”#";

char songdongyang[2000] = "。余幼时即嗜学。家贫，无从致书以观，每假借于藏书之家，手自笔录，计日以还。天大寒，砚冰坚，手指不可屈伸，弗之怠。录毕，走送之，不敢稍逾约。以是人多以书假余，余因得遍观群书。既加冠，益慕圣贤之道，又患无硕师、名人与游，尝趋百里外，从乡之先达执经叩问。先达德隆望尊，门人弟子填其室，未尝稍降辞色。余立侍左右，援疑质理，俯身倾耳以请；或遇其叱咄，色愈恭，礼愈至，不敢出一言以复；俟其欣悦，则又请焉。故余虽愚，卒获有所闻。当余之从师也，负箧曳屣，行深山巨谷中，穷冬烈风，大雪深数尺，足肤皲裂而不知。至舍，四支僵劲不能动，媵人持汤沃灌，以衾拥覆，久而乃和。寓逆旅，主人日再食，无鲜肥滋味之享。同舍生皆被绮绣，戴朱缨宝饰之帽，腰白玉之环，左佩刀，右备容臭，烨然若神人；余则缊袍敝衣处其间，略无慕艳意。以中有足乐者，不知口体之奉不若人也。盖余之勤且艰若此。今虽耄老，未有所成，犹幸预君子之列，而承天子之宠光，缀公卿之后，日侍坐备顾问，四海亦谬称其氏名，况才之过于余者乎？今诸生学于太学，县官日有廪稍之供，父母岁有裘葛之遗，无冻馁之患矣；坐大厦之下而诵《诗》《书》，无奔走之劳矣；有司业、博士为之师，未有问而不告，求而不得者也；凡所宜有之书，皆集于此，不必若余之手录，假诸人而后见也。其业有不精，德有不成者，非天质之卑，则心不若余之专耳，岂他人之过哉！东阳马生君则，在太学已二年，流辈甚称其贤。余朝京师，生以乡人子谒余，撰长书以为贽，辞甚畅达，与之论辩，言和而色夷。自谓少时用心于学甚劳，是可谓善学者矣！其将归见其亲也，余故道为学之难以告之。谓余勉乡人以学者，余之志也；诋我夸际遇之盛而骄乡人者，岂知余者哉！#";

char caoguilun[2000] = "。十年春，齐师伐我。公将战，曹刿请见。其乡人曰：“肉食者谋之，又何间焉？”刿曰：“肉食者鄙，未能远谋。”乃入见。问：“何以战？”公曰：“衣食所安，弗敢专也，必以分人。”对曰：“小惠未徧，民弗从也。”公曰：“牺牲玉帛，弗敢加也，必以信。”对曰：“小信未孚，神弗福也。”公曰：“小大之狱，虽不能察，必以情。”对曰：“忠之属也。可以一战。战则请从。”公与之乘，战于长勺。公将鼓之。刿曰：“未可。”齐人三鼓。刿曰：“可矣。”齐师败绩。公将驰之。刿曰：“未可。”下视其辙，登轼而望之，曰：“可矣。”遂逐齐师。既克，公问其故。对曰：”夫战，勇气也。一鼓作气，再而衰，三而竭。彼竭我盈，故克之。夫大国，难测也，惧有伏焉。吾视其辙乱，望其旗靡，故逐之。”#";

char zoujifeng[2000] = "。邹忌修八尺有余，而形貌昳丽。朝服衣冠，窥镜，谓其妻曰：“我孰与城北徐公美？”其妻曰：“君美甚，徐公何能及君也？”城北徐公，齐国之美丽者也。忌不自信，而复问其妾曰：“吾孰与徐公美？”妾曰：“徐公何能及君也？”旦日，客从外来，与坐谈，问之客曰：“吾与徐公孰美？”客曰：“徐公不若君之美也。”明日徐公来，孰视之，自以为不如；窥镜而自视，又弗如远甚。暮寝而思之，曰：“吾妻之美我者，私我也；妾之美我者，畏我也；客之美我者，欲有求于我也。”于是入朝见威王，曰：“臣诚知不如徐公美。臣之妻私臣，臣之妾畏臣，臣之客欲有求于臣，皆以美于徐公。今齐地方千里，百二十城，宫妇左右莫不私王，朝廷之臣莫不畏王，四境之内莫不有求于王：由此观之，王之蔽甚矣。”王曰：“善。”乃下令：“群臣吏民能面刺寡人之过者，受上赏；上书谏寡人者，受中赏；能谤讥于市朝，闻寡人之耳者，受下赏。”令初下，群臣进谏，门庭若市；数月之后，时时而间进；期年之后，虽欲言，无可进者。燕、赵、韩、魏闻之，皆朝于齐。此所谓战胜于朝廷。#";

char chushibiao[2000] = "。先帝创业未半而中道崩殂，今天下三分，益州疲弊，此诚危急存亡之秋也。然侍卫之臣不懈于内，忠志之士忘身于外者，盖追先帝之殊遇，欲报之于陛下也。诚宜开张圣听，以光先帝遗德，恢弘志士之气，不宜妄自菲薄，引喻失义，以塞忠谏之路也。宫中府中，俱为一体，陟罚臧否，不宜异同。若有作奸犯科及为忠善者，宜付有司论其刑赏，以昭陛下平明之理，不宜偏私，使内外异法也。侍中、侍郎郭攸之、费祎、董允等，此皆良实，志虑忠纯，是以先帝简拔以遗陛下。愚以为宫中之事，事无大小，悉以咨之，然后施行，必能裨补阙漏，有所广益。将军向宠，性行淑均，晓畅军事，试用于昔日，先帝称之曰能，是以众议举宠为督。愚以为营中之事，悉以咨之，必能使行阵和睦，优劣得所。亲贤臣，远小人，此先汉所以兴隆也；亲小人，远贤臣，此后汉所以倾颓也。先帝在时，每与臣论此事，未尝不叹息痛恨于桓、灵也。侍中、尚书、长史、参军，此悉贞良死节之臣，愿陛下亲之信之，则汉室之隆，可计日而待也。臣本布衣，躬耕于南阳，苟全性命于乱世，不求闻达于诸侯。先帝不以臣卑鄙，猥自枉屈，三顾臣于草庐之中，咨臣以当世之事，由是感激，遂许先帝以驱驰。后值倾覆，受任于败军之际，奉命于危难之间，尔来二十有一年矣。先帝知臣谨慎，故临崩寄臣以大事也。受命以来，夙夜忧叹，恐托付不效，以伤先帝之明，故五月渡泸，深入不毛。今南方已定，兵甲已足，当奖率三军，北定中原，庶竭驽钝，攘除奸凶，兴复汉室，还于旧都。此臣所以报先帝而忠陛下之职分也。至于斟酌损益，进尽忠言，则攸之、祎、允之任也。愿陛下托臣以讨贼兴复之效，不效，则治臣之罪，以告先帝之灵。若无兴德之言，则责攸之、祎、允等之慢，以彰其咎；陛下亦宜自谋，以咨诹善道，察纳雅言，深追先帝遗诏，臣不胜受恩感激。今当远离，临表涕零，不知所言。#";


int ans = 0, s = 0, e = 0, ls = 0, le = 0, whbk[7];
char output[100];
int fileout;
char filen[100];
FILE* fin, * fout;
void cleanout() {
	for (int i = 0; i < 100; i++)output[i] = (char)0;
}
void searchs() {
	ans = 0;
	cleanout();
	s = 0, e = 0, ls = 0, le = 0;
	char* str;
	if (fileout) {
		filen[2] = tar[0];
		filen[3] = tar[1];
		fout = fopen_s(filen, "wb");
	}
	cout << "搜索结果" << endl << endl;;
	if (!whbk[1])
	{
		str = yongxue;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《咏雪》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《咏雪》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (chentaiqiou[i] == '#')break;
			if (chentaiqiou[i] == tar[0] && chentaiqiou[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)chentaiqiou[k] == -95 && (int)chentaiqiou[k + 1] == -93) || ((int)chentaiqiou[k] == -95 && (int)chentaiqiou[k + 1] == -79) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -95) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -69) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)chentaiqiou[k] == -95 && (int)chentaiqiou[k + 1] == -80) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)chentaiqiou[k] == -95 && (int)chentaiqiou[k + 1] == -93) || ((int)chentaiqiou[k] == -95 && (int)chentaiqiou[k + 1] == -79) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -95) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -69) || ((int)chentaiqiou[k] == -93 && (int)chentaiqiou[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = chentaiqiou[j];
				cout << output;
				printf(" ——《陈太丘与友期行》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《陈太丘与友期行》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (lunyushi[i] == '#')break;
			if (lunyushi[i] == tar[0] && lunyushi[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)lunyushi[k] == -95 && (int)lunyushi[k + 1] == -93) || ((int)lunyushi[k] == -95 && (int)lunyushi[k + 1] == -79) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -95) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -69) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)lunyushi[k] == -95 && (int)lunyushi[k + 1] == -80) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)lunyushi[k] == -95 && (int)lunyushi[k + 1] == -93) || ((int)lunyushi[k] == -95 && (int)lunyushi[k + 1] == -79) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -95) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -69) || ((int)lunyushi[k] == -93 && (int)lunyushi[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = lunyushi[j];
				cout << output;
				printf(" ——《论语十则》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《论语十则》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (jiezishu[i] == '#')break;
			if (jiezishu[i] == tar[0] && jiezishu[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)jiezishu[k] == -95 && (int)jiezishu[k + 1] == -93) || ((int)jiezishu[k] == -95 && (int)jiezishu[k + 1] == -79) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -95) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -69) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)jiezishu[k] == -95 && (int)jiezishu[k + 1] == -80) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)jiezishu[k] == -95 && (int)jiezishu[k + 1] == -93) || ((int)jiezishu[k] == -95 && (int)jiezishu[k + 1] == -79) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -95) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -69) || ((int)jiezishu[k] == -93 && (int)jiezishu[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = jiezishu[j];
				cout << output;
				printf(" ——《诫子书》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《诫子书》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (lang[i] == '#')break;
			if (lang[i] == tar[0] && lang[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)lang[k] == -95 && (int)lang[k + 1] == -93) || ((int)lang[k] == -95 && (int)lang[k + 1] == -79) || ((int)lang[k] == -93 && (int)lang[k + 1] == -95) || ((int)lang[k] == -93 && (int)lang[k + 1] == -69) || ((int)lang[k] == -93 && (int)lang[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)lang[k] == -95 && (int)lang[k + 1] == -80) || ((int)lang[k] == -93 && (int)lang[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)lang[k] == -95 && (int)lang[k + 1] == -93) || ((int)lang[k] == -95 && (int)lang[k + 1] == -79) || ((int)lang[k] == -93 && (int)lang[k + 1] == -95) || ((int)lang[k] == -93 && (int)lang[k + 1] == -69) || ((int)lang[k] == -93 && (int)lang[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = lang[j];
				cout << output;
				printf(" ——《狼》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《狼》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
	}
	if (!whbk[2])
	{
		for (int i = 0; i == i; i += 2) {
			if (sunquanquan[i] == '#')break;
			if (sunquanquan[i] == tar[0] && sunquanquan[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)sunquanquan[k] == -95 && (int)sunquanquan[k + 1] == -93) || ((int)sunquanquan[k] == -95 && (int)sunquanquan[k + 1] == -79) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -95) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -69) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)sunquanquan[k] == -95 && (int)sunquanquan[k + 1] == -80) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)sunquanquan[k] == -95 && (int)sunquanquan[k + 1] == -93) || ((int)sunquanquan[k] == -95 && (int)sunquanquan[k + 1] == -79) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -95) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -69) || ((int)sunquanquan[k] == -93 && (int)sunquanquan[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = sunquanquan[j];
				cout << output;
				printf(" ——《孙权劝学》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《孙权劝学》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (mulanshi[i] == '#')break;
			if (mulanshi[i] == tar[0] && mulanshi[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)mulanshi[k] == -95 && (int)mulanshi[k + 1] == -93) || ((int)mulanshi[k] == -95 && (int)mulanshi[k + 1] == -79) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -95) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -69) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)mulanshi[k] == -95 && (int)mulanshi[k + 1] == -80) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)mulanshi[k] == -95 && (int)mulanshi[k + 1] == -93) || ((int)mulanshi[k] == -95 && (int)mulanshi[k + 1] == -79) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -95) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -69) || ((int)mulanshi[k] == -93 && (int)mulanshi[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = mulanshi[j];
				cout << output;
				printf(" ——《木兰诗》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《木兰诗》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (maiyouweng[i] == '#')break;
			if (maiyouweng[i] == tar[0] && maiyouweng[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)maiyouweng[k] == -95 && (int)maiyouweng[k + 1] == -93) || ((int)maiyouweng[k] == -95 && (int)maiyouweng[k + 1] == -79) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -95) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -69) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)maiyouweng[k] == -95 && (int)maiyouweng[k + 1] == -80) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)maiyouweng[k] == -95 && (int)maiyouweng[k + 1] == -93) || ((int)maiyouweng[k] == -95 && (int)maiyouweng[k + 1] == -79) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -95) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -69) || ((int)maiyouweng[k] == -93 && (int)maiyouweng[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = maiyouweng[j];
				cout << output;
				printf(" ——《卖油翁》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《卖油翁》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (loushiming[i] == '#')break;
			if (loushiming[i] == tar[0] && loushiming[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)loushiming[k] == -95 && (int)loushiming[k + 1] == -93) || ((int)loushiming[k] == -95 && (int)loushiming[k + 1] == -79) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -95) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -69) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)loushiming[k] == -95 && (int)loushiming[k + 1] == -80) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)loushiming[k] == -95 && (int)loushiming[k + 1] == -93) || ((int)loushiming[k] == -95 && (int)loushiming[k + 1] == -79) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -95) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -69) || ((int)loushiming[k] == -93 && (int)loushiming[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = loushiming[j];
				cout << output;
				printf(" ——《陋室铭》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, "——《陋室铭》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (ailanshuo[i] == '#')break;
			if (ailanshuo[i] == tar[0] && ailanshuo[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)ailanshuo[k] == -95 && (int)ailanshuo[k + 1] == -93) || ((int)ailanshuo[k] == -95 && (int)ailanshuo[k + 1] == -79) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -95) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -69) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)ailanshuo[k] == -95 && (int)ailanshuo[k + 1] == -80) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)ailanshuo[k] == -95 && (int)ailanshuo[k + 1] == -93) || ((int)ailanshuo[k] == -95 && (int)ailanshuo[k + 1] == -79) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -95) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -69) || ((int)ailanshuo[k] == -93 && (int)ailanshuo[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = ailanshuo[j];
				cout << output;
				printf(" ——《爱莲说》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, "  ——《爱莲说》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (hezhongshi[i] == '#')break;
			if (hezhongshi[i] == tar[0] && hezhongshi[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)hezhongshi[k] == -95 && (int)hezhongshi[k + 1] == -93) || ((int)hezhongshi[k] == -95 && (int)hezhongshi[k + 1] == -79) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -95) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -69) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)hezhongshi[k] == -95 && (int)hezhongshi[k + 1] == -80) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)hezhongshi[k] == -95 && (int)hezhongshi[k + 1] == -93) || ((int)hezhongshi[k] == -95 && (int)hezhongshi[k + 1] == -79) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -95) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -69) || ((int)hezhongshi[k] == -93 && (int)hezhongshi[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = hezhongshi[j];
				cout << output;
				printf(" ——《河中石兽》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《河中石兽》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
	}
	if (!whbk[3])
	{
		for (int i = 0; i == i; i += 2) {
			if (sanxia[i] == '#')break;
			if (sanxia[i] == tar[0] && sanxia[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)sanxia[k] == -95 && (int)sanxia[k + 1] == -93) || ((int)sanxia[k] == -95 && (int)sanxia[k + 1] == -79) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -95) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -69) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)sanxia[k] == -95 && (int)sanxia[k + 1] == -80) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)sanxia[k] == -95 && (int)sanxia[k + 1] == -93) || ((int)sanxia[k] == -95 && (int)sanxia[k + 1] == -79) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -95) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -69) || ((int)sanxia[k] == -93 && (int)sanxia[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = sanxia[j];
				cout << output;
				printf(" ——《三峡》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《三峡》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (daxiezhong[i] == '#')break;
			if (daxiezhong[i] == tar[0] && daxiezhong[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)daxiezhong[k] == -95 && (int)daxiezhong[k + 1] == -93) || ((int)daxiezhong[k] == -95 && (int)daxiezhong[k + 1] == -79) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -95) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -69) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)daxiezhong[k] == -95 && (int)daxiezhong[k + 1] == -80) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)daxiezhong[k] == -95 && (int)daxiezhong[k + 1] == -93) || ((int)daxiezhong[k] == -95 && (int)daxiezhong[k + 1] == -79) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -95) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -69) || ((int)daxiezhong[k] == -93 && (int)daxiezhong[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = daxiezhong[j];
				cout << output;
				printf(" ——《答谢中书》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《答谢中书》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (jichengtian[i] == '#')break;
			if (jichengtian[i] == tar[0] && jichengtian[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)jichengtian[k] == -95 && (int)jichengtian[k + 1] == -93) || ((int)jichengtian[k] == -95 && (int)jichengtian[k + 1] == -79) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -95) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -69) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)jichengtian[k] == -95 && (int)jichengtian[k + 1] == -80) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)jichengtian[k] == -95 && (int)jichengtian[k + 1] == -93) || ((int)jichengtian[k] == -95 && (int)jichengtian[k + 1] == -79) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -95) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -69) || ((int)jichengtian[k] == -93 && (int)jichengtian[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = jichengtian[j];
				cout << output;
				printf(" ——《记承天寺夜游》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《记承天寺夜游》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (yuzhuyuan[i] == '#')break;
			if (yuzhuyuan[i] == tar[0] && yuzhuyuan[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)yuzhuyuan[k] == -95 && (int)yuzhuyuan[k + 1] == -93) || ((int)yuzhuyuan[k] == -95 && (int)yuzhuyuan[k + 1] == -79) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -95) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -69) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)yuzhuyuan[k] == -95 && (int)yuzhuyuan[k + 1] == -80) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)yuzhuyuan[k] == -95 && (int)yuzhuyuan[k + 1] == -93) || ((int)yuzhuyuan[k] == -95 && (int)yuzhuyuan[k + 1] == -79) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -95) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -69) || ((int)yuzhuyuan[k] == -93 && (int)yuzhuyuan[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = yuzhuyuan[j];
				cout << output;
				printf(" ——《与朱元思书》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《与朱元思书》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (mengzier[i] == '#')break;
			if (mengzier[i] == tar[0] && mengzier[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)mengzier[k] == -95 && (int)mengzier[k + 1] == -93) || ((int)mengzier[k] == -95 && (int)mengzier[k + 1] == -79) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -95) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -69) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)mengzier[k] == -95 && (int)mengzier[k + 1] == -80) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)mengzier[k] == -95 && (int)mengzier[k + 1] == -93) || ((int)mengzier[k] == -95 && (int)mengzier[k + 1] == -79) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -95) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -69) || ((int)mengzier[k] == -93 && (int)mengzier[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = mengzier[j];
				cout << output;
				printf(" ——《孟子二章》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《孟子二章》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (yugongyishan[i] == '#')break;
			if (yugongyishan[i] == tar[0] && yugongyishan[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)yugongyishan[k] == -95 && (int)yugongyishan[k + 1] == -93) || ((int)yugongyishan[k] == -95 && (int)yugongyishan[k + 1] == -79) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -95) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -69) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)yugongyishan[k] == -95 && (int)yugongyishan[k + 1] == -80) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)yugongyishan[k] == -95 && (int)yugongyishan[k + 1] == -93) || ((int)yugongyishan[k] == -95 && (int)yugongyishan[k + 1] == -79) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -95) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -69) || ((int)yugongyishan[k] == -93 && (int)yugongyishan[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = yugongyishan[j];
				cout << output;
				printf(" ——《愚公移山》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《愚公移山》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (zhouyafu[i] == '#')break;
			if (zhouyafu[i] == tar[0] && zhouyafu[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)zhouyafu[k] == -95 && (int)zhouyafu[k + 1] == -93) || ((int)zhouyafu[k] == -95 && (int)zhouyafu[k + 1] == -79) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -95) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -69) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)zhouyafu[k] == -95 && (int)zhouyafu[k + 1] == -80) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)zhouyafu[k] == -95 && (int)zhouyafu[k + 1] == -93) || ((int)zhouyafu[k] == -95 && (int)zhouyafu[k + 1] == -79) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -95) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -69) || ((int)zhouyafu[k] == -93 && (int)zhouyafu[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = zhouyafu[j];
				cout << output;
				printf(" ——《周亚夫军细柳》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, "——《周亚夫军细柳》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
	}
	if (!whbk[4])
	{
		for (int i = 0; i == i; i += 2) {
			if (taohuayuan[i] == '#')break;
			if (taohuayuan[i] == tar[0] && taohuayuan[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)taohuayuan[k] == -95 && (int)taohuayuan[k + 1] == -93) || ((int)taohuayuan[k] == -95 && (int)taohuayuan[k + 1] == -79) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -95) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -69) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)taohuayuan[k] == -95 && (int)taohuayuan[k + 1] == -80) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)taohuayuan[k] == -95 && (int)taohuayuan[k + 1] == -93) || ((int)taohuayuan[k] == -95 && (int)taohuayuan[k + 1] == -79) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -95) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -69) || ((int)taohuayuan[k] == -93 && (int)taohuayuan[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = taohuayuan[j];
				cout << output;
				printf(" ——《桃花源记》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《桃花源记》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (xiaoshitan[i] == '#')break;
			if (xiaoshitan[i] == tar[0] && xiaoshitan[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)xiaoshitan[k] == -95 && (int)xiaoshitan[k + 1] == -93) || ((int)xiaoshitan[k] == -95 && (int)xiaoshitan[k + 1] == -79) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -95) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -69) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)xiaoshitan[k] == -95 && (int)xiaoshitan[k + 1] == -80) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)xiaoshitan[k] == -95 && (int)xiaoshitan[k + 1] == -93) || ((int)xiaoshitan[k] == -95 && (int)xiaoshitan[k + 1] == -79) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -95) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -69) || ((int)xiaoshitan[k] == -93 && (int)xiaoshitan[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = xiaoshitan[j];
				cout << output;
				printf(" ——《小石潭记》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《小石潭记》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (hezhouji[i] == '#')break;
			if (hezhouji[i] == tar[0] && hezhouji[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)hezhouji[k] == -95 && (int)hezhouji[k + 1] == -93) || ((int)hezhouji[k] == -95 && (int)hezhouji[k + 1] == -79) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -95) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -69) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)hezhouji[k] == -95 && (int)hezhouji[k + 1] == -80) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)hezhouji[k] == -95 && (int)hezhouji[k + 1] == -93) || ((int)hezhouji[k] == -95 && (int)hezhouji[k + 1] == -79) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -95) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -69) || ((int)hezhouji[k] == -93 && (int)hezhouji[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = hezhouji[j];
				cout << output;
				printf(" ——《核舟记》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《核舟记》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (zhuangzier[i] == '#')break;
			if (zhuangzier[i] == tar[0] && zhuangzier[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)zhuangzier[k] == -95 && (int)zhuangzier[k + 1] == -93) || ((int)zhuangzier[k] == -95 && (int)zhuangzier[k + 1] == -79) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -95) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -69) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)zhuangzier[k] == -95 && (int)zhuangzier[k + 1] == -80) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)zhuangzier[k] == -95 && (int)zhuangzier[k + 1] == -93) || ((int)zhuangzier[k] == -95 && (int)zhuangzier[k + 1] == -79) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -95) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -69) || ((int)zhuangzier[k] == -93 && (int)zhuangzier[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = zhuangzier[j];
				cout << output;
				printf(" ——《庄子二章》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《庄子二章》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (lijier[i] == '#')break;
			if (lijier[i] == tar[0] && lijier[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)lijier[k] == -95 && (int)lijier[k + 1] == -93) || ((int)lijier[k] == -95 && (int)lijier[k + 1] == -79) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -95) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -69) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)lijier[k] == -95 && (int)lijier[k + 1] == -80) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)lijier[k] == -95 && (int)lijier[k + 1] == -93) || ((int)lijier[k] == -95 && (int)lijier[k + 1] == -79) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -95) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -69) || ((int)lijier[k] == -93 && (int)lijier[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = lijier[j];
				cout << output;
				printf(" ——《礼记二则》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《礼记二则》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (mashuo[i] == '#')break;
			if (mashuo[i] == tar[0] && mashuo[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)mashuo[k] == -95 && (int)mashuo[k + 1] == -93) || ((int)mashuo[k] == -95 && (int)mashuo[k + 1] == -79) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -95) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -69) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)mashuo[k] == -95 && (int)mashuo[k + 1] == -80) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)mashuo[k] == -95 && (int)mashuo[k + 1] == -93) || ((int)mashuo[k] == -95 && (int)mashuo[k + 1] == -79) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -95) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -69) || ((int)mashuo[k] == -93 && (int)mashuo[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = mashuo[j];
				cout << output;
				printf(" ——《马说》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《马说》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (maowuwei[i] == '#')break;
			if (maowuwei[i] == tar[0] && maowuwei[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)maowuwei[k] == -95 && (int)maowuwei[k + 1] == -93) || ((int)maowuwei[k] == -95 && (int)maowuwei[k + 1] == -79) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -95) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -69) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)maowuwei[k] == -95 && (int)maowuwei[k + 1] == -80) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)maowuwei[k] == -95 && (int)maowuwei[k + 1] == -93) || ((int)maowuwei[k] == -95 && (int)maowuwei[k + 1] == -79) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -95) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -69) || ((int)maowuwei[k] == -93 && (int)maowuwei[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = maowuwei[j];
				cout << output;
				printf(" ——《茅屋为秋风所破歌》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《茅屋为秋风所破歌》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (maitanweng[i] == '#')break;
			if (maitanweng[i] == tar[0] && maitanweng[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)maitanweng[k] == -95 && (int)maitanweng[k + 1] == -93) || ((int)maitanweng[k] == -95 && (int)maitanweng[k + 1] == -79) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -95) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -69) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)maitanweng[k] == -95 && (int)maitanweng[k + 1] == -80) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)maitanweng[k] == -95 && (int)maitanweng[k + 1] == -93) || ((int)maitanweng[k] == -95 && (int)maitanweng[k + 1] == -79) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -95) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -69) || ((int)maitanweng[k] == -93 && (int)maitanweng[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = maitanweng[j];
				cout << output;
				printf(" ——《卖炭翁》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《卖炭翁》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
	}
	if (!whbk[5])
	{
		for (int i = 0; i == i; i += 2) {
			if (yueyanglou[i] == '#')break;
			if (yueyanglou[i] == tar[0] && yueyanglou[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)yueyanglou[k] == -95 && (int)yueyanglou[k + 1] == -93) || ((int)yueyanglou[k] == -95 && (int)yueyanglou[k + 1] == -79) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -95) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -69) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)yueyanglou[k] == -95 && (int)yueyanglou[k + 1] == -80) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)yueyanglou[k] == -95 && (int)yueyanglou[k + 1] == -93) || ((int)yueyanglou[k] == -95 && (int)yueyanglou[k + 1] == -79) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -95) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -69) || ((int)yueyanglou[k] == -93 && (int)yueyanglou[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = yueyanglou[j];
				cout << output;
				printf(" ——《岳阳楼记》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《岳阳楼记》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (zuiwengting[i] == '#')break;
			if (zuiwengting[i] == tar[0] && zuiwengting[i + 1] == tar[1]) {

				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)zuiwengting[k] == -95 && (int)zuiwengting[k + 1] == -93) || ((int)zuiwengting[k] == -95 && (int)zuiwengting[k + 1] == -79) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -95) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -69) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)zuiwengting[k] == -95 && (int)zuiwengting[k + 1] == -80) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)zuiwengting[k] == -95 && (int)zuiwengting[k + 1] == -93) || ((int)zuiwengting[k] == -95 && (int)zuiwengting[k + 1] == -79) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -95) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -69) || ((int)zuiwengting[k] == -93 && (int)zuiwengting[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = zuiwengting[j];
				cout << output;
				printf(" ——《醉翁亭记》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《醉翁亭记》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		for (int i = 0; i == i; i += 2) {
			if (huxinting[i] == '#')break;
			if (huxinting[i] == tar[0] && huxinting[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)huxinting[k] == -95 && (int)huxinting[k + 1] == -93) || ((int)huxinting[k] == -95 && (int)huxinting[k + 1] == -79) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -95) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -69) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)huxinting[k] == -95 && (int)huxinting[k + 1] == -80) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)huxinting[k] == -95 && (int)huxinting[k + 1] == -93) || ((int)huxinting[k] == -95 && (int)huxinting[k + 1] == -79) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -95) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -69) || ((int)huxinting[k] == -93 && (int)huxinting[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = huxinting[j];
				cout << output;
				printf(" ——《湖心亭看雪》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, "  ——《湖心亭看雪》\n");
				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
	}
	if (!whbk[6]) {
		str = yuwosuo;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《鱼我所欲也》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《鱼我所欲也》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		str = tangjvbu;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《唐雎不辱使命》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《唐雎不辱使命》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		str = songdongyang;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《送东阳马生序》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《送东阳马生序》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		str = caoguilun;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《曹刿论战》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《曹刿论战》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		str = zoujifeng;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《邹忌讽齐王纳谏》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《邹忌讽齐王纳谏》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
		str = chushibiao;
		for (int i = 0; i == i; i += 2) {
			if (str[i] == '#')break;
			if (str[i] == tar[0] && str[i + 1] == tar[1]) {
				for (int k = i; k >= 0; k -= 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						s = k + 2; break;
					}//         左引号                                  冒号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -80) || ((int)str[k] == -93 && (int)str[k + 1] == -70))
					{
						s = k; break;
					}
				}
				for (int k = i; k == k; k += 2) {//                 句号                                                右引号                                             感叹号                                         分号                                                   问号 
					if (((int)str[k] == -95 && (int)str[k + 1] == -93) || ((int)str[k] == -95 && (int)str[k + 1] == -79) || ((int)str[k] == -93 && (int)str[k + 1] == -95) || ((int)str[k] == -93 && (int)str[k + 1] == -69) || ((int)str[k] == -93 && (int)str[k + 1] == -65))
					{
						e = k + 1; break;
					}
				}
				if (s == ls && e == le)continue;
				for (int j = s; j <= e; j++)output[j - s] = str[j];
				cout << output;
				printf(" ——《出师表》\n");
				if (fileout) {

					fprintf(fout, "%s", output);
					fprintf(fout, " ——《出师表》\n");

				}
				cleanout();
				ans++;
				ls = s, le = e;
				s = 0, e = 0;
			}
		}
		ls = -1, le = -1;
	}
	if (fileout)
		fclose(fout);
	if (ans) {
		cout << endl << endl << endl << endl << "共计" << ans << "个结果";
		if (fileout) {
			cout << ",已导出到与程序相同文件夹下“   " << filen << "   ”" << endl;
		}
	}
	else cout << endl << endl << "无搜索结果" << endl;
	cout << endl << endl << endl;
}
void setreadin() {
	ifstream fin("setting.ini");
	for (int i = 1; i <= 6; i++)
		fin >> whbk[i];
	fin >> fileout;
	fin.close();
}
void wset() {
	ofstream fout("setting.ini");
	for (int i = 1; i <= 6; i++)
		fout << whbk[i] << " ";
	fout << fileout << " ";
	fout.close();
}
void changeset() {
	while (1)
	{
		cout << "                                ———更改设置———" << endl;
		cout << "(0)退出" << endl;
		cout << endl << "     搜索范围 当前设置" << endl << endl;
		if (!whbk[1])cout << "(1)七上：进行搜索" << endl;
		else cout << "(1)七上：不进行搜索" << endl;
		if (!whbk[2])cout << "(2)七下：进行搜索" << endl;
		else cout << "(2)七下：不进行搜索" << endl;
		if (!whbk[3])cout << "(3)八上：进行搜索" << endl;
		else cout << "(3)八上：不进行搜索" << endl;
		if (!whbk[4])cout << "(4)八下：进行搜索" << endl;
		else cout << "(4)八下：不进行搜索" << endl;
		if (!whbk[5])cout << "(5)九上：进行搜索" << endl;
		else cout << "(5)九上：不进行搜索" << endl;
		if (!whbk[6])cout << "(6)九下：进行搜索" << endl;
		else cout << "(6)九下：不进行搜索" << endl;
		cout << endl << endl << "     文件输出 当前设置" << endl << endl;
		if (fileout)cout << "(7)将搜索结果导出为文本文档" << endl;
		else cout << "(7)不将搜索结果导出" << endl;
		char opt[10];
		cout << endl << endl << endl << endl << endl << "输入选项对应序号以变更对应设置" << endl << endl << endl << endl << endl << endl;
		while (1)
		{
			cin >> opt;
			if ((int)opt[0] - 48 > 7 || (int)opt[0] - 48 < 0) {
				cout << "输入错误,请重新输入" << endl;
			}
			else if ((int)opt[0] - 48 == 0)return;
			else if ((int)opt[0] - 48 < 7) {
				if (whbk[(int)opt[0] - 48] == 0)
					whbk[(int)opt[0] - 48] = 1;
				else whbk[(int)opt[0] - 48] = 0;
				cout << "已更改" << endl;
				wset();
				break;
			}
			else if ((int)opt[0] - 48 < 8) {
				if (fileout == 0)fileout = 1;
				else fileout = 0;
				cout << "已更改" << endl;
				wset();
				break;
			}
		}
	}
}
const char sz[5] = "设置";
void syo() {
	while (1) {
		cout << "1703LFK友情制作：       " << endl;
		cout << "                      ———语文文言文查询系统(V2.0)———" << endl;
		cout << "                             输入“设置”以更改设置" << endl;
		cout << "                             输入“查询”以开始查询" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cin >> tar;
		if (tar[0] == sz[0]) {
			if (tar[1] == sz[1]) {
				if (tar[2] == sz[2]) {
					if (tar[3] == sz[3]) {
						changeset();
					}
				}
			}
		}
		else break;
	}
}
int main(int argc, char** argv) {
	setreadin();
	syo();
	filen[0] = (char)-95;
	filen[1] = (char)-80;
	filen[4] = (char)-95;
	filen[5] = (char)-79;
	filen[6] = (char)-75;
	filen[7] = (char)-60;
	filen[8] = (char)-53;
	filen[9] = (char)-47;
	filen[10] = (char)-53;
	filen[11] = (char)-9;
	filen[12] = (char)-67;
	filen[13] = (char)-31;
	filen[14] = (char)-71;
	filen[15] = (char)-5;
	filen[16] = '.';
	filen[17] = 't';
	filen[18] = 'x';
	filen[19] = 't';
	while (1) {
		cout << endl << endl << "输入以查询:";
		cin >> tar;
		if ((int)tar[0] > 0) {
			cout << "输入有误,请重新输入" << endl;
			continue;
		}
		searchs();
	}
	return 0;
}


































