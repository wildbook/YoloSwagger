#ifndef SWAGGER_TYPES_LolBannersInventoryItemsByType_HPP
#define SWAGGER_TYPES_LolBannersInventoryItemsByType_HPP
#include <json.hpp>
#include "LolBannersTournamentFlagInventoryItem.hpp"
namespace leagueapi {
  // 
  struct LolBannersInventoryItemsByType {
    // 
    std::vector<LolBannersTournamentFlagInventoryItem> TOURNAMENT_FLAG;
  };

  void to_json(nlohmann::json& j, const LolBannersInventoryItemsByType& v) {
    j["TOURNAMENT_FLAG"] = v.TOURNAMENT_FLAG;
  }

  void from_json(const nlohmann::json& j, LolBannersInventoryItemsByType& v) {
    v.TOURNAMENT_FLAG = j.at("TOURNAMENT_FLAG").get<std::vector<LolBannersTournamentFlagInventoryItem>>;
  }

}
#endif // SWAGGER_TYPES_LolBannersInventoryItemsByType_HPP
