#if defined _mainzone_included
	#endinput
#endif
#define _mainzone_included

//ZONE AMOUNT LIMIT
/**
 * -DESCRIPTION:
 * 		-Defines the zone amount limit.
 */
#define MAX_ZONES							366

//NAMES
/**
 * -DESCRIPTION:
 * 		-Zone names and their coordinates.
 * -CREDITS:
 * 		-Mabako, Cueball, Betamaster and Simon: http://forum.sa-mp.com/showthread.php?t=27598
 * 		-Edited by Freaksken.
 */
#define MAX_ZONE_NAME						26
enum MAINZONE_E_ZONE {
	MAINZONE_ZONE_NAME[MAX_ZONE_NAME + 1],
	Float:MAINZONE_ZONE_COORDS[6]
}
static const MainZone_ZoneNames[MAX_ZONES][MAINZONE_E_ZONE] = {
	//NAME							AREA (x_min, y_min, z_min, x_max, y_max, z_max)
	{"The Big Ear",					{-410.0, 1403.3, -3.0, -137.9, 1681.2, 200.0}},
	{"Aldea Malvada",				{-1372.1, 2498.5, 0.0, -1277.5, 2615.3, 200.0}},
	{"Angel Pine",					{-2324.9, -2584.2, -6.1, -1964.2, -2212.1, 200.0}},
	{"Arco del Oeste",				{-901.1, 2221.8, 0.0, -592.0, 2571.9, 200.0}},
	{"Avispa Country Club",			{-2646.4, -355.4, 0.0, -2270.0, -222.5, 200.0}},
	{"Avispa Country Club",			{-2831.8, -430.2, -6.1, -2646.4, -222.5, 200.0}},
	{"Avispa Country Club",			{-2361.5, -417.1, 0.0, -2270.0, -355.4, 200.0}},
	{"Avispa Country Club",			{-2667.8, -302.1, -28.8, -2646.4, -262.3, 71.1}},
	{"Avispa Country Club",			{-2470.0, -355.4, 0.0, -2270.0, -318.4, 46.1}},
	{"Avispa Country Club",			{-2550.0, -355.4, 0.0, -2470.0, -318.4, 39.7}},
	{"Back o Beyond",				{-1166.9, -2641.1, 0.0, -321.7, -1856.0, 200.0}},
	{"Battery Point",				{-2741.0, 1268.4, -4.5, -2533.0, 1490.4, 200.0}},
	{"Bayside",						{-2741.0, 2175.1, 0.0, -2353.1, 2722.7, 200.0}},
	{"Bayside Marina",				{-2353.1, 2275.7, 0.0, -2153.1, 2475.7, 200.0}},
	{"Beacon Hill",					{-399.6, -1075.5, -1.4, -319.0, -977.5, 198.5}},
	{"Blackfield",					{964.3, 1203.2, -89.0, 1197.3, 1403.2, 110.9}},
	{"Blackfield",					{964.3, 1403.2, -89.0, 1197.3, 1726.2, 110.9}},
	{"Blackfield Chapel",			{1375.6, 596.3, -89.0, 1558.0, 823.2, 110.9}},
	{"Blackfield Chapel",			{1325.6, 596.3, -89.0, 1375.6, 795.0, 110.9}},
	{"Blackfield Intersection",		{1197.3, 1044.6, -89.0, 1277.0, 1163.3, 110.9}},
	{"Blackfield Intersection",		{1166.5, 795.0, -89.0, 1375.6, 1044.6, 110.9}},
	{"Blackfield Intersection",		{1277.0, 1044.6, -89.0, 1315.3, 1087.6, 110.9}},
	{"Blackfield Intersection",		{1375.6, 823.2, -89.0, 1457.3, 919.4, 110.9}},
	{"Blueberry",					{104.5, -220.1, 2.3, 349.6, 152.2, 200.0}},
	{"Blueberry",					{19.6, -404.1, 3.8, 349.6, -220.1, 200.0}},
	{"Blueberry Acres",				{-319.6, -220.1, 0.0, 104.5, 293.3, 200.0}},
	{"Caligula's Palace",			{2087.3, 1543.2, -89.0, 2437.3, 1703.2, 110.9}},
	{"Caligula's Palace",			{2137.4, 1703.2, -89.0, 2437.3, 1783.2, 110.9}},
	{"Calton Heights",				{-2274.1, 744.1, -6.1, -1982.3, 1358.9, 200.0}},
	{"Chinatown",					{-2274.1, 578.3, -7.6, -2078.6, 744.1, 200.0}},
	{"City Hall",					{-2867.8, 277.4, -9.1, -2593.4, 458.4, 200.0}},
	{"Come-A-Lot",					{2087.3, 943.2, -89.0, 2623.1, 1203.2, 110.9}},
	{"Commerce",					{1323.9, -1842.2, -89.0, 1701.9, -1722.2, 110.9}},
	{"Commerce",					{1323.9, -1722.2, -89.0, 1440.9, -1577.5, 110.9}},
	{"Commerce",					{1370.8, -1577.5, -89.0, 1463.9, -1384.9, 110.9}},
	{"Commerce",					{1463.9, -1577.5, -89.0, 1667.9, -1430.8, 110.9}},
	{"Commerce",					{1583.5, -1722.2, -89.0, 1758.9, -1577.5, 110.9}},
	{"Commerce",					{1667.9, -1577.5, -89.0, 1812.6, -1430.8, 110.9}},
	{"Conference Center",			{1046.1, -1804.2, -89.0, 1323.9, -1722.2, 110.9}},
	{"Conference Center",			{1073.2, -1842.2, -89.0, 1323.9, -1804.2, 110.9}},
	{"Cranberry Station",			{-2007.8, 56.3, 0.0, -1922.0, 224.7, 100.0}},
	{"Creek",						{2749.9, 1937.2, -89.0, 2921.6, 2669.7, 110.9}},
	{"Dillimore",					{580.7, -674.8, -9.5, 861.0, -404.7, 200.0}},
	{"Doherty",						{-2270.0, -324.1, -0.0, -1794.9, -222.5, 200.0}},
	{"Doherty",						{-2173.0, -222.5, -0.0, -1794.9, 265.2, 200.0}},
	{"Downtown",					{-1982.3, 744.1, -6.1, -1871.7, 1274.2, 200.0}},
	{"Downtown",					{-1871.7, 1176.4, -4.5, -1620.3, 1274.2, 200.0}},
	{"Downtown",					{-1700.0, 744.2, -6.1, -1580.0, 1176.5, 200.0}},
	{"Downtown",					{-1580.0, 744.2, -6.1, -1499.8, 1025.9, 200.0}},
	{"Downtown",					{-2078.6, 578.3, -7.6, -1499.8, 744.2, 200.0}},
	{"Downtown",					{-1993.2, 265.2, -9.1, -1794.9, 578.3, 200.0}},
	{"Downtown Los Santos",			{1463.9, -1430.8, -89.0, 1724.7, -1290.8, 110.9}},
	{"Downtown Los Santos",			{1724.7, -1430.8, -89.0, 1812.6, -1250.9, 110.9}},
	{"Downtown Los Santos",			{1463.9, -1290.8, -89.0, 1724.7, -1150.8, 110.9}},
	{"Downtown Los Santos",			{1370.8, -1384.9, -89.0, 1463.9, -1170.8, 110.9}},
	{"Downtown Los Santos",			{1724.7, -1250.9, -89.0, 1812.6, -1150.8, 110.9}},
	{"Downtown Los Santos",			{1370.8, -1170.8, -89.0, 1463.9, -1130.8, 110.9}},
	{"Downtown Los Santos",			{1378.3, -1130.8, -89.0, 1463.9, -1026.3, 110.9}},
	{"Downtown Los Santos",			{1391.0, -1026.3, -89.0, 1463.9, -926.9, 110.9}},
	{"Downtown Los Santos",			{1507.5, -1385.2, 110.9, 1582.5, -1325.3, 335.9}},
	{"East Beach",					{2632.8, -1852.8, -89.0, 2959.3, -1668.1, 110.9}},
	{"East Beach",					{2632.8, -1668.1, -89.0, 2747.7, -1393.4, 110.9}},
	{"East Beach",					{2747.7, -1668.1, -89.0, 2959.3, -1498.6, 110.9}},
	{"East Beach",					{2747.7, -1498.6, -89.0, 2959.3, -1120.0, 110.9}},
	{"East Los Santos",				{2421.0, -1628.5, -89.0, 2632.8, -1454.3, 110.9}},
	{"East Los Santos",				{2222.5, -1628.5, -89.0, 2421.0, -1494.0, 110.9}},
	{"East Los Santos",				{2266.2, -1494.0, -89.0, 2381.6, -1372.0, 110.9}},
	{"East Los Santos",				{2381.6, -1494.0, -89.0, 2421.0, -1454.3, 110.9}},
	{"East Los Santos",				{2281.4, -1372.0, -89.0, 2381.6, -1135.0, 110.9}},
	{"East Los Santos",				{2381.6, -1454.3, -89.0, 2462.1, -1135.0, 110.9}},
	{"East Los Santos",				{2462.1, -1454.3, -89.0, 2581.7, -1135.0, 110.9}},
	{"Easter Basin",				{-1794.9, 249.9, -9.1, -1242.9, 578.3, 200.0}},
	{"Easter Basin",				{-1794.9, -50.0, -0.0, -1499.8, 249.9, 200.0}},
	{"Easter Bay Airport",			{-1499.8, -50.0, -0.0, -1242.9, 249.9, 200.0}},
	{"Easter Bay Airport",			{-1794.9, -730.1, -3.0, -1213.9, -50.0, 200.0}},
	{"Easter Bay Airport",			{-1213.9, -730.1, 0.0, -1132.8, -50.0, 200.0}},
	{"Easter Bay Airport",			{-1242.9, -50.0, 0.0, -1213.9, 578.3, 200.0}},
	{"Easter Bay Airport",			{-1213.9, -50.0, -4.5, -947.9, 578.3, 200.0}},
	{"Easter Bay Airport",			{-1315.4, -405.3, 15.4, -1264.4, -209.5, 25.4}},
	{"Easter Bay Airport",			{-1354.3, -287.3, 15.4, -1315.4, -209.5, 25.4}},
	{"Easter Bay Airport",			{-1490.3, -209.5, 15.4, -1264.4, -148.3, 25.4}},
	{"Easter Bay Chemicals",		{-1132.8, -768.0, 0.0, -956.4, -578.1, 200.0}},
	{"Easter Bay Chemicals",		{-1132.8, -787.3, 0.0, -956.4, -768.0, 200.0}},
	{"El Castillo del Diablo",		{-464.5, 2217.6, 0.0, -208.5, 2580.3, 200.0}},
	{"El Castillo del Diablo",		{-208.5, 2123.0, -7.6, 114.0, 2337.1, 200.0}},
	{"El Castillo del Diablo",		{-208.5, 2337.1, 0.0, 8.4, 2487.1, 200.0}},
	{"El Corona",					{1812.6, -2179.2, -89.0, 1970.6, -1852.8, 110.9}},
	{"El Corona",					{1692.6, -2179.2, -89.0, 1812.6, -1842.2, 110.9}},
	{"El Quebrados",				{-1645.2, 2498.5, 0.0, -1372.1, 2777.8, 200.0}},
	{"Esplanade East",				{-1620.3, 1176.5, -4.5, -1580.0, 1274.2, 200.0}},
	{"Esplanade East",				{-1580.0, 1025.9, -6.1, -1499.8, 1274.2, 200.0}},
	{"Esplanade East",				{-1499.8, 578.3, -79.6, -1339.8, 1274.2, 20.3}},
	{"Esplanade North",				{-2533.0, 1358.9, -4.5, -1996.6, 1501.2, 200.0}},
	{"Esplanade North",				{-1996.6, 1358.9, -4.5, -1524.2, 1592.5, 200.0}},
	{"Esplanade North",				{-1982.3, 1274.2, -4.5, -1524.2, 1358.9, 200.0}},
	{"Fallen Tree",					{-792.2, -698.5, -5.3, -452.4, -380.0, 200.0}},
	{"Fallow Bridge",				{434.3, 366.5, 0.0, 603.0, 555.6, 200.0}},
	{"Fern Ridge",					{508.1, -139.2, 0.0, 1306.6, 119.5, 200.0}},
	{"Financial",					{-1871.7, 744.1, -6.1, -1701.3, 1176.4, 300.0}},
	{"Fisher's Lagoon",				{1916.9, -233.3, -100.0, 2131.7, 13.8, 200.0}},
	{"Flint Intersection",			{-187.7, -1596.7, -89.0, 17.0, -1276.6, 110.9}},
	{"Flint Range",					{-594.1, -1648.5, 0.0, -187.7, -1276.6, 200.0}},
	{"Fort Carson",					{-376.2, 826.3, -3.0, 123.7, 1220.4, 200.0}},
	{"Foster Valley",				{-2270.0, -430.2, -0.0, -2178.6, -324.1, 200.0}},
	{"Foster Valley",				{-2178.6, -599.8, -0.0, -1794.9, -324.1, 200.0}},
	{"Foster Valley",				{-2178.6, -1115.5, 0.0, -1794.9, -599.8, 200.0}},
	{"Foster Valley",				{-2178.6, -1250.9, 0.0, -1794.9, -1115.5, 200.0}},
	{"Frederick Bridge",			{2759.2, 296.5, 0.0, 2774.2, 594.7, 200.0}},
	{"Gant Bridge",					{-2741.4, 1659.6, -6.1, -2616.4, 2175.1, 200.0}},
	{"Gant Bridge",					{-2741.0, 1490.4, -6.1, -2616.4, 1659.6, 200.0}},
	{"Ganton",						{2222.5, -1852.8, -89.0, 2632.8, -1722.3, 110.9}},
	{"Ganton",						{2222.5, -1722.3, -89.0, 2632.8, -1628.5, 110.9}},
	{"Garcia",						{-2411.2, -222.5, -0.0, -2173.0, 265.2, 200.0}},
	{"Garcia",						{-2395.1, -222.5, -5.3, -2354.0, -204.7, 200.0}},
	{"Garver Bridge",				{-1339.8, 828.1, -89.0, -1213.9, 1057.0, 110.9}},
	{"Garver Bridge",				{-1213.9, 950.0, -89.0, -1087.9, 1178.9, 110.9}},
	{"Garver Bridge",				{-1499.8, 696.4, -179.6, -1339.8, 925.3, 20.3}},
	{"Glen Park",					{1812.6, -1449.6, -89.0, 1996.9, -1350.7, 110.9}},
	{"Glen Park",					{1812.6, -1100.8, -89.0, 1994.3, -973.3, 110.9}},
	{"Glen Park",					{1812.6, -1350.7, -89.0, 2056.8, -1100.8, 110.9}},
	{"Green Palms",					{176.5, 1305.4, -3.0, 338.6, 1520.7, 200.0}},
	{"Greenglass College",			{964.3, 1044.6, -89.0, 1197.3, 1203.2, 110.9}},
	{"Greenglass College",			{964.3, 930.8, -89.0, 1166.5, 1044.6, 110.9}},
	{"Hampton Barns",				{603.0, 264.3, 0.0, 761.9, 366.5, 200.0}},
	{"Hankypanky Point",			{2576.9, 62.1, 0.0, 2759.2, 385.5, 200.0}},
	{"Harry Gold Parkway",			{1777.3, 863.2, -89.0, 1817.3, 2342.8, 110.9}},
	{"Hashbury",					{-2593.4, -222.5, -0.0, -2411.2, 54.7, 200.0}},
	{"Hilltop Farm",				{967.3, -450.3, -3.0, 1176.7, -217.9, 200.0}},
	{"Hunter Quarry",				{337.2, 710.8, -115.2, 860.5, 1031.7, 203.7}},
	{"Idlewood",					{1812.6, -1852.8, -89.0, 1971.6, -1742.3, 110.9}},
	{"Idlewood",					{1812.6, -1742.3, -89.0, 1951.6, -1602.3, 110.9}},
	{"Idlewood",					{1951.6, -1742.3, -89.0, 2124.6, -1602.3, 110.9}},
	{"Idlewood",					{1812.6, -1602.3, -89.0, 2124.6, -1449.6, 110.9}},
	{"Idlewood",					{2124.6, -1742.3, -89.0, 2222.5, -1494.0, 110.9}},
	{"Idlewood",					{1971.6, -1852.8, -89.0, 2222.5, -1742.3, 110.9}},
	{"Jefferson",					{1996.9, -1449.6, -89.0, 2056.8, -1350.7, 110.9}},
	{"Jefferson",					{2124.6, -1494.0, -89.0, 2266.2, -1449.6, 110.9}},
	{"Jefferson",					{2056.8, -1372.0, -89.0, 2281.4, -1210.7, 110.9}},
	{"Jefferson",					{2056.8, -1210.7, -89.0, 2185.3, -1126.3, 110.9}},
	{"Jefferson",					{2185.3, -1210.7, -89.0, 2281.4, -1154.5, 110.9}},
	{"Jefferson",					{2056.8, -1449.6, -89.0, 2266.2, -1372.0, 110.9}},
	{"Julius Thruway East",			{2623.1, 943.2, -89.0, 2749.9, 1055.9, 110.9}},
	{"Julius Thruway East",			{2685.1, 1055.9, -89.0, 2749.9, 2626.5, 110.9}},
	{"Julius Thruway East",			{2536.4, 2442.5, -89.0, 2685.1, 2542.5, 110.9}},
	{"Julius Thruway East",			{2625.1, 2202.7, -89.0, 2685.1, 2442.5, 110.9}},
	{"Julius Thruway North",		{2498.2, 2542.5, -89.0, 2685.1, 2626.5, 110.9}},
	{"Julius Thruway North",		{2237.4, 2542.5, -89.0, 2498.2, 2663.1, 110.9}},
	{"Julius Thruway North",		{2121.4, 2508.2, -89.0, 2237.4, 2663.1, 110.9}},
	{"Julius Thruway North",		{1938.8, 2508.2, -89.0, 2121.4, 2624.2, 110.9}},
	{"Julius Thruway North",		{1534.5, 2433.2, -89.0, 1848.4, 2583.2, 110.9}},
	{"Julius Thruway North",		{1848.4, 2478.4, -89.0, 1938.8, 2553.4, 110.9}},
	{"Julius Thruway North",		{1704.5, 2342.8, -89.0, 1848.4, 2433.2, 110.9}},
	{"Julius Thruway North",		{1377.3, 2433.2, -89.0, 1534.5, 2507.2, 110.9}},
	{"Julius Thruway South",		{1457.3, 823.2, -89.0, 2377.3, 863.2, 110.9}},
	{"Julius Thruway South",		{2377.3, 788.8, -89.0, 2537.3, 897.9, 110.9}},
	{"Julius Thruway West",			{1197.3, 1163.3, -89.0, 1236.6, 2243.2, 110.9}},
	{"Julius Thruway West",			{1236.6, 2142.8, -89.0, 1297.4, 2243.2, 110.9}},
	{"Juniper Hill",				{-2533.0, 578.3, -7.6, -2274.1, 968.3, 200.0}},
	{"Juniper Hollow",				{-2533.0, 968.3, -6.1, -2274.1, 1358.9, 200.0}},
	{"K.A.C.C. Military Fuels",		{2498.2, 2626.5, -89.0, 2749.9, 2861.5, 110.9}},
	{"Kincaid Bridge",				{-1339.8, 599.2, -89.0, -1213.9, 828.1, 110.9}},
	{"Kincaid Bridge",				{-1213.9, 721.1, -89.0, -1087.9, 950.0, 110.9}},
	{"Kincaid Bridge",				{-1087.9, 855.3, -89.0, -961.9, 986.2, 110.9}},
	{"King's",						{-2329.3, 458.4, -7.6, -1993.2, 578.3, 200.0}},
	{"King's",						{-2411.2, 265.2, -9.1, -1993.2, 373.5, 200.0}},
	{"King's",						{-2253.5, 373.5, -9.1, -1993.2, 458.4, 200.0}},
	{"LVA Freight Depot",			{1457.3, 863.2, -89.0, 1777.4, 1143.2, 110.9}},
	{"LVA Freight Depot",			{1375.6, 919.4, -89.0, 1457.3, 1203.2, 110.9}},
	{"LVA Freight Depot",			{1277.0, 1087.6, -89.0, 1375.6, 1203.2, 110.9}},
	{"LVA Freight Depot",			{1315.3, 1044.6, -89.0, 1375.6, 1087.6, 110.9}},
	{"LVA Freight Depot",			{1236.6, 1163.4, -89.0, 1277.0, 1203.2, 110.9}},
	{"Las Barrancas",				{-926.1, 1398.7, -3.0, -719.2, 1634.6, 200.0}},
	{"Las Brujas",					{-365.1, 2123.0, -3.0, -208.5, 2217.6, 200.0}},
	{"Las Colinas",					{1994.3, -1100.8, -89.0, 2056.8, -920.8, 110.9}},
	{"Las Colinas",					{2056.8, -1126.3, -89.0, 2126.8, -920.8, 110.9}},
	{"Las Colinas",					{2185.3, -1154.5, -89.0, 2281.4, -934.4, 110.9}},
	{"Las Colinas",					{2126.8, -1126.3, -89.0, 2185.3, -934.4, 110.9}},
	{"Las Colinas",					{2747.7, -1120.0, -89.0, 2959.3, -945.0, 110.9}},
	{"Las Colinas",					{2632.7, -1135.0, -89.0, 2747.7, -945.0, 110.9}},
	{"Las Colinas",					{2281.4, -1135.0, -89.0, 2632.7, -945.0, 110.9}},
	{"Las Payasadas",				{-354.3, 2580.3, 2.0, -133.6, 2816.8, 200.0}},
	{"Las Venturas Airport",		{1236.6, 1203.2, -89.0, 1457.3, 1883.1, 110.9}},
	{"Las Venturas Airport",		{1457.3, 1203.2, -89.0, 1777.3, 1883.1, 110.9}},
	{"Las Venturas Airport",		{1457.3, 1143.2, -89.0, 1777.4, 1203.2, 110.9}},
	{"Las Venturas Airport",		{1515.8, 1586.4, -12.5, 1729.9, 1714.5, 87.5}},
	{"Last Dime Motel",				{1823.0, 596.3, -89.0, 1997.2, 823.2, 110.9}},
	{"Leafy Hollow",				{-1166.9, -1856.0, 0.0, -815.6, -1602.0, 200.0}},
	{"Liberty City",				{-1000.0, 400.0, 1300.0, -700.0, 600.0, 1400.0}},
	{"Lil' Probe Inn",				{-90.2, 1286.8, -3.0, 153.8, 1554.1, 200.0}},
	{"Linden Side",					{2749.9, 943.2, -89.0, 2923.3, 1198.9, 110.9}},
	{"Linden Station",				{2749.9, 1198.9, -89.0, 2923.3, 1548.9, 110.9}},
	{"Linden Station",				{2811.2, 1229.5, -39.5, 2861.2, 1407.5, 60.4}},
	{"Little Mexico",				{1701.9, -1842.2, -89.0, 1812.6, -1722.2, 110.9}},
	{"Little Mexico",				{1758.9, -1722.2, -89.0, 1812.6, -1577.5, 110.9}},
	{"Los Flores",					{2581.7, -1454.3, -89.0, 2632.8, -1393.4, 110.9}},
	{"Los Flores",					{2581.7, -1393.4, -89.0, 2747.7, -1135.0, 110.9}},
	{"Los Santos International",	{1249.6, -2394.3, -89.0, 1852.0, -2179.2, 110.9}},
	{"Los Santos International",	{1852.0, -2394.3, -89.0, 2089.0, -2179.2, 110.9}},
	{"Los Santos International",	{1382.7, -2730.8, -89.0, 2201.8, -2394.3, 110.9}},
	{"Los Santos International",	{1974.6, -2394.3, -39.0, 2089.0, -2256.5, 60.9}},
	{"Los Santos International",	{1400.9, -2669.2, -39.0, 2189.8, -2597.2, 60.9}},
	{"Los Santos International",	{2051.6, -2597.2, -39.0, 2152.4, -2394.3, 60.9}},
	{"Marina",						{647.7, -1804.2, -89.0, 851.4, -1577.5, 110.9}},
	{"Marina",						{647.7, -1577.5, -89.0, 807.9, -1416.2, 110.9}},
	{"Marina",						{807.9, -1577.5, -89.0, 926.9, -1416.2, 110.9}},
	{"Market",						{787.4, -1416.2, -89.0, 1072.6, -1310.2, 110.9}},
	{"Market",						{952.6, -1310.2, -89.0, 1072.6, -1130.8, 110.9}},
	{"Market",						{1072.6, -1416.2, -89.0, 1370.8, -1130.8, 110.9}},
	{"Market",						{926.9, -1577.5, -89.0, 1370.8, -1416.2, 110.9}},
	{"Market Station",				{787.4, -1410.9, -34.1, 866.0, -1310.2, 65.8}},
	{"Martin Bridge",				{-222.1, 293.3, 0.0, -122.1, 476.4, 200.0}},
	{"Missionary Hill",				{-2994.4, -811.2, 0.0, -2178.6, -430.2, 200.0}},
	{"Montgomery",					{1119.5, 119.5, -3.0, 1451.4, 493.3, 200.0}},
	{"Montgomery",					{1451.4, 347.4, -6.1, 1582.4, 420.8, 200.0}},
	{"Montgomery Intersection",		{1546.6, 208.1, 0.0, 1745.8, 347.4, 200.0}},
	{"Montgomery Intersection",		{1582.4, 347.4, 0.0, 1664.6, 401.7, 200.0}},
	{"Mulholland",					{1414.0, -768.0, -89.0, 1667.6, -452.4, 110.9}},
	{"Mulholland",					{1281.1, -452.4, -89.0, 1641.1, -290.9, 110.9}},
	{"Mulholland",					{1269.1, -768.0, -89.0, 1414.0, -452.4, 110.9}},
	{"Mulholland",					{1357.0, -926.9, -89.0, 1463.9, -768.0, 110.9}},
	{"Mulholland",					{1318.1, -910.1, -89.0, 1357.0, -768.0, 110.9}},
	{"Mulholland",					{1169.1, -910.1, -89.0, 1318.1, -768.0, 110.9}},
	{"Mulholland",					{768.6, -954.6, -89.0, 952.6, -860.6, 110.9}},
	{"Mulholland",					{687.8, -860.6, -89.0, 911.8, -768.0, 110.9}},
	{"Mulholland",					{737.5, -768.0, -89.0, 1142.2, -674.8, 110.9}},
	{"Mulholland",					{1096.4, -910.1, -89.0, 1169.1, -768.0, 110.9}},
	{"Mulholland",					{952.6, -937.1, -89.0, 1096.4, -860.6, 110.9}},
	{"Mulholland",					{911.8, -860.6, -89.0, 1096.4, -768.0, 110.9}},
	{"Mulholland",					{861.0, -674.8, -89.0, 1156.5, -600.8, 110.9}},
	{"Mulholland Intersection",		{1463.9, -1150.8, -89.0, 1812.6, -768.0, 110.9}},
	{"North Rock",					{2285.3, -768.0, 0.0, 2770.5, -269.7, 200.0}},
	{"Ocean Docks",					{2373.7, -2697.0, -89.0, 2809.2, -2330.4, 110.9}},
	{"Ocean Docks",					{2201.8, -2418.3, -89.0, 2324.0, -2095.0, 110.9}},
	{"Ocean Docks",					{2324.0, -2302.3, -89.0, 2703.5, -2145.1, 110.9}},
	{"Ocean Docks",					{2089.0, -2394.3, -89.0, 2201.8, -2235.8, 110.9}},
	{"Ocean Docks",					{2201.8, -2730.8, -89.0, 2324.0, -2418.3, 110.9}},
	{"Ocean Docks",					{2703.5, -2302.3, -89.0, 2959.3, -2126.9, 110.9}},
	{"Ocean Docks",					{2324.0, -2145.1, -89.0, 2703.5, -2059.2, 110.9}},
	{"Ocean Flats",					{-2994.4, 277.4, -9.1, -2867.8, 458.4, 200.0}},
	{"Ocean Flats",					{-2994.4, -222.5, -0.0, -2593.4, 277.4, 200.0}},
	{"Ocean Flats",					{-2994.4, -430.2, -0.0, -2831.8, -222.5, 200.0}},
	{"Octane Springs",				{338.6, 1228.5, 0.0, 664.3, 1655.0, 200.0}},
	{"Old Venturas Strip",			{2162.3, 2012.1, -89.0, 2685.1, 2202.7, 110.9}},
	{"Palisades",					{-2994.4, 458.4, -6.1, -2741.0, 1339.6, 200.0}},
	{"Palomino Creek",				{2160.2, -149.0, 0.0, 2576.9, 228.3, 200.0}},
	{"Paradiso",					{-2741.0, 793.4, -6.1, -2533.0, 1268.4, 200.0}},
	{"Pershing Square",				{1440.9, -1722.2, -89.0, 1583.5, -1577.5, 110.9}},
	{"Pilgrim",						{2437.3, 1383.2, -89.0, 2624.4, 1783.2, 110.9}},
	{"Pilgrim",						{2624.4, 1383.2, -89.0, 2685.1, 1783.2, 110.9}},
	{"Pilson Intersection",			{1098.3, 2243.2, -89.0, 1377.3, 2507.2, 110.9}},
	{"Pirates in Men's Pants",		{1817.3, 1469.2, -89.0, 2027.4, 1703.2, 110.9}},
	{"Playa del Seville",			{2703.5, -2126.9, -89.0, 2959.3, -1852.8, 110.9}},
	{"Prickle Pine",				{1534.5, 2583.2, -89.0, 1848.4, 2863.2, 110.9}},
	{"Prickle Pine",				{1117.4, 2507.2, -89.0, 1534.5, 2723.2, 110.9}},
	{"Prickle Pine",				{1848.4, 2553.4, -89.0, 1938.8, 2863.2, 110.9}},
	{"Prickle Pine",				{1938.8, 2624.2, -89.0, 2121.4, 2861.5, 110.9}},
	{"Queens",						{-2533.0, 458.4, 0.0, -2329.3, 578.3, 200.0}},
	{"Queens",						{-2593.4, 54.7, 0.0, -2411.2, 458.4, 200.0}},
	{"Queens",						{-2411.2, 373.5, 0.0, -2253.5, 458.4, 200.0}},
	{"Randolph Industrial Estate",	{1558.0, 596.3, -89.0, 1823.0, 823.2, 110.9}},
	{"Redsands East",				{1817.3, 2011.8, -89.0, 2106.7, 2202.7, 110.9}},
	{"Redsands East",				{1817.3, 2202.7, -89.0, 2011.9, 2342.8, 110.9}},
	{"Redsands East",				{1848.4, 2342.8, -89.0, 2011.9, 2478.4, 110.9}},
	{"Redsands West",				{1236.6, 1883.1, -89.0, 1777.3, 2142.8, 110.9}},
	{"Redsands West",				{1297.4, 2142.8, -89.0, 1777.3, 2243.2, 110.9}},
	{"Redsands West",				{1377.3, 2243.2, -89.0, 1704.5, 2433.2, 110.9}},
	{"Redsands West",				{1704.5, 2243.2, -89.0, 1777.3, 2342.8, 110.9}},
	{"Regular Tom",					{-405.7, 1712.8, -3.0, -276.7, 1892.7, 200.0}},
	{"Richman",						{647.5, -1118.2, -89.0, 787.4, -954.6, 110.9}},
	{"Richman",						{647.5, -954.6, -89.0, 768.6, -860.6, 110.9}},
	{"Richman",						{225.1, -1369.6, -89.0, 334.5, -1292.0, 110.9}},
	{"Richman",						{225.1, -1292.0, -89.0, 466.2, -1235.0, 110.9}},
	{"Richman",						{72.6, -1404.9, -89.0, 225.1, -1235.0, 110.9}},
	{"Richman",						{72.6, -1235.0, -89.0, 321.3, -1008.1, 110.9}},
	{"Richman",						{321.3, -1235.0, -89.0, 647.5, -1044.0, 110.9}},
	{"Richman",						{321.3, -1044.0, -89.0, 647.5, -860.6, 110.9}},
	{"Richman",						{321.3, -860.6, -89.0, 687.8, -768.0, 110.9}},
	{"Richman",						{321.3, -768.0, -89.0, 700.7, -674.8, 110.9}},
	{"Robada Intersection",			{-1119.0, 1178.9, -89.0, -862.0, 1351.4, 110.9}},
	{"Roca Escalante",				{2237.4, 2202.7, -89.0, 2536.4, 2542.5, 110.9}},
	{"Roca Escalante",				{2536.4, 2202.7, -89.0, 2625.1, 2442.5, 110.9}},
	{"Rockshore East",				{2537.3, 676.5, -89.0, 2902.3, 943.2, 110.9}},
	{"Rockshore West",				{1997.2, 596.3, -89.0, 2377.3, 823.2, 110.9}},
	{"Rockshore West",				{2377.3, 596.3, -89.0, 2537.3, 788.8, 110.9}},
	{"Rodeo",						{72.6, -1684.6, -89.0, 225.1, -1544.1, 110.9}},
	{"Rodeo",						{72.6, -1544.1, -89.0, 225.1, -1404.9, 110.9}},
	{"Rodeo",						{225.1, -1684.6, -89.0, 312.8, -1501.9, 110.9}},
	{"Rodeo",						{225.1, -1501.9, -89.0, 334.5, -1369.6, 110.9}},
	{"Rodeo",						{334.5, -1501.9, -89.0, 422.6, -1406.0, 110.9}},
	{"Rodeo",						{312.8, -1684.6, -89.0, 422.6, -1501.9, 110.9}},
	{"Rodeo",						{422.6, -1684.6, -89.0, 558.0, -1570.2, 110.9}},
	{"Rodeo",						{558.0, -1684.6, -89.0, 647.5, -1384.9, 110.9}},
	{"Rodeo",						{466.2, -1570.2, -89.0, 558.0, -1385.0, 110.9}},
	{"Rodeo",						{422.6, -1570.2, -89.0, 466.2, -1406.0, 110.9}},
	{"Rodeo",						{466.2, -1385.0, -89.0, 647.5, -1235.0, 110.9}},
	{"Rodeo",						{334.5, -1406.0, -89.0, 466.2, -1292.0, 110.9}},
	{"Royal Casino",				{2087.3, 1383.2, -89.0, 2437.3, 1543.2, 110.9}},
	{"San Andreas Sound",			{2450.3, 385.5, -100.0, 2759.2, 562.3, 200.0}},
	{"Santa Flora",					{-2741.0, 458.4, -7.6, -2533.0, 793.4, 200.0}},
	{"Santa Maria Beach",			{342.6, -2173.2, -89.0, 647.7, -1684.6, 110.9}},
	{"Santa Maria Beach",			{72.6, -2173.2, -89.0, 342.6, -1684.6, 110.9}},
	{"Shady Cabin",					{-1632.8, -2263.4, -3.0, -1601.3, -2231.7, 200.0}},
	{"Shady Creeks",				{-1820.6, -2643.6, -8.0, -1226.7, -1771.6, 200.0}},
	{"Shady Creeks",				{-2030.1, -2174.8, -6.1, -1820.6, -1771.6, 200.0}},
	{"Sobell Rail Yards",			{2749.9, 1548.9, -89.0, 2923.3, 1937.2, 110.9}},
	{"Spinybed",					{2121.4, 2663.1, -89.0, 2498.2, 2861.5, 110.9}},
	{"Starfish Casino",				{2437.3, 1783.2, -89.0, 2685.1, 2012.1, 110.9}},
	{"Starfish Casino",				{2437.3, 1858.1, -39.0, 2495.0, 1970.8, 60.9}},
	{"Starfish Casino",				{2162.3, 1883.2, -89.0, 2437.3, 2012.1, 110.9}},
	{"Temple",						{1252.3, -1130.8, -89.0, 1378.3, -1026.3, 110.9}},
	{"Temple",						{1252.3, -1026.3, -89.0, 1391.0, -926.9, 110.9}},
	{"Temple",						{1252.3, -926.9, -89.0, 1357.0, -910.1, 110.9}},
	{"Temple",						{952.6, -1130.8, -89.0, 1096.4, -937.1, 110.9}},
	{"Temple",						{1096.4, -1130.8, -89.0, 1252.3, -1026.3, 110.9}},
	{"Temple",						{1096.4, -1026.3, -89.0, 1252.3, -910.1, 110.9}},
	{"The Camel's Toe",				{2087.3, 1203.2, -89.0, 2640.4, 1383.2, 110.9}},
	{"The Clown's Pocket",			{2162.3, 1783.2, -89.0, 2437.3, 1883.2, 110.9}},
	{"The Emerald Isle",			{2011.9, 2202.7, -89.0, 2237.4, 2508.2, 110.9}},
	{"The Farm",					{-1209.6, -1317.1, 114.9, -908.1, -787.3, 251.9}},
	{"The Four Dragons Casino",		{1817.3, 863.2, -89.0, 2027.3, 1083.2, 110.9}},
	{"The High Roller",				{1817.3, 1283.2, -89.0, 2027.3, 1469.2, 110.9}},
	{"The Mako Span",				{1664.6, 401.7, 0.0, 1785.1, 567.2, 200.0}},
	{"The Panopticon",				{-947.9, -304.3, -1.1, -319.6, 327.0, 200.0}},
	{"The Pink Swan",				{1817.3, 1083.2, -89.0, 2027.3, 1283.2, 110.9}},
	{"The Sherman Dam",				{-968.7, 1929.4, -3.0, -481.1, 2155.2, 200.0}},
	{"The Strip",					{2027.4, 863.2, -89.0, 2087.3, 1703.2, 110.9}},
	{"The Strip",					{2106.7, 1863.2, -89.0, 2162.3, 2202.7, 110.9}},
	{"The Strip",					{2027.4, 1783.2, -89.0, 2162.3, 1863.2, 110.9}},
	{"The Strip",					{2027.4, 1703.2, -89.0, 2137.4, 1783.2, 110.9}},
	{"The Visage",					{1817.3, 1863.2, -89.0, 2106.7, 2011.8, 110.9}},
	{"The Visage",					{1817.3, 1703.2, -89.0, 2027.4, 1863.2, 110.9}},
	{"Unity Station",				{1692.6, -1971.8, -20.4, 1812.6, -1932.8, 79.5}},
	{"Valle Ocultado",				{-936.6, 2611.4, 2.0, -715.9, 2847.9, 200.0}},
	{"Verdant Bluffs",				{930.2, -2488.4, -89.0, 1249.6, -2006.7, 110.9}},
	{"Verdant Bluffs",				{1073.2, -2006.7, -89.0, 1249.6, -1842.2, 110.9}},
	{"Verdant Bluffs",				{1249.6, -2179.2, -89.0, 1692.6, -1842.2, 110.9}},
	{"Verdant Meadows",				{37.0, 2337.1, -3.0, 435.9, 2677.9, 200.0}},
	{"Verona Beach",				{647.7, -2173.2, -89.0, 930.2, -1804.2, 110.9}},
	{"Verona Beach",				{930.2, -2006.7, -89.0, 1073.2, -1804.2, 110.9}},
	{"Verona Beach",				{851.4, -1804.2, -89.0, 1046.1, -1577.5, 110.9}},
	{"Verona Beach",				{1161.5, -1722.2, -89.0, 1323.9, -1577.5, 110.9}},
	{"Verona Beach",				{1046.1, -1722.2, -89.0, 1161.5, -1577.5, 110.9}},
	{"Vinewood",					{787.4, -1310.2, -89.0, 952.6, -1130.8, 110.9}},
	{"Vinewood",					{787.4, -1130.8, -89.0, 952.6, -954.6, 110.9}},
	{"Vinewood",					{647.5, -1227.2, -89.0, 787.4, -1118.2, 110.9}},
	{"Vinewood",					{647.7, -1416.2, -89.0, 787.4, -1227.2, 110.9}},
	{"Whitewood Estates",			{883.3, 1726.2, -89.0, 1098.3, 2507.2, 110.9}},
	{"Whitewood Estates",			{1098.3, 1726.2, -89.0, 1197.3, 2243.2, 110.9}},
	{"Willowfield",					{1970.6, -2179.2, -89.0, 2089.0, -1852.8, 110.9}},
	{"Willowfield",					{2089.0, -2235.8, -89.0, 2201.8, -1989.9, 110.9}},
	{"Willowfield",					{2089.0, -1989.9, -89.0, 2324.0, -1852.8, 110.9}},
	{"Willowfield",					{2201.8, -2095.0, -89.0, 2324.0, -1989.9, 110.9}},
	{"Willowfield",					{2541.7, -1941.4, -89.0, 2703.5, -1852.8, 110.9}},
	{"Willowfield",					{2324.0, -2059.2, -89.0, 2541.7, -1852.8, 110.9}},
	{"Willowfield",					{2541.7, -2059.2, -89.0, 2703.5, -1941.4, 110.9}},
	{"Yellow Bell Station",			{1377.4, 2600.4, -21.9, 1492.4, 2687.3, 78.0}},
	//Main zones (must be after more specific zones, so that they are only picked when more specific zones don't give a match)
	{"Los Santos",					{44.6, -2892.9, -242.9, 2997.0, -768.0, 900.0}},
	{"Las Venturas",				{869.4, 596.3, -242.9, 2997.0, 2993.8, 900.0}},
	{"Bone County",					{-480.5, 596.3, -242.9, 869.4, 2993.8, 900.0}},
	{"Tierra Robada",				{-2997.4, 1659.6, -242.9, -480.5, 2993.8, 900.0}},
	{"Tierra Robada",				{-1213.9, 596.3, -242.9, -480.5, 1659.6, 900.0}},
	{"San Fierro",					{-2997.4, -1115.5, -242.9, -1213.9, 1659.6, 900.0}},
	{"Red County",					{-1213.9, -768.0, -242.9, 2997.0, 596.3, 900.0}},
	{"Flint County",				{-1213.9, -2892.9, -242.9, 44.6, -768.0, 900.0}},
	{"Whetstone",					{-2997.4, -2892.9, -242.9, -1213.9, -1115.5, 900.0}},
	//Catch-all zone (must be last, so that it is only picked when nothing else gives a match)
	{"San Andreas",					{FLOAT_NEG_INFINITY, FLOAT_NEG_INFINITY, FLOAT_NEG_INFINITY, FLOAT_INFINITY, FLOAT_INFINITY, FLOAT_INFINITY}}
};

