#ifndef SWAGGER_TYPES_LolChatChatRankedEntry_HPP
#define SWAGGER_TYPES_LolChatChatRankedEntry_HPP
#include <json.hpp>
#include "LolChatChatRankedQueue.hpp"
#include "LolChatChatRankedTier.hpp"
namespace leagueapi {
  // 
  struct LolChatChatRankedEntry {
    // 
    uint64_t division;
    // 
    uint64_t wins;
    // 
    LolChatChatRankedTier rankedTier;
    // 
    uint64_t games;
    // 
    std::string leagueName;
    // 
    LolChatChatRankedQueue rankedQueue;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry& v) {
    j["division"] = v.division;
    j["wins"] = v.wins;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
    j["leagueName"] = v.leagueName;
    j["rankedQueue"] = v.rankedQueue;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry& v) {
    v.division = j.at("division").get<uint64_t>;
    v.wins = j.at("wins").get<uint64_t>;
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>;
    v.games = j.at("games").get<uint64_t>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedEntry_HPP
