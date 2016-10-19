#pragma once
#include "Intermediary.h"
#include <SDL_image.h>
#include <SDL.h>
#include <SDL_main.h>
#include <SDL_keyboard.h>
#include <SDL_ttf.h>
#include <SDL_keycode.h>
//#include "sdl\SDL.h"
//#include "sdl\SDL_keyboard.h"
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2_image.lib")
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2.lib")
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2_ttf.lib")
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2_ttf.lib")
class ScreenZahvatchik9enchancerO : public IncludeCode
{
public:
	void/* exciting::*/run(int aut)
	{
		if (NLHE.vars[6] > NLHE.vars[7])
		{

			if (NLHE.MainEvent.key.keysym.sym == SDLK_F5)
				SDL_SetWindowFullscreen(NLHE.mainvictim.em_window, 0);
			NLHE.objects[inc].objvars[13] += 1; //14
	 	}
	}
};		
class Curser : public IncludeCode
{
public:
	void /*exciting::*/run(int aut)
	{
		if (NLHE.vars[6] > NLHE.vars[7])
		{
			if (NLHE.MainEvent.key.keysym.sym == SDLK_SPACE)
				NLHE.level++;
			NLHE.objects[inc].objvars[13] += 1; //14
		}
	}
};
class ICnpi : public IncludeCode
{
private:
	int rz(int h, int j)
	{
		if (h > j)
		{
			return h - j;
		}
		else {
			return j - h;
		}
	}
	int npi(int aut)
	{
		int leadj = 4;
		for (int j = 4; j < 51; j++)
		{
			if (NLHE.objects[aut].vars[j] > NLHE.objects[aut].vars[leadj] && rz(j, NLHE.vars[3]) < 15)
				leadj = j;
		}
		int touse = leadj - 3;
		NLHE.objects[aut].vars[NLHE.objects[aut].vars[3]] = NLHE.objects[aut].vars[50 + touse];
	}
public:
	void /*npir::*/run()
	{
		npi(inc);
	}
};
class MainMessenger : public IncludeCode
{
public:
	int gameLine = 0;
	int lns[8];
	int Yes[25];
	int No[25];
	int slide = 0;
	char* slides[2][1300] = { "--slide0--", "Cuny pictures представляет", "--slide1--", "При поддержке дополненной реальности" ,
		"--slide2--" , "Представляют", "--slide3--"
		, "Война... Война никогда не углепластик... Интенсивность тепловыделения от трения превысила все рекорды нидерландских велосепедистов. ",
		"--slide4--", "Великое Лобковое ШИпение вызвало у вас рост гармональных целей, фойна забрала у вас всё - шлюх, бухло и дом в гетто из стеклопакетов" ,
		"--slide5--", "Ваше фаргус пробуждается. Вы проснулись, тело негодует от 6 утра, в которые вы видите около своего сральника необычного афропакистанца.",
		"--slide6--" , "Его доблесть поглащает даже ваш перегар, вызванный медицинским спиртом, выпитым вами в надежде уталить собственную жажду.",
		"--slide7--", "И по велению небес и бомжара с ведра слез", "--slide8--", "Уста поддельного брожения раздвигаются", "--slide9--", "-Ты еблан, я твой дочь",
		"--slide10", "И словно чорный пистолет ваше тело пронизает щекотание вашего гноя на подбородке", "--slide14--",
		"Вы пытаетесь высказать надежду в роллы, нопоневоле вспоминаете о вазилине в вашем горле", "--slide15--", "Пытаясь выглядеть разумно вы кропотливо схаркиваете казахстан ему на руку", "--slide16--",
		"Боль вашего третьего глаза начинает проявляться. Вы чувствуете себя неловко, ведь пытаясь привести себя в чувство, вы даёте ему пощёчину, протыкаяего правую щёку гвоздём в вашем запясье.", "--slide16--", "неловко бля",
		"--slide17--", "Вы слышете открытие ширинки.", "--slide18--", "Вы не понимаете ситуацию и пытаетесь петь гимн украины, но ,словно шпроты, душой вы в Талине.",
		"--slide19--", "Но в мнгновение вы больше не сосуд слоника, ваш разум теряет связь с реальностью",
		"--slide20--", "-----------------------ГЛАВА 2 - СТРАХ------------------------------", "--slide22--",
		"На мгновение вы пронизаетесь храбростью интеллегента, сосущего вашу щёку.", "--slide23--", "Вы медленно приходите в себя и перестаёте слышать алкоголь под губой. вам плохо",
		"--slide24--", "Мужчина ждёт что-то от вас... Пока вы медленно приходите в себя, поминая всё выбуханное, вы замечаете в чеченце что-то знакомое", "--slide25--",
		"Ваш рука магадан, - выдавил из себяинтеллегент южных регионов.", "--slide26--", "Вы ,считая либо себя либо его долбаёбом,  поддатливо киваете. Но вам не нравится лобзик, который вы видите перед запястьем",
		"--slide27--", "Вам нужно объяснить всю ситуацию, вы пытаетесь выдавить из себя хоть слово, однако вас прерывает по-деловому одетый парниша со двора. ",
		"--slide28--YESNO", "Ананасы, ссьер. Мы наебнуться не без цели, видите в.", "--slide29--",
		"Вы смотрите своим больным от съеденной крысы коньюктивитом косым правым глазом на него. Вы выглядете устрашающе, однакокак бы не так, его явно не устроила ваша реакция", "--slide30--", "Вы дерзко, схаркнув зуб с третьего ряда, наебнулись в яму. Вы явно вспоминаете , чувствуя горький вкус осенних листьев, о лете, которое вы засталив последних своих воспоминаниях. Так же вы вспоминате даже название кладбища, на котором вас хоронят. Вас раздирает пыл истинного самца дагестана, вы начинаете справляться с вашими судорогами, вправляете",
		"--slide31--", "Плечо в вашей шее и чувствуете прилив божьей силы.", "--slide32--", "Встав вы поняли - вы тирг", "--slide33--",
		"Двоя одетых параллельно по погоде паренька с лопатами , в незамеченных вами,руках и ржавым лобзиком никак не отреагировали на ваши действия. Единственное, вызвшавшее у них изменение реакции - начавшийса октябрьский прозладный дождь. ", "--slide34--", "Пользуясь шансом вы глядите свою вафельку",
		"--slide35--", "И тут вы понимаете - судя по всему, вероятно, они не собираются вас закапывать. Что-то не так", "--slide36--YESNO", "Ублюдок, твоя мать, что ты к Pala?", "--slide37--", "Вы молчите, однако они поняли.",
		"--slide38--", "Эй, банан, вот трюки на патч.", "--slide39--", "(счётчик гривен) пополняется...", "--slide40--", "Кажется, они что-то хотят.", "--slide41--", "-Вы должны организовать встречу, pezdyuk", "--slide42--",
		"Они протягивают вам пакет с клеям. Вы уже было подносите его ко лбу, но пасаны явно показали настороженность воледола", "--slide43--", "-Обратите внимание этикетку, этот парень не любит лишних слов в пакете с наклейками",
		"--slide44--", "Они протягивают вам фото серьёзной одинокой кошатницы за 40. Вы слегка напуганы, но их кивания вас успокаивают.", "--slide45--", "Лопата нежно с разворота гладит вам затылок.", "--slide46--", "Боль, сука",
		"--slide47--", "Боль, сук", "--slide48--", "Боль, су", "--slide49--", "Боль, с", "--slide50--", "Боль", "--slide51--", "Бол...... Ваше размышление прерывает прерывистое заигрывание музыки. Кажется, это что-то из классики",
		"--slide52--", "Да, вы абсолютно правы , кажется это времён холодной войны..", "--slide53--", "Вы узнаёте эти слова и этот шаурм, ваше тело невольно подигрывает ритму", "--slide54--",
		"Ваши уста открываются, вы , вспоминая, шепчите...", "--slide55--", "Вы приступаете петь и вас засасывает в ритм песни.... Вы чувствуете ДРАЕВ", "--slide56--", "...Казахстан угражает нам бомбардировкой..", "--slide57--",
		"Вы открываете глаза и непринуждённо затыкаетесь", "--slide58--", "Всё оказалось не совсем так... Как вы думали.", "--slide59--",
		"Вы проснулись не за столиком пристижного паба, а в туше довоенной свиньи, чьё брюхо уже перегнало на ваше ебало личинки чего-то не совсем понятного", "--slide60--", "Что-то не так. Вы явно видите некоторое дерьмо.", "--slide61--", "Вытащив запястье из силизёнки (своей) вы достаёте фото заказчика.",
		"--slide62--", "Леди за 40, кошатница", "--slide63--", "Что-то выходит сзади из-за угла", "--slide64--",
		"Вам страшно и вместо попытки выглянуть из-за туши ( слишком палевно ) вы решаетесь поискать в кармане с ключаме свою заточку", "--slide65--", "Вы явно опоздали.", "--slide66--", "Вы всматриваетесь в кро.. лед..и и явно видите в ней что-то знакомое... Вы смотрите на фото и пытаетесь вспомнить место, ставшее обиталищем пакету с клеем",
		"--slide67--", "Оно медленно звереет.", "--slide68--", "Вы проверяете вашу силизёнку. ", "--slide69--", "Кажется, несмотря на кровь в пакете оно довольно", "--slide70--", "Оно уходит, вы достаёте руками ваши живые только благодаря машонке быка ноги",
		"--slide71--", "Вы смотрите на свой кошелёк...... Наконец, будто бы наступила пора забытости в этом тяжёлом мире и вы нашли примерение с козлодойским раем, вы чувствуете удовлетворение.", "--slide72--", "Вы выъодие на улицу и в ваш нос бьёт уже не заточка, а запах свежего пост апокалипсиса.", "--slide73--",
		"Обогощённая частицами бетта распада вода аккуратно стекает с развалин горящего приюта. На улице то ли туман, то ли гарь.", "--slide73--", "Благодать пробирает ваше похмелье.", "--slide74--", "Даже блювата из вашего пропитого ебальника на вкус не так горька.", "--slide75--", "Вы решаете пройтись по улице. (почему же точка??)", "--slide76--", "Только тело чувствует боль, ваше лицо нуждается в отдыхе и ваша рука больше нет необходимости для игл",
		"--slide77--", "----------------------Глава 3 - ОТКРОВЕНИЕ-------------------------", "--slide78--", "Ваш валерианы достигла кипения соединений и метана ожог", "--slide79--", "Вы идёте по прекрасно благоухающей набережной очистного сооружения", "--slide80--",
		"Несмотря на прерывистый аромат вскрытой силизёнки , навящего демонстрирующей вам прелести размножение членистоногих , вам захотелось хлебнуть горяченького...", "--slide81--", "Вы слишите колокола....",
		"--slide82--", "Мелодия завораживает ваш дух , пейзаж ужасает. Начинается дождь", "--slide83--", "Вы промакаете пока идёте к величественному сооружению, громандные пенопластовые двери открываются пред вами.",
		"--slide84--", "--Ave mokoroshka...Sintus ave de mokorona inna vutivus tru..", "--slide85--", "Вы заваливаетесь в молитвенный зал, падая коленом на розочку из бутылки под пиво, ваша силизёнка вываливается, повисая на артерии.",
		"--slide86--", "Вы тыпаетесь встать, но это , сцука, трудно, ваш гореч слишком селён.", "--slide87--", "Вы ощущаете присутствие кого-то. Поднимая голову, вы начинаете видить седого пожилого мужчина лет 14", "--slide88--",
		"Он , с высока смотря на вас, спрашивает", "--slide89YESNO--", "-Me ка макароны?", "--slide90--", "Пытаясь ответить, вы вспоминаете гонорею у вас в ухе и невольно начинаете задумываться", "--slide91--",
		"Но настойчиво , словно шпроты, он выдавливает - ", "--slide92YESNO--", "-Я краб и ты краб, мой брат", "--slide93--", "Холокостная философия азиатских швейных леди из кастрюли придают молитвенному залу крайне амтосферный аромат",
		"--slide94--", "Одетых в цветную бумагу священник очищает разум ваш", "--slide95--", "В зале заиграла благодать, кажется, прислужники исполняют хоровые процедуры", "--slide96--", "Они , плавно переходя к молитве, По одному запели", "--slide97--", "-Tu potoropis... U nas shas kotleetkii.... ",
		"--slide98YESNO--", "Священник отводит ваш взгляд на своё измученное педофилией малолетних трупов тайских голубей лицо. - С макарошками?", "--slide99--", "Он задумчиво смотрит на вашу силизёнку", "--slide100--",
		"Несмотря на будящая в вас любовь гною личинок в вашей коже ваши глаза медленно смачивают насекомых на ресницах.", "--slide101--",
		"пишу это в начале октября, вроде первого я хз. целью этого проекта было протестировать возможности написанного мной движка. тут должно было быть несколько концовок, эпичный подъёб всего на свете и всего, что я наебну на нетрезвую голову.", "--slide102--",
		"но случилось то, чего я , блядь, ожидать вообще не смел. в прошлом году мне диагностировали психоз, вызванный стрессом. за весь тот год, судя по самочувствию, он развивался.", "--slide103--", "в надежде выйти из такой убогой жизненной ситуации , я начал пить, курить, нашёл себе новую компанию, где нашёл девушку, с которой хотелось бы всего вообще возможного.", "--slide104--", "но в силу всего произошедшего позже, я впал в состояние", "--slide105--",
		"в котором не хочу даже этого.", "--slide106--", "скорее всего, это просто оправдание моей собственной лени, но, в таком состоянии мне сложно даже говорить.", "--slide107--",
		"извините за все те данные обещания, спасибо за бета тест", "--slide108--", "." };
	void /*work ::*/ run()
	{
		if (slide < 109)
		{
			if (NLHE.vars[6] == 1)
			{//14
				NLHE.objects[inc].vars[12] = slide;
				NLHE.objects[inc].objvarschar[19] = slides[0][slide++];
				if (NLHE.MainEvent.key.keysym.sym == SDLK_KP_ENTER)
				{
					gameLine += Yes[slide];
				}
				else {
					gameLine += No[slide];
				}
				slide += 2;
			}
		}

	}


};
class MainStream : public IncludeCode
{
private:
	int x(int x1)
	{
		if (NLHE.Camera[0] < x1)
			return x1 - NLHE.Camera[0];
	}
	int y(int y1)
	{
		if (NLHE.Camera[1] < y1)
			return y1 - NLHE.Camera[1];
	}
public:
	void/* gettingStart ::*/ run()
	{
		int renderGet[2];
		int clicked = 0;
		int ing = 0;
		SDL_Surface *joer = nullptr;
		SDL_Texture *img = nullptr;
		while (ing == 0)
		{
			if (SDL_PollEvent(&NLHE.MainEvent) == 1)
			{
				switch (NLHE.MainEvent.type)
				{
				case SDL_QUIT:
					SDL_DestroyRenderer(NLHE.mainvictim.em_renderer);
					SDL_DestroyWindow(NLHE.mainvictim.em_window);
					ing = 1;
					break;
				case SDL_MOUSEBUTTONDOWN:
					if (NLHE.MainEvent.button.button == SDL_BUTTON_LEFT)
					{
						clicked = 1;
					}
					break;
				case SDL_KEYDOWN:
					NLHE.vars[6] = 1;
					NLHE.vars[7] = 0;
					break;
				case SDL_KEYUP:
					NLHE.vars[6] = 0;
					NLHE.vars[7] = 1;
					break;
				default:
					break;
				}
			}
			if (clicked == 1)
			{
				clicked = 0;
				for (int ind = 0; ind < 20; ind++)
				{
					if (NLHE.objects[ind].objvars[5] <= NLHE.level && NLHE.objects[ind].objvars[6] >= NLHE.level)
					{
						if (NLHE.objects[ind].objvars[7] == 1)
						{
							if (NLHE.MainEvent.button.x > NLHE.objects[ind].objvars[0])
							{
								if (NLHE.MainEvent.button.y > NLHE.objects[ind].objvars[1])
								{
									if (NLHE.MainEvent.button.y < NLHE.objects[ind].objvars[1] + NLHE.objects[ind].objvars[2] + 140 && NLHE.MainEvent.button.x <  NLHE.objects[ind].objvars[0] + NLHE.objects[ind].objvars[3] + 140)
									{
										NLHE.objects[ind].objvars[11] = 1;
									}
								}
							}
						}
					}
				}

			}
			for (int ind = 0; ind < 20; ind++)
			{
				if (NLHE.level != NLHE.cl)
				{
					if (!(NLHE.objects[ind].objvars[6] < NLHE.level))
					{
						NLHE.objects[ind].objvars[12] = NLHE.objects[ind].objvars[9];
					}
				}
				if (ind == 19)
				{
					NLHE.cl = NLHE.level;
				}
			}
			for (int ind = 0; ind < 20; ind++)
			{
				SDL_FreeSurface(joer);
				SDL_DestroyTexture(img);
				joer = nullptr;
				img = nullptr;
				
				TTF_Font* font = TTF_OpenFont("ARIAL.TTF", 14);
				SDL_Color foregroundColor = { 255, 255, 255 };
				SDL_Color backgroundColor = { 0, 0, 255 };
				{
					NLHE.objects[ind].rendrec();
					if (NLHE.objects[ind].objvars[14] == NLHE.vars[3])
					{
						if (NLHE.level >= NLHE.objects[ind].objvars[5])
						{
							if (NLHE.level <= NLHE.objects[ind].objvars[6])
							{
								NLHE.objects[ind].objvars[17] = NLHE.objects[ind].objvars[0];//x(NLHE.objects[ind].objvars[0]);
								NLHE.objects[ind].objvars[18] = NLHE.objects[ind].objvars[1];//y(NLHE.objects[ind].objvars[1]);
								NLHE.scripts[NLHE.objects[ind].objvars[15]].inc = ind;
								NLHE.scripts[NLHE.objects[ind].objvars[15]].run();
								//if (renderGet[0] < (NLHE.objects[ind].RenderRectableBack.x + NLHE.objects[ind].RenderRectableBack.y) || renderGet[1] < (NLHE.objects[ind].RenderRectableBack.x + NLHE.objects[ind].RenderRectableBack.y))
								{
									if (NLHE.objects[ind].objvarschar[19] == "none")
									{
										if (NLHE.objects[ind].toload[NLHE.objects[ind].objvars[13]] != nullptr)
										{
											joer = IMG_Load(NLHE.objects[ind].toload[NLHE.objects[ind].objvars[13]]);
										}
									}
									else {
										joer = TTF_RenderText_Blended(font, NLHE.objects[ind].objvarschar[19],
											foregroundColor);
									}
									if (joer != nullptr)
									{
										{
											img = SDL_CreateTextureFromSurface(NLHE.mainvictim.em_renderer, joer);
										}
									}
									if (img != nullptr)
									{
										if (SDL_RenderCopy(NLHE.mainvictim.em_renderer, img,/* &RenderRectable*/ NULL, &NLHE.objects[ind].RenderRectableBack) == 0)
										{
											renderGet[0] = (NLHE.objects[ind].RenderRectableBack.x + NLHE.objects[ind].RenderRectableBack.y);
											renderGet[1] = renderGet[0];
											SDL_RenderPresent(NLHE.mainvictim.em_renderer);
											//objects[ind].objvars[12]--;
											//vars[1] = 1;
											//rendZ = objects[ind].GameZ;//14
										}
									}
								}
							}
						}
					}
				}
				if (NLHE.vars[3] == 20)
				{
					renderGet[0] = 15;
					NLHE.vars[3] = 0;
				}
				else {
					NLHE.vars[3]++;
				}
			}
		}
	}
};
