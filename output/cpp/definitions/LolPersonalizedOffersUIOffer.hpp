#ifndef SWAGGER_TYPES_LolPersonalizedOffersUIOffer_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersUIOffer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersUIOffer {
    // 
    int64_t discountPrice;
    // 
    int32_t championId;
    // 
    std::string type;
    // 
    bool owned;
    // 
    int32_t skinId;
    // 
    int64_t originalPrice;
    // 
    std::string skinName;
    // 
    bool revealed;
    // 
    std::string id;
    // 
    std::string expirationDate;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer& v) {
    j["discountPrice"] = v.discountPrice;
    j["championId"] = v.championId;
    j["type"] = v.type;
    j["owned"] = v.owned;
    j["skinId"] = v.skinId;
    j["originalPrice"] = v.originalPrice;
    j["skinName"] = v.skinName;
    j["revealed"] = v.revealed;
    j["id"] = v.id;
    j["expirationDate"] = v.expirationDate;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer& v) {
    v.discountPrice = j.at("discountPrice").get<int64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.type = j.at("type").get<std::string>;
    v.owned = j.at("owned").get<bool>;
    v.skinId = j.at("skinId").get<int32_t>;
    v.originalPrice = j.at("originalPrice").get<int64_t>;
    v.skinName = j.at("skinName").get<std::string>;
    v.revealed = j.at("revealed").get<bool>;
    v.id = j.at("id").get<std::string>;
    v.expirationDate = j.at("expirationDate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersUIOffer_HPP