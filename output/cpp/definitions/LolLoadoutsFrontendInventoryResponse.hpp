#ifndef SWAGGER_TYPES_LolLoadoutsFrontendInventoryResponse_HPP
#define SWAGGER_TYPES_LolLoadoutsFrontendInventoryResponse_HPP
#include <json.hpp>
#include "LolLoadoutsItemKey.hpp"
namespace leagueapi {
  // 
  struct LolLoadoutsFrontendInventoryResponse {
    // 
    std::vector<LolLoadoutsItemKey> entitlements;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsFrontendInventoryResponse& v) {
    j["entitlements"] = v.entitlements;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsFrontendInventoryResponse& v) {
    v.entitlements = j.at("entitlements").get<std::vector<LolLoadoutsItemKey>>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsFrontendInventoryResponse_HPP
