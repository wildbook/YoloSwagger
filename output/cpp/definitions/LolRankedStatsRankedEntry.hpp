#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedTier.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace leagueapi {
  struct LolRankedStatsRankedEntry_t {
    LolRankedStatsRankedQueue_t rankedQueue;
    int64_t apexDaysUntilDecay;
    uint64_t division;
    bool isApexTier;
    std::string leagueName;
    uint64_t wins;
    int64_t lp;
    LolRankedStatsRankedTier_t rankedTier;
    uint64_t games;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedEntry_t& v) {
    j["rankedQueue"] = v.rankedQueue;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["division"] = v.division;
    j["isApexTier"] = v.isApexTier;
    j["leagueName"] = v.leagueName;
    j["wins"] = v.wins;
    j["lp"] = v.lp;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedEntry_t& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.division = j.at("division").get<uint64_t>();
    v.isApexTier = j.at("isApexTier").get<bool>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.lp = j.at("lp").get<int64_t>();
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier_t>();
    v.games = j.at("games").get<uint64_t>();
  }
  inline std::string to_string(const LolRankedStatsRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
