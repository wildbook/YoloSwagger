#ifndef SWAGGER_TYPES_LolBannersTournamentFlagInventoryItem_HPP
#define SWAGGER_TYPES_LolBannersTournamentFlagInventoryItem_HPP
#include <json.hpp>
#include "LolBannersCapClashFlagEntitlementPayload.hpp"
namespace leagueapi {
  // 
  struct LolBannersTournamentFlagInventoryItem {
    // 
    std::string purchaseDate;
    // 
    LolBannersCapClashFlagEntitlementPayload payload;
  };

  inline void to_json(nlohmann::json& j, const LolBannersTournamentFlagInventoryItem& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolBannersTournamentFlagInventoryItem& v) {
    v.purchaseDate = j.at("purchaseDate").get<std::string>;
    v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload>;
  }

}
#endif // SWAGGER_TYPES_LolBannersTournamentFlagInventoryItem_HPP
