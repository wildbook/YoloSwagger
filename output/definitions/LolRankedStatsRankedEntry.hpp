#ifndef SWAGGER_TYPES_LolRankedStatsRankedEntry_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedEntry_HPP
#include <json.hpp>
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
namespace test {
  // 
  struct LolRankedStatsRankedEntry {
'    // 
    int64_t apexDaysUntilDecay;
    // 
    uint64_t division;
    // 
    uint64_t games;
    // 
    bool isApexTier;
    // 
    std::string leagueName;
    // 
    int64_t lp;
    // 
    LolRankedStatsRankedQueue rankedQueue;
    // 
    LolRankedStatsRankedTier rankedTier;
    // 
    uint64_t wins;
  };

  void to_json(nlohmann::json& j, const LolRankedStatsRankedEntry& v) {
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["division"] = v.division;
    j["games"] = v.games;
    j["isApexTier"] = v.isApexTier;
    j["leagueName"] = v.leagueName;
    j["lp"] = v.lp;
    j["rankedQueue"] = v.rankedQueue;
    j["rankedTier"] = v.rankedTier;
    j["wins"] = v.wins;
  }

  void from_json(const nlohmann::json& j, LolRankedStatsRankedEntry& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>;
    v.division = j.at("division").get<uint64_t>;
    v.games = j.at("games").get<uint64_t>;
    v.isApexTier = j.at("isApexTier").get<bool>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.lp = j.at("lp").get<int64_t>;
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>;
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>;
    v.wins = j.at("wins").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedEntry_HPP
