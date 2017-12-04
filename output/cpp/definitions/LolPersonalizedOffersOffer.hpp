#ifndef SWAGGER_TYPES_LolPersonalizedOffersOffer_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOffer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersOffer {
    // 
    int32_t itemId;
    // 
    int64_t discountPrice;
    // 
    bool owned;
    // 
    std::string name;
    // 
    std::string offerId;
    // 
    uint32_t spotIndex;
    // 
    std::string expirationDate;
    // 
    std::string inventoryType;
    // 
    bool revealed;
    // 
    int64_t originalPrice;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer& v) {
    j["itemId"] = v.itemId;
    j["discountPrice"] = v.discountPrice;
    j["owned"] = v.owned;
    j["name"] = v.name;
    j["offerId"] = v.offerId;
    j["spotIndex"] = v.spotIndex;
    j["expirationDate"] = v.expirationDate;
    j["inventoryType"] = v.inventoryType;
    j["revealed"] = v.revealed;
    j["originalPrice"] = v.originalPrice;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.discountPrice = j.at("discountPrice").get<int64_t>;
    v.owned = j.at("owned").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.offerId = j.at("offerId").get<std::string>;
    v.spotIndex = j.at("spotIndex").get<uint32_t>;
    v.expirationDate = j.at("expirationDate").get<std::string>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.revealed = j.at("revealed").get<bool>;
    v.originalPrice = j.at("originalPrice").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOffer_HPP
