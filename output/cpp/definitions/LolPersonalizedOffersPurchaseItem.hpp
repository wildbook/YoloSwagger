#ifndef SWAGGER_TYPES_LolPersonalizedOffersPurchaseItem_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersPurchaseItem_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersPurchaseItem {
    // 
    int32_t itemId;
    // 
    std::string inventoryType;
    // 
    int64_t pricePaid;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseItem& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["pricePaid"] = v.pricePaid;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseItem& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.pricePaid = j.at("pricePaid").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersPurchaseItem_HPP
