#ifndef SWAGGER_TYPES_LolPersonalizedOffersOfferRequest_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOfferRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersOfferRequest {
    // 
    std::string inventoryType;
    // 
    int32_t itemId;
    // 
    std::string offerId;
    // 
    int64_t price;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequest& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["offerId"] = v.offerId;
    j["price"] = v.price;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequest& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.offerId = j.at("offerId").get<std::string>;
    v.price = j.at("price").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOfferRequest_HPP
