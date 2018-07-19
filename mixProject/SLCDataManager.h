//
//  SLCDataManager.h
//  mixProject
//
//  Created by 魏昆超 on 2018/7/10.
//  Copyright © 2018年 WeiKunChao. All rights reserved.
//

#import <Foundation/Foundation.h>


static NSArray <NSString *>*bodyArray() {
    return @[
             @"history",
             @"way",
             @"art",
             @"world",
             @"information",
             @"map",
             @"two",
             @"family",
             @"government",
             @"health",
             @"system",
             @"computer",
             @"meat",
             @"year",
             @"thanks",
             @"music",
             @"person",
             @"reading",
             @"method",
             @"data",
             @"food",
             @"understanding",
             @"theory",
             @"law",
             @"bird",
             @"problem",
             @"software",
             @"control",
             @"knowledge",
             @"power",
             @"ability",
             @"economics",
             @"love",
             @"internet",
             @"television",
             @"science",
             @"library",
             @"nature",
             @"fact",
             @"product",
             @"idea",
             @"temperature",
             @"investment",
             @"area",
             @"society",
             @"activity",
             @"story",
             @"industry",
             @"media",
             @"thing",
             @"oven",
             @"community",
             @"definition",
             @"safety",
             @"quality",
             @"development",
             @"language",
             @"player",
             @"variety",
             @"video",
             @"week",
             @"security",
             @"country",
             @"exam",
             @"movie",
             @"organization",
             @"equipment",
             @"physics",
             @"analysis",
             @"policy",
             @"series",
             @"thought",
             @"basis",
             @"boyfriend",
             @"direction",
             @"strategy",
             @"technology",
             @"army",
             @"camera",
             @"freedom",
             @"paper",
             @"environment",
             @"child",
             @"month",
             @"truth",
             @"marketing",
             @"university",
             @"article",
             @"department",
             @"difference",
             @"goal",
             @"audience",
             @"fishing",
             @"growth",
             @"marriage",
             @"user",
             @"combination",
             @"failure",
             @"meaning",
             @"medicine",
             @"philosophy",
             @"teacher",
             @"communication",
             @"night",
             @"chemistry",
             @"disease",
             @"disk",
             @"energy",
             @"nation",
             @"road",
             @"role",
             @"soup",
             @"advertising",
             @"location",
             @"success",
             @"addition",
             @"apartment",
             @"education",
             @"math",
             @"moment",
             @"painting",
             @"politics",
             @"attention",
             @"decision",
             @"event",
             @"shopping",
             @"student",
             @"wood",
             @"competition",
             @"distribution",
             @"entertainment",
             @"population",
             @"president",
             @"unit",
             @"cigarette",
             @"introduction",
             @"performance",
             @"driver",
             @"flight",
             @"length",
             @"magazine",
             @"newspaper",
             @"relationship",
             @"teaching",
             @"dealer",
             @"finding",
             @"lake",
             @"member",
             @"message",
             @"phone",
             @"scene",
             @"appearance",
             @"association",
             @"concept",
             @"customer",
             @"death",
             @"discussion",
             @"housing",
             @"inflation",
             @"insurance",
             @"mood",
             @"woman",
             @"advice",
             @"blood",
             @"effort",
             @"expression",
             @"importance",
             @"opinion",
             @"payment",
             @"reality",
             @"responsibility",
             @"situation",
             @"skill",
             @"statement",
             @"wealth",
             @"application",
             @"city",
             @"county",
             @"depth",
             @"estate",
             @"grandmother",
             @"heart",
             @"perspective",
             @"photo",
             @"recipe",
             @"topic",
             @"collection",
             @"depression",
             @"imagination",
             @"passion",
             @"percentage",
             @"resource",
             @"setting",
             @"agency",
             @"college",
             @"connection",
             @"criticism",
             @"debt",
             @"memory",
             @"patience",
             @"secretary",
             @"solution",
             @"administration",
             @"aspect",
             @"attitude",
             @"director",
             @"personality",
             @"psychology",
             @"recommendation",
             @"response",
             @"selection",
             @"storage",
             @"version",
             @"alcohol",
             @"argument",
             @"complaint",
             @"contract",
             @"emphasis",
             @"highway",
             @"loss",
             @"membership",
             @"possession",
             @"preparation",
             @"steak",
             @"agreement",
             @"cancer",
             @"currency",
             @"employment",
             @"engineering",
             @"interaction",
             @"mixture",
             @"preference",
             @"region",
             @"republic",
             @"tradition",
             @"virus",
             @"actor",
             @"classroom",
             @"delivery",
             @"difficulty",
             @"drama",
             @"election",
             @"engine",
             @"football",
             @"guidance",
             @"hotel",
             @"owner",
             @"priority",
             @"protection",
             @"suggestion",
             @"tension",
             @"variation",
             @"anxiety",
             @"atmosphere",
             @"awareness",
             @"bath",
             @"bread",
             @"candidate",
             @"climate",
             @"comparison",
             @"confusion",
             @"construction",
             @"elevator",
             @"emotion",
             @"employee",
             @"employer",
             @"guest",
             @"height",
             @"leadership",
             @"mall",
             @"manager",
             @"operation",
             @"recording",
             @"sample",
             @"transportation",
             @"charity",
             @"cousin",
             @"disaster",
             @"editor",
             @"efficiency",
             @"excitement",
             @"extent",
             @"feedback",
             @"guitar",
             @"homework",
             @"leader",
             @"mom",
             @"outcome",
             @"permission",
             @"presentation",
             @"promotion",
             @"reflection",
             @"refrigerator",
             @"resolution",
             @"revenue",
             @"session",
             @"singer",
             @"tennis",
             @"basket",
             @"bonus",
             @"cabinet",
             @"childhood",
             @"church",
             @"clothes",
             @"coffee",
             @"dinner",
             @"drawing",
             @"hair",
             @"hearing",
             @"initiative",
             @"judgment",
             @"lab",
             @"measurement",
             @"mode",
             @"mud",
             @"orange",
             @"poetry",
             @"police",
             @"possibility",
             @"procedure",
             @"queen",
             @"ratio",
             @"relation",
             @"restaurant",
             @"satisfaction",
             @"sector",
             @"signature",
             @"significance",
             @"song",
             @"tooth",
             @"town",
             @"vehicle",
             @"volume",
             @"wife",
             @"accident",
             @"airport",
             @"appointment",
             @"arrival",
             @"assumption",
             @"baseball",
             @"chapter",
             @"committee",
             @"conversation",
             @"database",
             @"enthusiasm",
             @"explanation",
             @"farmer",
             @"gate",
             @"girl",
             @"hall",
             @"historian",
             @"hospital",
             @"injury",
             @"instruction",
             @"maintenance",
             @"manufacturer",
             @"meal",
             @"perception",
             @"pie",
             @"poem",
             @"presence",
             @"proposal",
             @"reception",
             @"replacement",
             @"revolution",
             @"river",
             @"son",
             @"speech",
             @"tea",
             @"village",
             @"warning",
             @"winner",
             @"worker",
             @"writer",
             @"breath",
             @"buyer",
             @"chest",
             @"chocolate",
             @"conclusion",
             @"contribution",
             @"cookie",
             @"courage",
             @"dad",
             @"desk",
             @"drawer",
             @"establishment",
             @"examination",
             @"garbage",
             @"grocery",
             @"honey",
             @"impression",
             @"improvement",
             @"independence",
             @"insect",
             @"inspection",
             @"inspector",
             @"king",
             @"ladder",
             @"menu",
             @"penalty",
             @"piano",
             @"potato",
             @"profession",
             @"professor",
             @"quantity",
             @"reaction",
             @"requirement",
             @"salad",
             @"sister",
             @"supermarket",
             @"tongue",
             @"weakness",
             @"wedding",
             @"affair",
             @"ambition",
             @"analyst",
             @"assignment",
             @"assistant",
             @"bathroom",
             @"bedroom",
             @"beer",
             @"birthday",
             @"celebration",
             @"championship",
             @"cheek",
             @"client",
             @"consequence",
             @"departure",
             @"diamond",
             @"dirt",
             @"ear",
             @"fortune",
             @"friendship",
             @"funeral",
             @"gene",
             @"girlfriend",
             @"hat",
             @"indication",
             @"intention",
             @"lady",
             @"midnight",
             @"negotiation",
             @"obligation",
             @"passenger",
             @"pizza",
             @"platform",
             @"poet",
             @"pollution",
             @"recognition",
             @"reputation",
             @"sir",
             @"speaker",
             @"stranger",
             @"surgery",
             @"sympathy",
             @"tale",
             @"throat",
             @"trainer",
             @"uncle",
             @"youth",
             @"time",
             @"work",
             @"film",
             @"water",
             @"money",
             @"example",
             @"business",
             @"study",
             @"game",
             @"life",
             @"form",
             @"air",
             @"day",
             @"place",
             @"number",
             @"part",
             @"field",
             @"fish",
             @"back",
             @"process",
             @"heat",
             @"hand",
             @"experience",
             @"job",
             @"book",
             @"end",
             @"point",
             @"type",
             @"home",
             @"economy",
             @"value",
             @"body",
             @"market",
             @"guide",
             @"interest",
             @"state",
             @"radio",
             @"course",
             @"company",
             @"price",
             @"size",
             @"card",
             @"list",
             @"mind",
             @"trade",
             @"line",
             @"care",
             @"group",
             @"risk",
             @"word",
             @"fat",
             @"force",
             @"key",
             @"light",
             @"training",
             @"name",
             @"school",
             @"top",
             @"amount",
             @"level",
             @"order",
             @"practice",
             @"research",
             @"sense",
             @"service",
             @"piece",
             @"web",
             @"boss",
             @"sport",
             @"fun",
             @"house",
             @"page",
             @"term",
             @"test",
             @"answer",
             @"sound",
             @"focus",
             @"matter",
             @"kind",
             @"board",
             @"oil",
             @"picture",
             @"access",
             @"garden",
             @"range",
             @"rate",
             @"reason",
             @"future",
             @"site",
             @"demand",
             @"exercise",
             @"image",
             @"cause",
             @"coast",
             @"action",
             @"age",
             @"bad",
             @"boat",
             @"record",
             @"result",
             @"section",
             @"building",
             @"mouse",
             @"nothing",
             @"period",
             @"plan",
             @"tax",
             @"side",
             @"subject",
             @"space",
             @"rule",
             @"stock",
             @"weather",
             @"chance",
             @"figure",
             @"man",
             @"model",
             @"source",
             @"beginning",
             @"earth",
             @"program",
             @"chicken",
             @"design",
             @"feature",
             @"head",
             @"material",
             @"purpose",
             @"question",
             @"rock",
             @"salt",
             @"act",
             @"birth",
             @"car",
             @"dog",
             @"object",
             @"scale",
             @"sun",
             @"note",
             @"profit",
             @"rent",
             @"speed",
             @"style",
             @"war",
             @"bank",
             @"craft",
             @"half",
             @"inside",
             @"outside",
             @"standard",
             @"bus",
             @"exchange",
             @"eye",
             @"position",
             @"pressure",
             @"stress",
             @"advantage",
             @"benefit",
             @"box",
             @"issue",
             @"step",
             @"cycle",
             @"face",
             @"item",
             @"metal",
             @"paint",
             @"review",
             @"room",
             @"screen",
             @"structure",
             @"view",
             @"account",
             @"ball",
             @"discipline",
             @"medium",
             @"share",
             @"balance",
             @"bit",
             @"black",
             @"bottom",
             @"choice",
             @"gift",
             @"impact",
             @"machine",
             @"shape",
             @"tool",
             @"wind",
             @"address",
             @"average",
             @"career",
             @"culture",
             @"morning",
             @"pot",
             @"sign",
             @"table",
             @"task",
             @"condition",
             @"contact",
             @"credit",
             @"egg",
             @"hope",
             @"ice",
             @"network",
             @"north",
             @"square",
             @"attempt",
             @"date",
             @"effect",
             @"link",
             @"post",
             @"star",
             @"voice",
             @"capital",
             @"challenge",
             @"friend",
             @"shot",
             @"brush",
             @"couple",
             @"debate",
             @"exit",
             @"front",
             @"lack",
             @"living",
             @"plant",
             @"plastic",
             @"spot",
             @"summer",
             @"taste",
             @"theme",
             @"track",
             @"wing",
             @"brain",
             @"button",
             @"click",
             @"desire",
             @"foot",
             @"gas",
             @"influence",
             @"notice",
             @"rain",
             @"wall",
             @"base",
             @"damage",
             @"distance",
             @"feeling",
             @"pair",
             @"savings",
             @"staff",
             @"sugar",
             @"target",
             @"text",
             @"animal",
             @"author",
             @"budget",
             @"discount",
             @"file",
             @"ground",
             @"lesson",
             @"minute",
             @"officer",
             @"phase",
             @"reference",
             @"sky",
             @"stage",
             @"stick",
             @"title",
             @"trouble",
             @"bowl",
             @"bridge",
             @"campaign",
             @"character",
             @"club",
             @"edge",
             @"evidence",
             @"fan",
             @"letter",
             @"lock",
             @"maximum",
             @"novel",
             @"option",
             @"pack",
             @"park",
             @"plenty",
             @"quarter",
             @"skin",
             @"sort",
             @"weight",
             @"baby",
             @"background",
             @"carry",
             @"dish",
             @"factor",
             @"fruit",
             @"glass",
             @"joint",
             @"master",
             @"muscle",
             @"red",
             @"strength",
             @"traffic",
             @"trip",
             @"vegetable",
             @"appeal",
             @"chart",
             @"gear",
             @"ideal",
             @"kitchen",
             @"land",
             @"log",
             @"mother",
             @"net",
             @"party",
             @"principle",
             @"relative",
             @"sale",
             @"season",
             @"signal",
             @"spirit",
             @"street",
             @"tree",
             @"wave",
             @"belt",
             @"bench",
             @"commission",
             @"drop",
             @"minimum",
             @"path",
             @"progress",
             @"project",
             @"sea",
             @"south",
             @"status",
             @"stuff",
             @"ticket",
             @"tour",
             @"angle",
             @"blue",
             @"breakfast",
             @"confidence",
             @"daughter",
             @"degree",
             @"doctor",
             @"dot",
             @"dream",
             @"duty",
             @"essay",
             @"father",
             @"fee",
             @"finance",
             @"hour",
             @"juice",
             @"luck",
             @"milk",
             @"mouth",
             @"peace",
             @"pipe",
             @"seat",
             @"stable",
             @"storm",
             @"substance",
             @"team",
             @"trick",
             @"afternoon",
             @"bat",
             @"beach",
             @"blank",
             @"chain",
             @"consideration",
             @"cream",
             @"crew",
             @"detail",
             @"gold",
             @"interview",
             @"kid",
             @"mark",
             @"match",
             @"mission",
             @"pain",
             @"pleasure",
             @"score",
             @"screw",
             @"shop",
             @"shower",
             @"suit",
             @"tone",
             @"agent",
             @"band",
             @"bone",
             @"calendar",
             @"cap",
             @"coat",
             @"contest",
             @"corner",
             @"court",
             @"cup",
             @"door",
             @"east",
             @"finger",
             @"garage",
             @"guarantee",
             @"hole",
             @"hook",
             @"layer",
             @"lecture",
             @"lie",
             @"manner",
             @"meeting",
             @"nose",
             @"parking",
             @"partner",
             @"profile",
             @"respect",
             @"rice",
             @"routine",
             @"schedule",
             @"swimming",
             @"telephone",
             @"tip",
             @"winter",
             @"airline",
             @"bag",
             @"battle",
             @"bed",
             @"bill",
             @"bother",
             @"cake",
             @"code",
             @"curve",
             @"designer",
             @"dimension",
             @"dress",
             @"ease",
             @"emergency",
             @"evening",
             @"extension",
             @"farm",
             @"fight",
             @"gap",
             @"grade",
             @"holiday",
             @"horror",
             @"horse",
             @"host",
             @"husband",
             @"loan",
             @"mistake",
             @"mountain",
             @"nail",
             @"noise",
             @"occasion",
             @"package",
             @"patient",
             @"pause",
             @"phrase",
             @"proof",
             @"race",
             @"relief",
             @"sand",
             @"sentence",
             @"shoulder",
             @"smoke",
             @"stomach",
             @"tourist",
             @"towel",
             @"vacation",
             @"west",
             @"wheel",
             @"wine",
             @"arm",
             @"aside",
             @"associate",
             @"bet",
             @"blow",
             @"border",
             @"branch",
             @"breast",
             @"brother",
             @"buddy",
             @"bunch",
             @"chip",
             @"coach",
             @"cross",
             @"document",
             @"draft",
             @"dust",
             @"expert",
             @"floor",
             @"god",
             @"golf",
             @"habit",
             @"iron",
             @"judge",
             @"knife",
             @"landscape",
             @"league",
             @"mail",
             @"mess",
             @"opening",
             @"pattern",
             @"pin",
             @"pool",
             @"pound",
             @"request",
             @"salary",
             @"shame",
             @"shelter",
             @"shoe",
             @"silver",
             @"tackle",
             @"tank",
             @"trust",
             @"assist",
             @"bake",
             @"bar",
             @"bell",
             @"bike",
             @"blame",
             @"boy",
             @"brick",
             @"chair",
             @"closet",
             @"clue",
             @"collar",
             @"comment",
             @"conference",
             @"devil",
             @"diet",
             @"fear",
             @"fuel",
             @"glove",
             @"jacket",
             @"lunch",
             @"monitor",
             @"mortgage",
             @"nurse",
             @"pace",
             @"panic",
             @"peak",
             @"plane",
             @"reward",
             @"row",
             @"sandwich",
             @"shock",
             @"spite",
             @"spray",
             @"surprise",
             @"till",
             @"transition",
             @"weekend",
             @"welcome",
             @"yard",
             @"alarm",
             @"bend",
             @"bicycle",
             @"bite",
             @"blind",
             @"bottle",
             @"cable",
             @"candle",
             @"clerk",
             @"cloud",
             @"concert",
             @"counter",
             @"flower",
             @"grandfather",
             @"harm",
             @"knee",
             @"lawyer",
             @"leather",
             @"mirror",
             @"neck",
             @"pension",
             @"plate",
             @"purple",
             @"ruin",
             @"ship",
             @"skirt",
             @"slice",
             @"snow",
             @"specialist",
             @"stroke",
             @"trash",
             @"tune",
             @"zone",
             @"anger",
             @"award",
             @"bid",
             @"bitter",
             @"boot",
             @"bug",
             @"camp",
             @"candy",
             @"carpet",
             @"cat",
             @"champion",
             @"channel",
             @"clock",
             @"comfort",
             @"cow",
             @"crack",
             @"engineer",
             @"entrance",
             @"grass",
             @"guy",
             @"hell",
             @"highlight",
             @"incident",
             @"island",
             @"joke",
             @"jury",
             @"leg",
             @"lip",
             @"mate",
             @"motor",
             @"nerve",
             @"passage",
             @"pen",
             @"prize",
             @"promise",
             @"resident",
             @"resort",
             @"ring",
             @"roof",
             @"rope",
             @"sail",
             @"scheme",
             @"script",
             @"sock",
             @"station",
             @"toe",
             @"tower",
             @"truck",
             @"witness",
             @"you",
             @"can",
             @"will",
             @"one",
             @"many",
             @"most",
             @"other",
             @"use",
             @"make",
             @"good",
             @"look",
             @"help",
             @"great",
             @"being",
             @"few",
             @"might",
             @"still",
             @"read",
             @"keep",
             @"start",
             @"give",
             @"human",
             @"local",
             @"general",
             @"she",
             @"specific",
             @"play",
             @"feel",
             @"high",
             @"tonight",
             @"put",
             @"common",
             @"set",
             @"change",
             @"simple",
             @"past",
             @"big",
             @"possible",
             @"particular",
             @"today",
             @"major",
             @"personal",
             @"current",
             @"national",
             @"cut",
             @"natural",
             @"physical",
             @"show",
             @"check",
             @"second",
             @"call",
             @"move",
             @"pay",
             @"increase",
             @"single",
             @"individual",
             @"turn",
             @"ask",
             @"buy",
             @"guard",
             @"hold",
             @"main",
             @"offer",
             @"potential",
             @"professional",
             @"international",
             @"travel",
             @"cook",
             @"alternative",
             @"following",
             @"special",
             @"working",
             @"whole",
             @"dance",
             @"excuse",
             @"cold",
             @"commercial",
             @"low",
             @"purchase",
             @"deal",
             @"primary",
             @"worth",
             @"fall",
             @"necessary",
             @"positive",
             @"produce",
             @"search",
             @"present",
             @"spend",
             @"talk",
             @"creative",
             @"tell",
             @"cost",
             @"drive",
             @"green",
             @"support",
             @"glad",
             @"remove",
             @"run",
             @"complex",
             @"due",
             @"effective",
             @"middle",
             @"regular",
             @"reserve",
             @"independent",
             @"leave",
             @"original",
             @"reach",
             @"rest",
             @"serve",
             @"watch",
             @"beautiful",
             @"charge",
             @"active",
             @"negative",
             @"safe",
             @"stay",
             @"visit",
             @"visual",
             @"affect",
             @"cover",
             @"report",
             @"rise",
             @"walk",
             @"white",
             @"beyond",
             @"junior",
             @"pick",
             @"unique",
             @"anything",
             @"classic",
             @"final",
             @"lift",
             @"mix",
             @"private",
             @"stop",
             @"teach",
             @"western",
             @"concern",
             @"familiar",
             @"fly",
             @"official",
             @"broad",
             @"gain",
             @"maybe",
             @"rich",
             @"save",
             @"stand",
             @"young",
             @"fail",
             @"heavy",
             @"hello",
             @"lead",
             @"listen",
             @"valuable",
             @"worry",
             @"handle",
             @"leading",
             @"meet",
             @"sell",
             @"finish",
             @"normal",
             @"press",
             @"ride",
             @"secret",
             @"spread",
             @"spring",
             @"tough",
             @"wait",
             @"brown",
             @"deep",
             @"display",
             @"flow",
             @"hit",
             @"objective",
             @"shoot",
             @"touch",
             @"cancel",
             @"chemical",
             @"cry",
             @"extreme",
             @"push",
             @"eat",
             @"fill",
             @"formal",
             @"jump",
             @"kick",
             @"opposite",
             @"pass",
             @"pitch",
             @"remote",
             @"total",
             @"treat",
             @"vast",
             @"abuse",
             @"beat",
             @"burn",
             @"deposit",
             @"raise",
             @"sleep",
             @"somewhere",
             @"advance",
             @"anywhere",
             @"consist",
             @"dark",
             @"draw",
             @"equal",
             @"fix",
             @"hire",
             @"internal",
             @"join",
             @"kill",
             @"sensitive",
             @"tap",
             @"win",
             @"attack",
             @"claim",
             @"constant",
             @"drag",
             @"drink",
             @"guess",
             @"minor",
             @"pull",
             @"raw",
             @"soft",
             @"solid",
             @"wear",
             @"weird",
             @"wonder",
             @"annual",
             @"count",
             @"dead",
             @"doubt",
             @"feed",
             @"forever",
             @"impress",
             @"nobody",
             @"repeat",
             @"round",
             @"sing",
             @"slide",
             @"strip",
             @"whereas",
             @"wish",
             @"combine",
             @"command",
             @"dig",
             @"divide",
             @"equivalent",
             @"hang",
             @"hunt",
             @"march",
             @"mention",
             @"smell",
             @"spiritual",
             @"survey",
             @"tie",
             @"adult",
             @"brief",
             @"crazy",
             @"escape",
             @"gather",
             @"hate",
             @"prior",
             @"repair",
             @"rough",
             @"sad",
             @"scratch",
             @"sick",
             @"strike",
             @"employ",
             @"external",
             @"hurt",
             @"illegal",
             @"laugh",
             @"lay",
             @"mobile",
             @"nasty",
             @"ordinary",
             @"respond",
             @"royal",
             @"senior",
             @"split",
             @"strain",
             @"struggle",
             @"swim",
             @"train",
             @"upper",
             @"wash",
             @"yellow",
             @"convert",
             @"dependent",
             @"fold",
             @"funny",
             @"grab",
             @"hide",
             @"miss",
             @"permit",
             @"quote",
             @"recover",
             @"resolve",
             @"roll",
             @"sink",
             @"slip",
             @"spare",
             @"suspect",
             @"sweet",
             @"swing",
             @"twist",
             @"upstairs",
             @"usual",
             @"abroad",
             @"brave",
             @"calm",
             @"concentrate",
             @"estimate",
             @"grand",
             @"male",
             @"mine",
             @"prompt",
             @"quiet",
             @"refuse",
             @"reveal",
             @"rush",
             @"shake",
             @"shift",
             @"shine",
             @"steal",
             @"suck",
             @"surround",
             @"anybody",
             @"bear",
             @"brilliant",
             @"dare",
             @"dear",
             @"delay",
             @"drunk",
             @"female",
             @"hurry",
             @"inevitable",
             @"invite",
             @"kiss",
             @"neat",
             @"pop",
             @"punch",
             @"quit",
             @"reply",
             @"representative",
             @"resist",
             @"rip",
             @"rub",
             @"silly",
             @"smile",
             @"spell",
             @"stretch",
             @"stupid",
             @"tear",
             @"temporary",
             @"tomorrow",
             @"wake",
             @"wrap",
             @"yesterday"
             ];
}

