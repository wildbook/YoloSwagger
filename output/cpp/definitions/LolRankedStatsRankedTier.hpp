#ifndef SWAGGER_TYPES_LolRankedStatsRankedTier_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedTier_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolRankedStatsRankedTier {
    // 
    PLATINUM = 5,
    // 
    DIAMOND = 6,
    // 
    NOT_RANKED = 0,
    // 
    GOLD = 4,
    // 
    SILVER = 3,
    // 
    CHALLENGER = 8,
    // 
    MASTER = 7,
    // 
    PROVISIONAL = 1,
    // 
    BRONZE = 2,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedTier& v) {
    switch(v) {
      case LolRankedStatsRankedTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LolRankedStatsRankedTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LolRankedStatsRankedTier::NOT_RANKED:
        j = "NOT_RANKED";
      break;
      case LolRankedStatsRankedTier::GOLD:
        j = "GOLD";
      break;
      case LolRankedStatsRankedTier::SILVER:
        j = "SILVER";
      break;
      case LolRankedStatsRankedTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LolRankedStatsRankedTier::MASTER:
        j = "MASTER";
      break;
      case LolRankedStatsRankedTier::PROVISIONAL:
        j = "PROVISIONAL";
      break;
      case LolRankedStatsRankedTier::BRONZE:
        j = "BRONZE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedTier& v) {
    const auto& s = j.get<std::string>();
    if(s == "PLATINUM"){
      v = LolRankedStatsRankedTier::PLATINUM;
      return;
    }
    if(s == "DIAMOND"){
      v = LolRankedStatsRankedTier::DIAMOND;
      return;
    }
    if(s == "NOT_RANKED"){
      v = LolRankedStatsRankedTier::NOT_RANKED;
      return;
    }
    if(s == "GOLD"){
      v = LolRankedStatsRankedTier::GOLD;
      return;
    }
    if(s == "SILVER"){
      v = LolRankedStatsRankedTier::SILVER;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolRankedStatsRankedTier::CHALLENGER;
      return;
    }
    if(s == "MASTER"){
      v = LolRankedStatsRankedTier::MASTER;
      return;
    }
    if(s == "PROVISIONAL"){
      v = LolRankedStatsRankedTier::PROVISIONAL;
      return;
    }
    if(s == "BRONZE"){
      v = LolRankedStatsRankedTier::BRONZE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedTier_HPP
