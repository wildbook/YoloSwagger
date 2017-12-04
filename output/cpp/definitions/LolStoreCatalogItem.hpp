#ifndef SWAGGER_TYPES_LolStoreCatalogItem_HPP
#define SWAGGER_TYPES_LolStoreCatalogItem_HPP
#include <json.hpp>
#include "LolStoreItemCost.hpp"
#include "LolStoreSale.hpp"
#include "LolStoreBundled.hpp"
#include "LolStoreItemKey.hpp"
namespace leagueapi {
  // 
  struct LolStoreCatalogItem {
    // 
    int32_t itemId;
    // 
    std::string inactiveDate;
    // 
    std::string itemInstanceId;
    // 
    std::vector<std::string> tags;
    // 
    std::vector<LolStoreItemKey> itemRequirements;
    // 
    LolStoreSale sale;
    // 
    std::string releaseDate;
    // 
    std::vector<LolStoreItemCost> prices;
    // 
    std::string subInventoryType;
    // 
    int32_t maxQuantity;
    // 
    bool active;
    // 
    std::string inventoryType;
    // 
    LolStoreBundled bundled;
  };

  inline void to_json(nlohmann::json& j, const LolStoreCatalogItem& v) {
    j["itemId"] = v.itemId;
    j["inactiveDate"] = v.inactiveDate;
    j["itemInstanceId"] = v.itemInstanceId;
    j["tags"] = v.tags;
    j["itemRequirements"] = v.itemRequirements;
    j["sale"] = v.sale;
    j["releaseDate"] = v.releaseDate;
    j["prices"] = v.prices;
    j["subInventoryType"] = v.subInventoryType;
    j["maxQuantity"] = v.maxQuantity;
    j["active"] = v.active;
    j["inventoryType"] = v.inventoryType;
    j["bundled"] = v.bundled;
  }

  inline void from_json(const nlohmann::json& j, LolStoreCatalogItem& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.inactiveDate = j.at("inactiveDate").get<std::string>;
    v.itemInstanceId = j.at("itemInstanceId").get<std::string>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.itemRequirements = j.at("itemRequirements").get<std::vector<LolStoreItemKey>>;
    v.sale = j.at("sale").get<LolStoreSale>;
    v.releaseDate = j.at("releaseDate").get<std::string>;
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>;
    v.subInventoryType = j.at("subInventoryType").get<std::string>;
    v.maxQuantity = j.at("maxQuantity").get<int32_t>;
    v.active = j.at("active").get<bool>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.bundled = j.at("bundled").get<LolStoreBundled>;
  }

}
#endif // SWAGGER_TYPES_LolStoreCatalogItem_HPP
