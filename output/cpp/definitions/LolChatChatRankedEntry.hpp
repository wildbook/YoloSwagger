#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedQueue.hpp"
#include "LolChatChatRankedTier.hpp"
namespace leagueapi {
  struct LolChatChatRankedEntry_t {
    LolChatChatRankedQueue_t rankedQueue;
    uint64_t wins;
    std::string leagueName;
    uint64_t division;
    LolChatChatRankedTier_t rankedTier;
    uint64_t games;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry_t& v) {
    j["rankedQueue"] = v.rankedQueue;
    j["wins"] = v.wins;
    j["leagueName"] = v.leagueName;
    j["division"] = v.division;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry_t& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.division = j.at("division").get<uint64_t>();
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier_t>();
    v.games = j.at("games").get<uint64_t>();
  }
}
