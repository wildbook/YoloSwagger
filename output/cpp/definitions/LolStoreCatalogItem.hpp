#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemCost.hpp"
#include "LolStoreItemKey.hpp"
#include "LolStoreBundled.hpp"
#include "LolStoreSale.hpp"
namespace leagueapi {
  struct LolStoreCatalogItem_t {
    std::optional<std::vector<std::string>> tags;
    int32_t itemId;
    std::string inventoryType;
    std::optional<bool> active;
    std::optional<LolStoreSale_t> sale;
    std::optional<std::string> itemInstanceId;
    std::optional<std::string> inactiveDate;
    std::optional<std::vector<LolStoreItemCost_t>> prices;
    std::optional<std::vector<LolStoreItemKey_t>> itemRequirements;
    std::optional<std::string> subInventoryType;
    std::optional<std::string> releaseDate;
    std::optional<int32_t> maxQuantity;
    std::optional<LolStoreBundled_t> bundled;
  };

  inline void to_json(nlohmann::json& j, const LolStoreCatalogItem_t& v) {
    if(v.tags)
      j["tags"] = *v.tags;
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    if(v.active)
      j["active"] = *v.active;
    if(v.sale)
      j["sale"] = *v.sale;
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    if(v.inactiveDate)
      j["inactiveDate"] = *v.inactiveDate;
    if(v.prices)
      j["prices"] = *v.prices;
    if(v.itemRequirements)
      j["itemRequirements"] = *v.itemRequirements;
    if(v.subInventoryType)
      j["subInventoryType"] = *v.subInventoryType;
    if(v.releaseDate)
      j["releaseDate"] = *v.releaseDate;
    if(v.maxQuantity)
      j["maxQuantity"] = *v.maxQuantity;
    if(v.bundled)
      j["bundled"] = *v.bundled;
  }

  inline void from_json(const nlohmann::json& j, LolStoreCatalogItem_t& v) {
    if(auto it = j.find("tags"); it != j.end() && !it->is_null())
      v.tags = it->get<std::vector<std::string>>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    if(auto it = j.find("active"); it != j.end() && !it->is_null())
      v.active = it->get<bool>();
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<LolStoreSale_t>();
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::string>();
    if(auto it = j.find("inactiveDate"); it != j.end() && !it->is_null())
      v.inactiveDate = it->get<std::string>();
    if(auto it = j.find("prices"); it != j.end() && !it->is_null())
      v.prices = it->get<std::vector<LolStoreItemCost_t>>();
    if(auto it = j.find("itemRequirements"); it != j.end() && !it->is_null())
      v.itemRequirements = it->get<std::vector<LolStoreItemKey_t>>();
    if(auto it = j.find("subInventoryType"); it != j.end() && !it->is_null())
      v.subInventoryType = it->get<std::string>();
    if(auto it = j.find("releaseDate"); it != j.end() && !it->is_null())
      v.releaseDate = it->get<std::string>();
    if(auto it = j.find("maxQuantity"); it != j.end() && !it->is_null())
      v.maxQuantity = it->get<int32_t>();
    if(auto it = j.find("bundled"); it != j.end() && !it->is_null())
      v.bundled = it->get<LolStoreBundled_t>();
  }
  inline std::string to_string(const LolStoreCatalogItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
