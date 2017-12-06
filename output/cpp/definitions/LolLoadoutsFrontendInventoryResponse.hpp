#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsItemKey.hpp"
namespace leagueapi {
  struct LolLoadoutsFrontendInventoryResponse_t {
    std::vector<LolLoadoutsItemKey_t> entitlements;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsFrontendInventoryResponse_t& v) {
    j["entitlements"] = v.entitlements;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsFrontendInventoryResponse_t& v) {
    v.entitlements = j.at("entitlements").get<std::vector<LolLoadoutsItemKey_t>>();
  }
}
