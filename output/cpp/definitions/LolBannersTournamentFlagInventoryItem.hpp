#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersCapClashFlagEntitlementPayload.hpp"
namespace leagueapi {
  struct LolBannersTournamentFlagInventoryItem_t {
    std::string purchaseDate;
    LolBannersCapClashFlagEntitlementPayload_t payload;
  };

  inline void to_json(nlohmann::json& j, const LolBannersTournamentFlagInventoryItem_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolBannersTournamentFlagInventoryItem_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload_t>();
  }
  inline std::string to_string(const LolBannersTournamentFlagInventoryItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
