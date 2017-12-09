#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedQueue.hpp"
#include "LolChatChatRankedTier.hpp"
namespace leagueapi {
  struct LolChatChatRankedEntry_t {
    uint64_t games;
    uint64_t division;
    LolChatChatRankedQueue_t rankedQueue;
    std::string leagueName;
    LolChatChatRankedTier_t rankedTier;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry_t& v) {
    j["games"] = v.games;
    j["division"] = v.division;
    j["rankedQueue"] = v.rankedQueue;
    j["leagueName"] = v.leagueName;
    j["rankedTier"] = v.rankedTier;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry_t& v) {
    v.games = j.at("games").get<uint64_t>();
    v.division = j.at("division").get<uint64_t>();
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier_t>();
    v.wins = j.at("wins").get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
