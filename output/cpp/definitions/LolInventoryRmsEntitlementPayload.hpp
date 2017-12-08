#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryRmsEntitlementPayload_t {
    std::string itemTypeId;
    std::string itemId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryRmsEntitlementPayload_t& v) {
    j["itemTypeId"] = v.itemTypeId;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryRmsEntitlementPayload_t& v) {
    v.itemTypeId = j.at("itemTypeId").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
  }
  inline std::string to_string(const LolInventoryRmsEntitlementPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
