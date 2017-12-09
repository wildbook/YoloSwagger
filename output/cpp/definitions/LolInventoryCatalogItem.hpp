#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCatalogItem_t {
    int32_t itemId;
    std::string inventoryType;
    std::optional<std::string> itemInstanceId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCatalogItem_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCatalogItem_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::string>();
  }
  inline std::string to_string(const LolInventoryCatalogItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
