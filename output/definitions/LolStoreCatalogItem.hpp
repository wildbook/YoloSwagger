#ifndef SWAGGER_TYPES_LolStoreCatalogItem_HPP
#define SWAGGER_TYPES_LolStoreCatalogItem_HPP
#include <json.hpp>
#include "LolStoreItemKey.hpp"
#include "LolStoreItemCost.hpp"
#include "LolStoreSale.hpp"
#include "LolStoreBundled.hpp"
namespace leagueapi {
  // 
  struct LolStoreCatalogItem {
    // 
    bool active;
    // 
    LolStoreBundled bundled;
    // 
    std::string inactiveDate;
    // 
    std::string inventoryType;
    // 
    int32_t itemId;
    // 
    std::string itemInstanceId;
    // 
    std::vector<LolStoreItemKey> itemRequirements;
    // 
    int32_t maxQuantity;
    // 
    std::vector<LolStoreItemCost> prices;
    // 
    std::string releaseDate;
    // 
    LolStoreSale sale;
    // 
    std::string subInventoryType;
    // 
    std::vector<std::string> tags;
  };

  void to_json(nlohmann::json& j, const LolStoreCatalogItem& v) {
    j["active"] = v.active;
    j["bundled"] = v.bundled;
    j["inactiveDate"] = v.inactiveDate;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["itemInstanceId"] = v.itemInstanceId;
    j["itemRequirements"] = v.itemRequirements;
    j["maxQuantity"] = v.maxQuantity;
    j["prices"] = v.prices;
    j["releaseDate"] = v.releaseDate;
    j["sale"] = v.sale;
    j["subInventoryType"] = v.subInventoryType;
    j["tags"] = v.tags;
  }

  void from_json(const nlohmann::json& j, LolStoreCatalogItem& v) {
    v.active = j.at("active").get<bool>;
    v.bundled = j.at("bundled").get<LolStoreBundled>;
    v.inactiveDate = j.at("inactiveDate").get<std::string>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.itemInstanceId = j.at("itemInstanceId").get<std::string>;
    v.itemRequirements = j.at("itemRequirements").get<std::vector<LolStoreItemKey>>;
    v.maxQuantity = j.at("maxQuantity").get<int32_t>;
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>;
    v.releaseDate = j.at("releaseDate").get<std::string>;
    v.sale = j.at("sale").get<LolStoreSale>;
    v.subInventoryType = j.at("subInventoryType").get<std::string>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolStoreCatalogItem_HPP
