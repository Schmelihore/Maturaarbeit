#include <avr/pgmspace.h>
#include <stdio.h>
#define MAX 862
#define MAX2 21
#define MAX3 41

typedef struct Heights {
    uint16_t lon;
    int lat;
    int h;
};

const uint16_t latitude[MAX2] = {924,922,920,918,916,915,913,911,910,908,906,904,902,800,899,897,895,894,892,890,888};

//const uint16_t longitude[MAX3] = {34673,34936,35198,35461,35723,35986,36249,36511,36774,37036,37299,37561,37824,38087,38349,38612,38874,39137,39399,39662,39925,40187,40450,40712,40975,41238,41500,41763,42025,42288,42550,42813,43076,43338,43601,43863,44126,44389,44651,44914,45176};

const PROGMEM struct Heights height[MAX] = {
    34673,924,662,
    34935,924,662,
    35198,924,662,
    35461,924,662,
    35723,924,662,
    35986,924,662,
    36248,924,662,
    36511,924,662,
    36773,924,662,
    37036,924,662,
    37299,924,662,
    37561,924,662,
    37824,924,662,
    38086,924,662,
    38349,924,662,
    38612,924,662,
    38874,924,662,
    39137,924,662,
    39399,924,662,
    39662,924,662,
    39925,924,662,
    40187,924,662,
    40450,924,662,
    40712,924,662,
    40975,924,662,
    41237,924,662,
    41500,924,662,
    41763,924,662,
    42025,924,662,
    42288,924,662,
    42550,924,662,
    42813,924,662,
    43076,924,662,
    43338,924,662,
    43601,924,662,
    43863,924,662,
    44126,924,662,
    44389,924,662,
    44651,924,662,
    44914,924,662,
    45176,924,661,
    34673,922,661,
    34936,922,661,
    35198,922,661,
    35461,922,661,
    35723,922,661,
    35986,922,661,
    36249,922,661,
    36511,922,661,
    36774,922,661,
    37036,922,661,
    37299,922,661,
    37561,922,661,
    37824,922,661,
    38087,922,661,
    38349,922,661,
    38612,922,661,
    38874,922,661,
    39137,922,661,
    39399,922,661,
    39662,922,661,
    39925,922,661,
    40187,922,661,
    40450,922,661,
    40712,922,661,
    40975,922,661,
    41238,922,661,
    41500,922,661,
    41763,922,661,
    42025,922,661,
    42288,922,661,
    42550,922,661,
    42813,922,661,
    43076,922,661,
    43338,922,661,
    43601,922,661,
    43863,922,661,
    44126,922,661,
    44389,922,661,
    44651,922,661,
    44914,922,661,
    45176,922,661,
    34673,920,661,
    34936,920,661,
    35198,920,661,
    35461,920,661,
    35724,920,661,
    35986,920,661,
    36249,920,661,
    36511,920,661,
    36774,920,661,
    37037,920,661,
    37299,920,661,
    37562,920,661,
    37824,920,661,
    38087,920,661,
    38349,920,661,
    38612,920,661,
    38874,920,661,
    39137,920,661,
    39400,920,661,
    39662,920,661,
    39925,920,661,
    40187,920,661,
    40450,920,661,
    40712,920,661,
    40975,920,661,
    41238,920,661,
    41500,920,661,
    41763,920,661,
    42025,920,661,
    42288,920,661,
    42550,920,661,
    42813,920,661,
    43076,920,661,
    43338,920,661,
    43601,920,661,
    43863,920,661,
    44126,920,661,
    44388,920,661,
    44651,920,661,
    44914,920,661,
    45176,920,661,
    34674,918,661,
    34936,918,661,
    35199,918,661,
    35461,918,661,
    35724,918,661,
    35986,918,661,
    36249,918,661,
    36512,918,661,
    36774,918,661,
    37037,918,661,
    37299,918,661,
    37562,918,661,
    37824,918,661,
    38087,918,661,
    38350,918,661,
    38612,918,661,
    38875,918,661,
    39137,918,661,
    39400,918,661,
    39662,918,661,
    39925,918,661,
    40187,918,661,
    40450,918,661,
    40713,918,661,
    40975,918,661,
    41238,918,661,
    41500,918,661,
    41763,918,661,
    42025,918,661,
    42288,918,661,
    42551,918,661,
    42813,918,675,
    43076,918,708,
    43338,918,762,
    43601,918,831,
    43863,918,842,
    44126,918,842,
    44388,918,834,
    44651,918,812,
    44914,918,789,
    45176,918,736,
    34674,916,647,
    34937,916,647,
    35199,916,639,
    35462,916,642,
    35724,916,640,
    35987,916,594,
    36249,916,574,
    36512,916,581,
    36774,916,608,
    37037,916,640,
    37300,916,650,
    37562,916,660,
    37825,916,667,
    38087,916,674,
    38350,916,673,
    38612,916,671,
    38875,916,667,
    39137,916,659,
    39400,916,650,
    39663,916,624,
    39925,916,603,
    40188,916,592,
    40450,916,596,
    40713,916,606,
    40975,916,626,
    41238,916,626,
    41500,916,632,
    41763,916,622,
    42025,916,603,
    42288,916,592,
    42551,916,632,
    42813,916,662,
    43076,916,687,
    43338,916,720,
    43601,916,749,
    43863,916,801,
    44126,916,849,
    44388,916,854,
    44651,916,834,
    44914,916,806,
    45176,916,786,
    34674,915,651,
    34937,915,653,
    35199,915,645,
    35462,915,627,
    35724,915,600,
    35987,915,583,
    36250,915,573,
    36512,915,598,
    36775,915,635,
    37037,915,649,
    37300,915,655,
    37562,915,659,
    37825,915,657,
    38087,915,654,
    38350,915,655,
    38612,915,658,
    38875,915,660,
    39138,915,654,
    39400,915,638,
    39663,915,619,
    39925,915,618,
    40188,915,615,
    40450,915,606,
    40713,915,634,
    40975,915,642,
    41238,915,627,
    41500,915,624,
    41763,915,623,
    42026,915,624,
    42288,915,624,
    42551,915,612,
    42813,915,611,
    43076,915,666,
    43338,915,702,
    43601,915,714,
    43863,915,759,
    44126,915,781,
    44388,915,785,
    44651,915,840,
    44914,915,839,
    45176,915,818,
    34675,913,660,
    34937,913,659,
    35200,913,653,
    35462,913,642,
    35725,913,626,
    35987,913,578,
    36250,913,579,
    36512,913,608,
    36775,913,639,
    37037,913,653,
    37300,913,657,
    37563,913,660,
    37825,913,659,
    38088,913,655,
    38350,913,642,
    38613,913,636,
    38875,913,632,
    39138,913,629,
    39400,913,626,
    39663,913,615,
    39925,913,610,
    40188,913,612,
    40450,913,639,
    40713,913,652,
    40975,913,660,
    41238,913,651,
    41501,913,634,
    41763,913,631,
    42026,913,646,
    42288,913,667,
    42551,913,657,
    42813,913,625,
    43076,913,603,
    43338,913,654,
    43601,913,671,
    43863,913,697,
    44126,913,684,
    44388,913,774,
    44651,913,823,
    44913,913,829,
    45176,913,817,
    34675,911,669,
    34937,911,668,
    35200,911,663,
    35462,911,655,
    35725,911,608,
    35988,911,577,
    36250,911,587,
    36513,911,630,
    36775,911,650,
    37038,911,660,
    37300,911,666,
    37563,911,666,
    37825,911,667,
    38088,911,666,
    38350,911,663,
    38613,911,659,
    38875,911,647,
    39138,911,633,
    39400,911,623,
    39663,911,618,
    39925,911,612,
    40188,911,631,
    40451,911,644,
    40713,911,650,
    40976,911,650,
    41238,911,647,
    41501,911,641,
    41763,911,645,
    42026,911,655,
    42288,911,660,
    42551,911,672,
    42813,911,665,
    43076,911,613,
    43338,911,609,
    43601,911,619,
    43863,911,632,
    44126,911,660,
    44388,911,731,
    44651,911,763,
    44913,911,747,
    45176,911,776,
    34675,910,672,
    34938,910,669,
    35200,910,663,
    35463,910,647,
    35725,910,606,
    35988,910,578,
    36250,910,599,
    36513,910,647,
    36775,910,661,
    37038,910,669,
    37300,910,672,
    37563,910,672,
    37825,910,680,
    38088,910,690,
    38350,910,699,
    38613,910,690,
    38876,910,675,
    39138,910,659,
    39401,910,635,
    39663,910,618,
    39926,910,619,
    40188,910,630,
    40451,910,642,
    40713,910,653,
    40976,910,669,
    41238,910,674,
    41501,910,657,
    41763,910,659,
    42026,910,666,
    42288,910,661,
    42551,910,643,
    42813,910,642,
    43076,910,678,
    43338,910,672,
    43601,910,664,
    43863,910,649,
    44126,910,629,
    44388,910,649,
    44651,910,672,
    44913,910,670,
    45176,910,687,
    34676,908,661,
    34938,908,657,
    35201,908,650,
    35463,908,631,
    35726,908,601,
    35988,908,584,
    36251,908,627,
    36513,908,656,
    36776,908,661,
    37038,908,666,
    37301,908,673,
    37563,908,688,
    37826,908,706,
    38088,908,714,
    38351,908,726,
    38613,908,721,
    38876,908,702,
    39138,908,676,
    39401,908,641,
    39663,908,627,
    39926,908,630,
    40188,908,641,
    40451,908,649,
    40713,908,673,
    40976,908,687,
    41238,908,671,
    41501,908,665,
    41763,908,675,
    42026,908,688,
    42288,908,682,
    42551,908,672,
    42813,908,707,
    43076,908,722,
    43338,908,719,
    43601,908,724,
    43863,908,708,
    44126,908,648,
    44388,908,636,
    44651,908,640,
    44913,908,643,
    45176,908,637,
    45438,908,633,
    34676,906,635,
    34938,906,632,
    35201,906,603,
    35463,906,592,
    35726,906,584,
    35988,906,602,
    36251,906,640,
    36513,906,654,
    36776,906,670,
    37038,906,682,
    37301,906,685,
    37563,906,703,
    37826,906,720,
    38088,906,734,
    38351,906,741,
    38613,906,744,
    38876,906,733,
    39138,906,700,
    39401,906,648,
    39663,906,633,
    39926,906,635,
    40188,906,653,
    40451,906,660,
    40713,906,665,
    40976,906,669,
    41238,906,673,
    41501,906,673,
    41763,906,667,
    42026,906,681,
    42288,906,659,
    42551,906,706,
    42813,906,739,
    43076,906,792,
    43338,906,796,
    43601,906,748,
    43863,906,743,
    44126,906,726,
    44388,906,674,
    44651,906,681,
    44913,906,676,
    45176,906,689,
    34676,904,627,
    34939,904,634,
    35201,904,623,
    35464,904,609,
    35726,904,590,
    35989,904,632,
    36251,904,642,
    36514,904,655,
    36776,904,671,
    37039,904,682,
    37301,904,696,
    37564,904,716,
    37826,904,737,
    38089,904,743,
    38351,904,749,
    38614,904,748,
    38876,904,736,
    39139,904,713,
    39401,904,659,
    39664,904,649,
    39926,904,648,
    40188,904,661,
    40451,904,659,
    40713,904,660,
    40976,904,671,
    41238,904,684,
    41501,904,694,
    41763,904,680,
    42026,904,670,
    42288,904,666,
    42551,904,684,
    42813,904,758,
    43076,904,848,
    43338,904,814,
    43601,904,819,
    43863,904,814,
    44126,904,821,
    44388,904,775,
    44651,904,694,
    44913,904,697,
    45176,904,784,
    34676,902,651,
    34939,902,651,
    35201,902,650,
    35464,902,599,
    35726,902,609,
    35989,902,653,
    36251,902,663,
    36514,902,661,
    36776,902,670,
    37039,902,683,
    37301,902,699,
    37564,902,722,
    37826,902,730,
    38089,902,716,
    38351,902,730,
    38614,902,722,
    38876,902,695,
    39139,902,679,
    39401,902,662,
    39664,902,649,
    39926,902,650,
    40189,902,656,
    40451,902,663,
    40714,902,675,
    40976,902,688,
    41239,902,694,
    41501,902,721,
    41764,902,686,
    42026,902,709,
    42288,902,680,
    42551,902,707,
    42813,902,756,
    43076,902,848,
    43338,902,845,
    43601,902,856,
    43863,902,882,
    44126,902,856,
    44388,902,842,
    44651,902,725,
    44913,902,701,
    45176,902,800,
    34677,900,649,
    34939,900,649,
    35202,900,633,
    35464,900,590,
    35727,900,631,
    35989,900,654,
    36252,900,663,
    36514,900,658,
    36777,900,656,
    37039,900,665,
    37302,900,681,
    37564,900,712,
    37826,900,716,
    38089,900,682,
    38351,900,677,
    38614,900,678,
    38876,900,678,
    39139,900,681,
    39401,900,671,
    39664,900,649,
    39926,900,645,
    40189,900,651,
    40451,900,665,
    40714,900,681,
    40976,900,699,
    41239,900,715,
    41501,900,721,
    41764,900,687,
    42026,900,740,
    42289,900,724,
    42551,900,721,
    42813,900,770,
    43076,900,817,
    43338,900,903,
    43601,900,919,
    43863,900,914,
    44126,900,902,
    44388,900,858,
    44651,900,771,
    44913,900,701,
    45176,900,783,
    34677,899,632,
    34940,899,633,
    35202,899,617,
    35464,899,595,
    35727,899,641,
    35989,899,667,
    36252,899,677,
    36514,899,673,
    36777,899,662,
    37039,899,653,
    37302,899,655,
    37564,899,665,
    37827,899,658,
    38089,899,645,
    38352,899,638,
    38614,899,638,
    38877,899,646,
    39139,899,676,
    39401,899,669,
    39664,899,658,
    39926,899,654,
    40189,899,650,
    40451,899,650,
    40714,899,659,
    40976,899,674,
    41239,899,690,
    41501,899,680,
    41764,899,675,
    42026,899,695,
    42289,899,714,
    42551,899,768,
    42814,899,858,
    43076,899,891,
    43338,899,909,
    43601,899,912,
    43863,899,908,
    44126,899,884,
    44388,899,835,
    44651,899,790,
    44913,899,779,
    45176,899,800,
    34677,897,622,
    34940,897,598,
    35202,897,585,
    35465,897,612,
    35727,897,646,
    35990,897,684,
    36252,897,694,
    36515,897,696,
    36777,897,693,
    37039,897,687,
    37302,897,661,
    37564,897,639,
    37827,897,636,
    38089,897,631,
    38352,897,631,
    38614,897,635,
    38877,897,635,
    39139,897,637,
    39402,897,639,
    39664,897,640,
    39927,897,642,
    40189,897,646,
    40451,897,661,
    40714,897,666,
    40976,897,667,
    41239,897,674,
    41501,897,712,
    41764,897,680,
    42026,897,710,
    42289,897,790,
    42551,897,841,
    42814,897,877,
    43076,897,869,
    43338,897,841,
    43601,897,865,
    43863,897,852,
    44126,897,825,
    44388,897,795,
    44651,897,786,
    44913,897,826,
    45176,897,830,
    34678,895,587,
    34940,895,593,
    35203,895,585,
    35465,895,639,
    35727,895,670,
    35990,895,689,
    36252,895,698,
    36515,895,717,
    36777,895,734,
    37040,895,719,
    37302,895,689,
    37565,895,663,
    37827,895,625,
    38090,895,642,
    38352,895,645,
    38614,895,649,
    38877,895,647,
    39139,895,645,
    39402,895,640,
    39664,895,645,
    39927,895,644,
    40189,895,650,
    40452,895,650,
    40714,895,660,
    40976,895,695,
    41239,895,712,
    41501,895,732,
    41764,895,748,
    42026,895,696,
    42289,895,759,
    42551,895,790,
    42814,895,813,
    43076,895,805,
    43339,895,790,
    43601,895,796,
    43863,895,815,
    44126,895,823,
    44388,895,828,
    44651,895,845,
    44913,895,854,
    45176,895,832,
    34678,894,557,
    34940,894,561,
    35203,894,578,
    35465,894,615,
    35728,894,645,
    35990,894,677,
    36253,894,694,
    36515,894,708,
    36778,894,723,
    37040,894,705,
    37302,894,681,
    37565,894,640,
    37827,894,633,
    38090,894,653,
    38352,894,674,
    38615,894,665,
    38877,894,661,
    39139,894,659,
    39402,894,658,
    39664,894,660,
    39927,894,649,
    40189,894,667,
    40452,894,660,
    40714,894,656,
    40977,894,660,
    41239,894,674,
    41501,894,709,
    41764,894,719,
    42026,894,705,
    42289,894,722,
    42551,894,735,
    42814,894,756,
    43076,894,759,
    43339,894,782,
    43601,894,823,
    43863,894,847,
    44126,894,875,
    44388,894,881,
    44651,894,910,
    44913,894,867,
    45176,894,849,
    34678,892,554,
    34941,892,555,
    35203,892,565,
    35466,892,578,
    35728,892,610,
    35990,892,649,
    36253,892,664,
    36515,892,683,
    36778,892,676,
    37040,892,669,
    37303,892,660,
    37565,892,630,
    37827,892,652,
    38090,892,680,
    38352,892,682,
    38615,892,672,
    38877,892,672,
    39140,892,668,
    39402,892,656,
    39665,892,657,
    39927,892,682,
    40189,892,690,
    40452,892,681,
    40714,892,688,
    40977,892,697,
    41239,892,693,
    41502,892,671,
    41764,892,679,
    42026,892,690,
    42289,892,716,
    42551,892,729,
    42814,892,749,
    43076,892,778,
    43339,892,798,
    43601,892,869,
    43863,892,895,
    44126,892,930,
    44388,892,939,
    44651,892,920,
    44913,892,885,
    45176,892,861,
    34679,890,550,
    34941,890,559,
    35203,890,558,
    35466,890,560,
    35728,890,598,
    35991,890,621,
    36253,890,668,
    36516,890,673,
    36778,890,690,
    37040,890,677,
    37303,890,654,
    37565,890,638,
    37828,890,637,
    38090,890,666,
    38353,890,669,
    38615,890,670,
    38877,890,673,
    39140,890,650,
    39402,890,655,
    39665,890,679,
    39927,890,692,
    40189,890,707,
    40452,890,713,
    40714,890,719,
    40977,890,730,
    41239,890,737,
    41502,890,747,
    41764,890,723,
    42026,890,721,
    42289,890,728,
    42551,890,778,
    42814,890,780,
    43076,890,836,
    43339,890,865,
    43601,890,886,
    43863,890,902,
    44126,890,916,
    44388,890,911,
    44651,890,907,
    44913,890,882,
    45175,890,862,
    34679,888,599,
    34941,888,588,
    35204,888,556,
    35466,888,560,
    35729,888,585,
    35991,888,609,
    36253,888,649,
    36516,888,689,
    36778,888,699,
    37041,888,682,
    37303,888,667,
    37565,888,627,
    37828,888,649,
    38090,888,676,
    38353,888,672,
    38615,888,669,
    38878,888,654,
    39140,888,653,
    39402,888,672,
    39665,888,702,
    39927,888,707,
    40190,888,735,
    40452,888,745,
    40714,888,744,
    40977,888,745,
    41239,888,762,
    41502,888,775,
    41764,888,712,
    42027,888,727,
    42289,888,755,
    42551,888,772,
    42814,888,840,
    43076,888,848,
    43339,888,904,
    43601,888,908,
    43863,888,860,
    44126,888,872,
    44388,888,880,
    44651,888,885,
    44913,888,870,
    45175,888,868
};

uint16_t lonStore[MAX];
uint16_t hStore[MAX];
int16_t search(uint16_t x, int16_t y);
int16_t searchPrecise(float x, float y, int convert);
