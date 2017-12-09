#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedTier.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace leagueapi {
  struct LolRankedStatsRankedEntry_t {
    uint64_t games;
    bool isApexTier;
    uint64_t division;
    LolRankedStatsRankedQueue_t rankedQueue;
    int64_t lp;
    std::string leagueName;
    uint64_t wins;
    LolRankedStatsRankedTier_t rankedTier;
    int64_t apexDaysUntilDecay;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedEntry_t& v) {
    j["games"] = v.games;
    j["isApexTier"] = v.isApexTier;
    j["division"] = v.division;
    j["rankedQueue"] = v.rankedQueue;
    j["lp"] = v.lp;
    j["leagueName"] = v.leagueName;
    j["wins"] = v.wins;
    j["rankedTier"] = v.rankedTier;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedEntry_t& v) {
    v.games = j.at("games").get<uint64_t>();
    v.isApexTier = j.at("isApexTier").get<bool>();
    v.division = j.at("division").get<uint64_t>();
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue_t>();
    v.lp = j.at("lp").get<int64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
  }
  inline std::string to_string(const LolRankedStatsRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
