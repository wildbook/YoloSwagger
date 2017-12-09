#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersCapClashFlagEntitlementPayload.hpp"
namespace leagueapi {
  struct LolBannersTournamentFlagInventoryItem_t {
    LolBannersCapClashFlagEntitlementPayload_t payload;
    std::string purchaseDate;
  };

  inline void to_json(nlohmann::json& j, const LolBannersTournamentFlagInventoryItem_t& v) {
    j["payload"] = v.payload;
    j["purchaseDate"] = v.purchaseDate;
  }

  inline void from_json(const nlohmann::json& j, LolBannersTournamentFlagInventoryItem_t& v) {
    v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload_t>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
  }
  inline std::string to_string(const LolBannersTournamentFlagInventoryItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
