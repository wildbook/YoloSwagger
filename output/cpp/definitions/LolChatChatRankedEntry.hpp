#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedTier.hpp"
#include "LolChatChatRankedQueue.hpp"
namespace leagueapi {
  struct LolChatChatRankedEntry_t {
    std::string leagueName;
    LolChatChatRankedTier_t rankedTier;
    LolChatChatRankedQueue_t rankedQueue;
    uint64_t games;
    uint64_t wins;
    uint64_t division;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry_t& v) {
    j["leagueName"] = v.leagueName;
    j["rankedTier"] = v.rankedTier;
    j["rankedQueue"] = v.rankedQueue;
    j["games"] = v.games;
    j["wins"] = v.wins;
    j["division"] = v.division;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry_t& v) {
    v.leagueName = j.at("leagueName").get<std::string>();
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier_t>();
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue_t>();
    v.games = j.at("games").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.division = j.at("division").get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
