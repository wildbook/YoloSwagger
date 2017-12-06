#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryRmsEntitlementPayload_t {
    std::string itemId;
    std::string itemTypeId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryRmsEntitlementPayload_t& v) {
    j["itemId"] = v.itemId;
    j["itemTypeId"] = v.itemTypeId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryRmsEntitlementPayload_t& v) {
    v.itemId = j.at("itemId").get<std::string>();
    v.itemTypeId = j.at("itemTypeId").get<std::string>();
  }
}
