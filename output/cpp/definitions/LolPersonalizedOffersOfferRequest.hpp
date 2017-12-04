#ifndef SWAGGER_TYPES_LolPersonalizedOffersOfferRequest_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOfferRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersOfferRequest {
    // 
    int32_t itemId;
    // 
    std::string inventoryType;
    // 
    int64_t price;
    // 
    std::string offerId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequest& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["price"] = v.price;
    j["offerId"] = v.offerId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequest& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.price = j.at("price").get<int64_t>;
    v.offerId = j.at("offerId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOfferRequest_HPP
