#ifndef SWAGGER_TYPES_LolRankedStatsRankedTier_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedTier_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolRankedStatsRankedTier {
    // 
    BRONZE = 2,
    // 
    CHALLENGER = 8,
    // 
    DIAMOND = 6,
    // 
    GOLD = 4,
    // 
    MASTER = 7,
    // 
    NOT_RANKED = 0,
    // 
    PLATINUM = 5,
    // 
    PROVISIONAL = 1,
    // 
    SILVER = 3,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedTier& v) {
    switch(v) {
      case LolRankedStatsRankedTier::BRONZE:
        j = "BRONZE";
      break;
      case LolRankedStatsRankedTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LolRankedStatsRankedTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LolRankedStatsRankedTier::GOLD:
        j = "GOLD";
      break;
      case LolRankedStatsRankedTier::MASTER:
        j = "MASTER";
      break;
      case LolRankedStatsRankedTier::NOT_RANKED:
        j = "NOT_RANKED";
      break;
      case LolRankedStatsRankedTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LolRankedStatsRankedTier::PROVISIONAL:
        j = "PROVISIONAL";
      break;
      case LolRankedStatsRankedTier::SILVER:
        j = "SILVER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedTier& v) {
    const auto s& = j.get<std::string>();
    if(s == "BRONZE"){
      v = LolRankedStatsRankedTier::BRONZE;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolRankedStatsRankedTier::CHALLENGER;
      return;
    }
    if(s == "DIAMOND"){
      v = LolRankedStatsRankedTier::DIAMOND;
      return;
    }
    if(s == "GOLD"){
      v = LolRankedStatsRankedTier::GOLD;
      return;
    }
    if(s == "MASTER"){
      v = LolRankedStatsRankedTier::MASTER;
      return;
    }
    if(s == "NOT_RANKED"){
      v = LolRankedStatsRankedTier::NOT_RANKED;
      return;
    }
    if(s == "PLATINUM"){
      v = LolRankedStatsRankedTier::PLATINUM;
      return;
    }
    if(s == "PROVISIONAL"){
      v = LolRankedStatsRankedTier::PROVISIONAL;
      return;
    }
    if(s == "SILVER"){
      v = LolRankedStatsRankedTier::SILVER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedTier_HPP
