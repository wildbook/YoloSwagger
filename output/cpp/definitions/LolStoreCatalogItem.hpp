#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundled.hpp"
#include "LolStoreSale.hpp"
#include "LolStoreItemKey.hpp"
#include "LolStoreItemCost.hpp"
namespace leagueapi {
  struct LolStoreCatalogItem_t {
    std::optional<std::vector<LolStoreItemKey_t>> itemRequirements;
    std::optional<std::vector<std::string>> tags;
    std::optional<std::string> subInventoryType;
    std::optional<int32_t> maxQuantity;
    std::optional<LolStoreSale_t> sale;
    int32_t itemId;
    std::optional<std::string> inactiveDate;
    std::string inventoryType;
    std::optional<std::string> itemInstanceId;
    std::optional<std::string> releaseDate;
    std::optional<LolStoreBundled_t> bundled;
    std::optional<std::vector<LolStoreItemCost_t>> prices;
    std::optional<bool> active;
  };

  inline void to_json(nlohmann::json& j, const LolStoreCatalogItem_t& v) {
    if(v.itemRequirements)
      j["itemRequirements"] = *v.itemRequirements;
    if(v.tags)
      j["tags"] = *v.tags;
    if(v.subInventoryType)
      j["subInventoryType"] = *v.subInventoryType;
    if(v.maxQuantity)
      j["maxQuantity"] = *v.maxQuantity;
    if(v.sale)
      j["sale"] = *v.sale;
    j["itemId"] = v.itemId;
    if(v.inactiveDate)
      j["inactiveDate"] = *v.inactiveDate;
    j["inventoryType"] = v.inventoryType;
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    if(v.releaseDate)
      j["releaseDate"] = *v.releaseDate;
    if(v.bundled)
      j["bundled"] = *v.bundled;
    if(v.prices)
      j["prices"] = *v.prices;
    if(v.active)
      j["active"] = *v.active;
  }

  inline void from_json(const nlohmann::json& j, LolStoreCatalogItem_t& v) {
    if(auto it = j.find("itemRequirements"); it != j.end() && !it->is_null())
      v.itemRequirements = it->get<std::vector<LolStoreItemKey_t>>();
    if(auto it = j.find("tags"); it != j.end() && !it->is_null())
      v.tags = it->get<std::vector<std::string>>();
    if(auto it = j.find("subInventoryType"); it != j.end() && !it->is_null())
      v.subInventoryType = it->get<std::string>();
    if(auto it = j.find("maxQuantity"); it != j.end() && !it->is_null())
      v.maxQuantity = it->get<int32_t>();
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<LolStoreSale_t>();
    v.itemId = j.at("itemId").get<int32_t>();
    if(auto it = j.find("inactiveDate"); it != j.end() && !it->is_null())
      v.inactiveDate = it->get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::string>();
    if(auto it = j.find("releaseDate"); it != j.end() && !it->is_null())
      v.releaseDate = it->get<std::string>();
    if(auto it = j.find("bundled"); it != j.end() && !it->is_null())
      v.bundled = it->get<LolStoreBundled_t>();
    if(auto it = j.find("prices"); it != j.end() && !it->is_null())
      v.prices = it->get<std::vector<LolStoreItemCost_t>>();
    if(auto it = j.find("active"); it != j.end() && !it->is_null())
      v.active = it->get<bool>();
  }
  inline std::string to_string(const LolStoreCatalogItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
