#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCatalogItem_t {
    std::string inventoryType;
    int32_t itemId;
    std::optional<std::string> itemInstanceId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCatalogItem_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCatalogItem_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    if(auto it = j.find("itemInstanceId"); it != j.end() !it->is_null())
      v.itemInstanceId = it->get<std::string>();
  }
}
