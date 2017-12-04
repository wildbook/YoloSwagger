#ifndef SWAGGER_TYPES_LolStoreBundledItem_HPP
#define SWAGGER_TYPES_LolStoreBundledItem_HPP
#include <json.hpp>
#include "LolStoreBundledItemCost.hpp"
namespace leagueapi {
  // 
  struct LolStoreBundledItem {
    // 
    int32_t itemId;
    // 
    std::vector<LolStoreBundledItemCost> discountPrices;
    // 
    uint32_t quantity;
    // 
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItem& v) {
    j["itemId"] = v.itemId;
    j["discountPrices"] = v.discountPrices;
    j["quantity"] = v.quantity;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItem& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost>>;
    v.quantity = j.at("quantity").get<uint32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreBundledItem_HPP
