#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCatalogItem_t {
    std::optional<std::string> itemInstanceId;
    std::string inventoryType;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCatalogItem_t& v) {
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCatalogItem_t& v) {
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
  inline std::string to_string(const LolInventoryCatalogItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
