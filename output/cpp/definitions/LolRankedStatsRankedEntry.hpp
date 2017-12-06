#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
namespace leagueapi {
  struct LolRankedStatsRankedEntry_t {
    LolRankedStatsRankedQueue_t rankedQueue;
    int64_t lp;
    uint64_t wins;
    bool isApexTier;
    std::string leagueName;
    uint64_t division;
    int64_t apexDaysUntilDecay;
    LolRankedStatsRankedTier_t rankedTier;
    uint64_t games;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedEntry_t& v) {
    j["rankedQueue"] = v.rankedQueue;
    j["lp"] = v.lp;
    j["wins"] = v.wins;
    j["isApexTier"] = v.isApexTier;
    j["leagueName"] = v.leagueName;
    j["division"] = v.division;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedEntry_t& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue_t>();
    v.lp = j.at("lp").get<int64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.isApexTier = j.at("isApexTier").get<bool>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.division = j.at("division").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier_t>();
    v.games = j.at("games").get<uint64_t>();
  }
}
