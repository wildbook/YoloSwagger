#ifndef SWAGGER_TYPES_LolStoreBundledItem_HPP
#define SWAGGER_TYPES_LolStoreBundledItem_HPP
#include <json.hpp>
#include "LolStoreBundledItemCost.hpp"
namespace test {
  // 
  struct LolStoreBundledItem {
'    // 
    std::vector<LolStoreBundledItemCost> discountPrices;
    // 
    std::string inventoryType;
    // 
    int32_t itemId;
    // 
    uint32_t quantity;
  };

  void to_json(nlohmann::json& j, const LolStoreBundledItem& v) {
    j["discountPrices"] = v.discountPrices;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["quantity"] = v.quantity;
  }

  void from_json(const nlohmann::json& j, LolStoreBundledItem& v) {
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost>>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.quantity = j.at("quantity").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreBundledItem_HPP
