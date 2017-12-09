#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedTier.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace leagueapi {
  struct LolRankedStatsRankedEntry_t {
    LolRankedStatsRankedQueue_t rankedQueue;
    LolRankedStatsRankedTier_t rankedTier;
    uint64_t games;
    bool isApexTier;
    std::string leagueName;
    int64_t lp;
    uint64_t wins;
    uint64_t division;
    int64_t apexDaysUntilDecay;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedEntry_t& v) {
    j["rankedQueue"] = v.rankedQueue;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
    j["isApexTier"] = v.isApexTier;
    j["leagueName"] = v.leagueName;
    j["lp"] = v.lp;
    j["wins"] = v.wins;
    j["division"] = v.division;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedEntry_t& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue_t>();
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier_t>();
    v.games = j.at("games").get<uint64_t>();
    v.isApexTier = j.at("isApexTier").get<bool>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.lp = j.at("lp").get<int64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.division = j.at("division").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
  }
  inline std::string to_string(const LolRankedStatsRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
