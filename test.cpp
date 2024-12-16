//#include <catch2/catch_test_macros.hpp>
//#include <iostream>
//#include "AdjacencyList.h"
//#include <algorithm>
//using namespace std;
//
//TEST_CASE("Test Case 1"){
//    AdjacencyList graph;
//    graph.insert("a", "b");
//    graph.insert("a", "c");
//    graph.insert("c", "b");
//    graph.insert("c", "e");
//    graph.insert("c", "d");
//    graph.insert("d", "b");
//    graph.insert("d", "f");
//    graph.insert("d", "a");
//    graph.insert("f", "g");
//    graph.insert("f", "a");
//
//    vector<double> expected = {0.01, 0.02, 0.01, 0.01, 0.01, 0.01, 0.00};
//    vector<double> ranks = graph.pageRank(5);
//    REQUIRE(ranks.size() == 7);
//    int i = 0;
//    double difference;
//    for (auto element : ranks)
//    {
//        difference = element - expected[i];
//        REQUIRE(abs(difference) <= 0.005);
//        i++;
//    }
//}
//
//TEST_CASE("Test Case 2"){
//    AdjacencyList graph;
//
//    graph.insert("m", "a");
//    graph.insert("g", "c");
//    graph.insert("e", "h");
//    graph.insert("b", "j");
//    graph.insert("o", "d");
//    graph.insert("i", "f");
//    graph.insert("k", "b");
//    graph.insert("l", "n");
//    graph.insert("h", "e");
//    graph.insert("a", "g");
//    graph.insert("c", "m");
//    graph.insert("d", "i");
//    graph.insert("f", "o");
//    graph.insert("j", "k");
//    graph.insert("n", "l");
//    graph.insert("b", "d");
//    graph.insert("h", "j");
//    graph.insert("e", "c");
//    graph.insert("k", "o");
//    graph.insert("m", "f");
//    graph.insert("a", "i");
//    graph.insert("g", "n");
//    graph.insert("l", "b");
//    graph.insert("o", "h");
//    graph.insert("d", "k");
//    graph.insert("i", "a");
//    graph.insert("j", "e");
//    graph.insert("c", "f");
//    graph.insert("n", "g");
//    graph.insert("f", "l");
//
//    vector<double> expected = {0.05, 0.08, 0.07, 0.07, 0.07, 0.08, 0.06, 0.07, 0.06, 0.07, 0.08, 0.07, 0.03, 0.07, 0.08};
//    vector<double> ranks = graph.pageRank(6);
//    REQUIRE(ranks.size() == expected.size());
//    int i = 0;
//    double difference;
//    for (auto element : ranks)
//    {
//        difference = element - expected[i];
//        REQUIRE(abs(difference) <= 0.00501);
//        i++;
//    }
//}
//
//// 125 edges
//TEST_CASE("Test Case 3"){
//    //bigger test
//    AdjacencyList graph;
//
//    graph.insert("apple", "banana");
//    graph.insert("cherry", "date");
//    graph.insert("elephant", "fox");
//    graph.insert("grape", "honey");
//    graph.insert("iguana", "jaguar");
//    graph.insert("kite", "lemon");
//    graph.insert("mango", "nectar");
//    graph.insert("octopus", "peach");
//    graph.insert("quail", "rabbit");
//    graph.insert("sunflower", "tiger");
//    graph.insert("umbrella", "violet");
//    graph.insert("walrus", "xenon");
//    graph.insert("yacht", "zebra");
//    graph.insert("almond", "bamboo");
//    graph.insert("cactus", "dolphin");
//    graph.insert("eagle", "flamingo");
//    graph.insert("gorilla", "hedgehog");
//    graph.insert("ink", "jelly");
//    graph.insert("kangaroo", "lotus");
//    graph.insert("maple", "nebula");
//    graph.insert("owl", "panda");
//    graph.insert("quartz", "rose");
//    graph.insert("saffron", "tulip");
//    graph.insert("uranium", "volcano");
//    graph.insert("watermelon", "xylophone");
//    graph.insert("yam", "zucchini");
//    graph.insert("apricot", "butterfly");
//    graph.insert("coyote", "dragonfly");
//    graph.insert("elm", "falcon");
//    graph.insert("gold", "hibiscus");
//    graph.insert("ice", "jade");
//    graph.insert("koala", "lilac");
//    graph.insert("moose", "nightingale");
//    graph.insert("opal", "penguin");
//    graph.insert("quiver", "raven");
//    graph.insert("sea", "thorn");
//    graph.insert("unicorn", "vulture");
//    graph.insert("whale", "xerox");
//    graph.insert("yeti", "zephyr");
//    graph.insert("ash", "blossom");
//    graph.insert("cranberry", "dune");
//    graph.insert("elm", "fig");
//    graph.insert("ginkgo", "hyacinth");
//    graph.insert("iris", "juniper");
//    graph.insert("kelp", "lichen");
//    graph.insert("moss", "nectarine");
//    graph.insert("oasis", "plum");
//    graph.insert("quasar", "reef");
//    graph.insert("sandal", "treetop");
//    graph.insert("apple", "cactus");
//    graph.insert("butterfly", "walrus");
//    graph.insert("date", "honey");
//    graph.insert("iguana", "rose");
//    graph.insert("nectar", "umbrella");
//    graph.insert("grape", "falcon");
//    graph.insert("mango", "koala");
//    graph.insert("jaguar", "panda");
//    graph.insert("kite", "quartz");
//    graph.insert("walrus", "violet");
//    graph.insert("elephant", "yam");
//    graph.insert("owl", "sunflower");
//    graph.insert("rabbit", "ink");
//    graph.insert("quail", "maple");
//    graph.insert("gold", "flamingo");
//    graph.insert("hedgehog", "peach");
//    graph.insert("xenon", "kite");
//    graph.insert("tiger", "sea");
//    graph.insert("jelly", "bamboo");
//    graph.insert("ice", "eagle");
//    graph.insert("nightingale", "dolphin");
//    graph.insert("lotus", "coyote");
//    graph.insert("lotus", "plum");
//    graph.insert("fig", "dune");
//    graph.insert("ginkgo", "jaguar");
//    graph.insert("yeti", "opal");
//    graph.insert("nectar", "apricot");
//    graph.insert("honey", "zephyr");
//    graph.insert("dragonfly", "ash");
//    graph.insert("kite", "grape");
//    graph.insert("zebra", "oasis");
//    graph.insert("lotus", "kelp");
//    graph.insert("whale", "ice");
//    graph.insert("xylophone", "thorn");
//    graph.insert("tulip", "moss");
//    graph.insert("jelly", "hyacinth");
//    graph.insert("iris", "rose");
//    graph.insert("elm", "maple");
//    graph.insert("nectar", "juniper");
//    graph.insert("gold", "blossom");
//    graph.insert("opal", "panda");
//    graph.insert("violet", "falcon");
//    graph.insert("saffron", "quiver");
//    graph.insert("raven", "cranberry");
//    graph.insert("hyacinth", "lotus");
//    graph.insert("treetop", "mango");
//    graph.insert("jaguar", "penguin");
//    graph.insert("falcon", "kite");
//    graph.insert("bamboo", "ginkgo");
//    graph.insert("cactus", "jelly");
//    graph.insert("moose", "plum");
//    graph.insert("xenon", "dragonfly");
//    graph.insert("walrus", "tiger");
//    graph.insert("ice", "panda");
//    graph.insert("apricot", "iris");
//    graph.insert("thorn", "blossom");
//    graph.insert("juniper", "sea");
//    graph.insert("koala", "opal");
//    graph.insert("fig", "rabbit");
//    graph.insert("hedgehog", "sunflower");
//    graph.insert("ash", "xenon");
//    graph.insert("butterfly", "jelly");
//    graph.insert("mango", "lotus");
//    graph.insert("kelp", "saffron");
//    graph.insert("hyacinth", "iris");
//    graph.insert("maple", "nectarine");
//    graph.insert("yam", "falcon");
//    graph.insert("penguin", "rose");
//    graph.insert("eagle", "ink");
//    graph.insert("coyote", "nightingale");
//    graph.insert("opal", "quiver");
//    graph.insert("reef", "gold");
//    graph.insert("dune", "bamboo");
//    graph.insert("tulip", "juniper");
//    graph.insert("jaguar", "whale");
//    graph.insert("xerox", "blossom");
//
//    vector<double> expected = {0.00, 0.00, 0.00, 0.01, 0.03, 0.00, 0.03, 0.00, 0.00, 0.00, 0.01, 0.01, 0.00, 0.01, 0.01,
//                               0.01, 0.00, 0.00, 0.00, 0.02, 0.00, 0.01, 0.00, 0.03, 0.01, 0.00, 0.01, 0.00, 0.00, 0.01,
//                               0.02, 0.00, 0.00, 0.01, 0.01, 0.00, 0.01, 0.02, 0.01, 0.00, 0.01, 0.03, 0.00, 0.01, 0.00,
//                               0.00, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.01, 0.00, 0.01, 0.00, 0.00, 0.00, 0.01,
//                               0.01, 0.01, 0.02, 0.00, 0.01, 0.00, 0.01, 0.00, 0.01, 0.00, 0.02, 0.00, 0.00, 0.03, 0.01,
//                               0.03, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.01, 0.00,
//                               0.00, 0.00, 0.00, 0.00, 0.00, 0.02, 0.00};
//
//
//    vector<double> ranks = graph.pageRank(3);
//    REQUIRE(ranks.size() == expected.size());
//    int i = 0;
//    double difference;
//    for (auto element : ranks)
//    {
//        difference = element - expected[i];
//        REQUIRE(abs(difference) <= 0.005);
//        i++;
//    }
//}
//
//// large power iterations value
//TEST_CASE("Test Case 4"){
//    AdjacencyList graph;
//
//    graph.insert("m", "a");
//    graph.insert("g", "c");
//    graph.insert("e", "h");
//    graph.insert("b", "j");
//    graph.insert("o", "d");
//    graph.insert("i", "f");
//    graph.insert("k", "b");
//    graph.insert("l", "n");
//    graph.insert("h", "e");
//    graph.insert("a", "g");
//    graph.insert("c", "m");
//    graph.insert("d", "i");
//    graph.insert("f", "o");
//    graph.insert("j", "k");
//    graph.insert("n", "l");
//    graph.insert("b", "d");
//    graph.insert("h", "j");
//    graph.insert("e", "c");
//    graph.insert("k", "o");
//    graph.insert("m", "f");
//    graph.insert("a", "i");
//    graph.insert("g", "n");
//    graph.insert("l", "b");
//    graph.insert("o", "h");
//    graph.insert("d", "k");
//    graph.insert("i", "a");
//    graph.insert("j", "e");
//    graph.insert("c", "f");
//    graph.insert("n", "g");
//    graph.insert("f", "l");
//
//    vector<double> expected = {0.05, 0.07, 0.07, 0.08, 0.08, 0.08, 0.05, 0.08, 0.06, 0.07, 0.07, 0.07, 0.03, 0.06, 0.08};
//    vector<double> ranks = graph.pageRank(10000);
//    REQUIRE(ranks.size() == expected.size());
//    int i = 0;
//    double difference;
//    for (auto element : ranks)
//    {
//        difference = element - expected[i];
//        REQUIRE(abs(difference) <= 0.00501);
//        i++;
//    }
//}
//
//// base case
//TEST_CASE("Test Case 5"){
//    AdjacencyList graph;
//    graph.insert("a", "b");
//    graph.insert("a", "c");
//    graph.insert("c", "b");
//    graph.insert("c", "e");
//    graph.insert("c", "d");
//    graph.insert("d", "b");
//    graph.insert("d", "f");
//    graph.insert("d", "a");
//    graph.insert("f", "g");
//    graph.insert("f", "a");
//
//    vector<double> expected = {0.14, 0.14, 0.14, 0.14, 0.14, 0.14, 0.14};
//    vector<double> ranks = graph.pageRank(1);
//    REQUIRE(ranks.size() == expected.size());
//    int i = 0;
//    double difference;
//    for (auto element : ranks)
//    {
//        difference = element - expected[i];
//        REQUIRE(abs(difference) <= 0.005);
//        i++;
//    }
//}