static NSArray <NSString *>*tailArray() {
    return @[
             @"Model",
             @"Model",
             @"Model",
             @"Model",
             @"Model",
             @"Model",
             @"VC",
             @"VC",
             @"VC",
             @"Controller",
             @"Controller",
             @"Controller",
             @"ViewController",
             @"ViewController",
             @"Manager",
             @"Manager",
             @"Manager",
             @"View",
             @"View",
             @"View",
             @"View",
             @"View",
             @"Cell",
             @"Cell",
             @"Cell",
             @"Cell",
             @"Cell",
             @"Util",
             @"Util",
             @"Util",
             @"Helper",
             @"Helper",
             @"Helper",
             @"Observer",
             @"Observer",
             @"Delegate",
             @"Delegate",
             @"DataSource",
             @"DataSource",
             @"Serializer",
             @"List",
             @"Array",
             @"Factory",
             @"Storage",
             @"Protocol",
             @"Generator",
             @"Client",
             @"Tracker",
             @"Source",
             @"Event",
             @"Task",
             @"Wrapper",
             @"Tool",
             @"Effect",
             @"Configuration",
             @"Store",
             @"Cache",
             @"Adapter",
             @"Proxy",
             @"Batch",
             @"Service",
             @"Transformer",
             @"Loader",
             @"Logger",
             @"Listener",
             @"Dialog",
             @"Interpolator",
             @"Request",
             @"Session",
             @"Mapper",
             @"Control",
             @"Layer",
             @"Animator",
             @"Node",
             @"Callback",
             @"Handler",
             @"Footer",
             @"Header",
             @"Provider",
             @"Notification",
             @"Exception",
             @"Dispatch",
             @"Database",
             @"Operation",
             @"Button",
             @"ImageView",
             @"Label",
             @"Layout",
             @"TextField",
             @"Bar",
             @"TextView",
             @"Animation",
             @"Token",
             @"Utility",
             @"Processor",
             @"Profile",
             @"Settings",
             @"Error",
             @"Group",
             @"Render",
             @"Dictionary",
             @"Item",
             @"Uploader",
             @"Stack",
             @"Queue",
             @"Router",
             @"Executor",
             @"Collection",
             @"Filter",
             @"Context",
             @"Timer",
             @"Holder",
             @"Editor",
             @"Browser",
             @"Sheet",
             ];
}

static NSArray <NSString *>*typesArray() {
    return @[
             @"NSString *_Nullable",
             @"NSData *_Nullable",
             @"NSArray *_Nullable",
             @"NSDictionary *_Nullable",
             @"BOOL",
             @"NSDate *_Nullable"
             ];
}


// 参数是数组的随机字符串
static NSString* JXArrayParamString() {
    NSArray<NSString *> *array = @[
                       @"scope",
                       @"base",
                       @"time",
                       @"sign",
                       @"config",
                       @"state",
                       @"username",
                       @"msg",
                       @"Error",
                       @"Caps",
                       @"scroll",
                       @"pause",
                       @"page",
                       @"insert",
                       @"backing"
                       ];
    return array[arc4random() % array.count];
}

// 参数是字典的随机字符串
static NSString* JXDictParamString() {
    NSString *string;
    NSString *key = tailArray()[arc4random() % tailArray().count];
    NSString *value = bodyArray()[arc4random() % bodyArray().count];
    string = [NSString stringWithFormat:@"@\"%@\":@\"%@\"",key,value];
    return string;
}