//GET ZONE ID
/**
 * -DESCRIPTION:
 * 		-Get the ID of the most specific zone a set of coordinates is in.
 * -PARAMETERS:
 * 		-Float:x: The x coordinate of the zone to get the ID of.
 * 		-Float:y: The y coordinate of the zone to get the ID of.
 * 		-Float:z: The z coordinate of the zone to get the ID of.
 * -RETURN VALUES:
 * 		-valid zoneid: The function executed successfully.
 */
//native GetZoneID(Float:x, Float:y, Float:z); //Fake native
stock GetZoneID(Float:x, Float:y, Float:z) {
	for(new zoneid = 0; zoneid < MAX_ZONES; zoneid++) {
		if(x >= MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][0] && x <= MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][3]
		&& y >= MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][1] && y <= MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][4]
		&& z >= MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][2] && z <= MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][5]) {
			return zoneid;
		}
	}
	return MAX_ZONES - 1; //The compiler complains that we need to return a value, so we return the catch-all zone even though that this code will never be reached
}

//GET ZONE NAME
/**
 * -DESCRIPTION:
 * 		-Get the name of a zone.
 * -PARAMETERS:
 * 		-zoneid: The ID of the zone to get the name of.
 * 		-name[]: An array into which to store the name, passed by reference.
 * 		-len: The length of the string that should be stored. Recommended to be MAX_ZONE_NAME + 1.
 * -RETURN VALUES:
 * 		-name length: The function executed successfully.
 * 		-0: The function failed to execute. An invalid zoneid was given.
 * -NOTES:
 * 		-Works like GetPlayerName so that the name is stored in the given string parameter.
 */
