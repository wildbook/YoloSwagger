#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedTier.hpp"
#include "LolChatChatRankedQueue.hpp"
namespace leagueapi {
  struct LolChatChatRankedEntry_t {
    uint64_t division;
    uint64_t games;
    std::string leagueName;
    LolChatChatRankedQueue_t rankedQueue;
    LolChatChatRankedTier_t rankedTier;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry_t& v) {
    j["division"] = v.division;
    j["games"] = v.games;
    j["leagueName"] = v.leagueName;
    j["rankedQueue"] = v.rankedQueue;
    j["rankedTier"] = v.rankedTier;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry_t& v) {
    v.division = j.at("division").get<uint64_t>();
    v.games = j.at("games").get<uint64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue_t>();
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier_t>();
    v.wins = j.at("wins").get<uint64_t>();
  }
}
