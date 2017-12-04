#ifndef SWAGGER_TYPES_LolChatChatRankedEntry_HPP
#define SWAGGER_TYPES_LolChatChatRankedEntry_HPP
#include <json.hpp>
#include "LolChatChatRankedTier.hpp"
#include "LolChatChatRankedQueue.hpp"
namespace test {
  // 
  struct LolChatChatRankedEntry {
'    // 
    uint64_t division;
    // 
    uint64_t games;
    // 
    std::string leagueName;
    // 
    LolChatChatRankedQueue rankedQueue;
    // 
    LolChatChatRankedTier rankedTier;
    // 
    uint64_t wins;
  };

  void to_json(nlohmann::json& j, const LolChatChatRankedEntry& v) {
    j["division"] = v.division;
    j["games"] = v.games;
    j["leagueName"] = v.leagueName;
    j["rankedQueue"] = v.rankedQueue;
    j["rankedTier"] = v.rankedTier;
    j["wins"] = v.wins;
  }

  void from_json(const nlohmann::json& j, LolChatChatRankedEntry& v) {
    v.division = j.at("division").get<uint64_t>;
    v.games = j.at("games").get<uint64_t>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>;
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>;
    v.wins = j.at("wins").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedEntry_HPP
