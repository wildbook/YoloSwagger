#ifndef SWAGGER_TYPES_LolPersonalizedOffersPurchaseItem_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersPurchaseItem_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPersonalizedOffersPurchaseItem {
'    // 
    std::string inventoryType;
    // 
    int32_t itemId;
    // 
    int64_t pricePaid;
  };

  void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseItem& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["pricePaid"] = v.pricePaid;
  }

  void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseItem& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.pricePaid = j.at("pricePaid").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersPurchaseItem_HPP
