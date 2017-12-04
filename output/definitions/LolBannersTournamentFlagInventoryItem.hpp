#ifndef SWAGGER_TYPES_LolBannersTournamentFlagInventoryItem_HPP
#define SWAGGER_TYPES_LolBannersTournamentFlagInventoryItem_HPP
#include <json.hpp>
#include "LolBannersCapClashFlagEntitlementPayload.hpp"
namespace leagueapi {
  // 
  struct LolBannersTournamentFlagInventoryItem {
    // 
    LolBannersCapClashFlagEntitlementPayload payload;
    // 
    std::string purchaseDate;
  };

  void to_json(nlohmann::json& j, const LolBannersTournamentFlagInventoryItem& v) {
    j["payload"] = v.payload;
    j["purchaseDate"] = v.purchaseDate;
  }

  void from_json(const nlohmann::json& j, LolBannersTournamentFlagInventoryItem& v) {
    v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload>;
    v.purchaseDate = j.at("purchaseDate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolBannersTournamentFlagInventoryItem_HPP
