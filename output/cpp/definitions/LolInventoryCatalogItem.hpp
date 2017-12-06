#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCatalogItem_t {
    std::optional<std::string> itemInstanceId;
    int32_t itemId;
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCatalogItem_t& v) {
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCatalogItem_t& v) {
    if(auto it = j.find("itemInstanceId"); it != j.end() !it->is_null())
      v.itemInstanceId = it->get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
  }
}
