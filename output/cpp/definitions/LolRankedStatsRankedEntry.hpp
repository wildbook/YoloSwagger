#ifndef SWAGGER_TYPES_LolRankedStatsRankedEntry_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedEntry_HPP
#include <json.hpp>
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
namespace leagueapi {
  // 
  struct LolRankedStatsRankedEntry {
    // 
    uint64_t division;
    // 
    int64_t apexDaysUntilDecay;
    // 
    bool isApexTier;
    // 
    LolRankedStatsRankedTier rankedTier;
    // 
    uint64_t games;
    // 
    int64_t lp;
    // 
    uint64_t wins;
    // 
    std::string leagueName;
    // 
    LolRankedStatsRankedQueue rankedQueue;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedEntry& v) {
    j["division"] = v.division;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["isApexTier"] = v.isApexTier;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
    j["lp"] = v.lp;
    j["wins"] = v.wins;
    j["leagueName"] = v.leagueName;
    j["rankedQueue"] = v.rankedQueue;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedEntry& v) {
    v.division = j.at("division").get<uint64_t>;
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>;
    v.isApexTier = j.at("isApexTier").get<bool>;
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>;
    v.games = j.at("games").get<uint64_t>;
    v.lp = j.at("lp").get<int64_t>;
    v.wins = j.at("wins").get<uint64_t>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedEntry_HPP
