#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryRmsEntitlementPayload_t {
    std::string_t itemId;
    std::string_t itemTypeId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryRmsEntitlementPayload_t& v) {
    j["itemId"] = v.itemId;
    j["itemTypeId"] = v.itemTypeId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryRmsEntitlementPayload_t& v) {
    v.itemId = j.at("itemId").get<std::string_t>();
    v.itemTypeId = j.at("itemTypeId").get<std::string_t>();
  }
  inline std::string to_string(const LolInventoryRmsEntitlementPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
