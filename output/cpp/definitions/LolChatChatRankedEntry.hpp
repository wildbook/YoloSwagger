#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedQueue.hpp"
#include "LolChatChatRankedTier.hpp"
namespace leagueapi {
  struct LolChatChatRankedEntry_t {
    LolChatChatRankedQueue_t rankedQueue;
    LolChatChatRankedTier_t rankedTier;
    uint64_t games;
    std::string leagueName;
    uint64_t wins;
    uint64_t division;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry_t& v) {
    j["rankedQueue"] = v.rankedQueue;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
    j["leagueName"] = v.leagueName;
    j["wins"] = v.wins;
    j["division"] = v.division;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry_t& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue_t>();
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier_t>();
    v.games = j.at("games").get<uint64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.division = j.at("division").get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