//native GetZoneName(zoneid, name[], len); //Fake native
stock GetZoneName(zoneid, name[], len) {
	if(zoneid >= 0 && zoneid < MAX_ZONES) {
		return strmid(name, MainZone_ZoneNames[zoneid][MAINZONE_ZONE_NAME], 0, len, len);
	}
	return 0;
}

//GET ZONE COORDINATES
/**
 * -DESCRIPTION:
 * 		-Get the coordinates of a zone.
 * -PARAMETERS:
 * 		-zoneid: The ID of the zone to get the coordinates of.
 * 		-&Float:x_min: The minimum x coordinate of the zone, passed by reference.
 * 		-&Float:y_min: The minimum y coordinate of the zone, passed by reference.
 * 		-&Float:z_min: The minimum z coordinate of the zone, passed by reference.
 * 		-&Float:x_max: The maximum x coordinate of the zone, passed by reference.
 * 		-&Float:y_max: The maximum y coordinate of the zone, passed by reference.
 * 		-&Float:z_max: The maximum z coordinate of the zone, passed by reference.
 * -RETURN VALUES:
 * 		-1: The function executed successfully.
 * 		-0: The function failed to execute. An invalid zoneid was given.
 */
//native GetZoneCoordinates(zoneid, &Float:x_min, &Float:y_min, &Float:z_min, &Float:x_max, &Float:y_max, &Float:z_max); //Fake native
stock GetZoneCoordinates(zoneid, &Float:x_min, &Float:y_min, &Float:z_min, &Float:x_max, &Float:y_max, &Float:z_max) {
	if(zoneid >= 0 && zoneid < MAX_ZONES) {
		x_min = MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][0];
		y_min = MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][1];
		z_min = MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][2];
		x_max = MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][3];
		y_max = MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][4];
		z_max = MainZone_ZoneNames[zoneid][MAINZONE_ZONE_COORDS][5];
		return 1;
	}
	return 0;
}