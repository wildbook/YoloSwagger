#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemKey_t {
    std::string inventoryType;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemKey_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemKey_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
}
