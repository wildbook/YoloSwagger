#ifndef SWAGGER_TYPES_LolPersonalizedOffersUIOffer_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersUIOffer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersUIOffer {
    // 
    int32_t championId;
    // 
    int64_t discountPrice;
    // 
    std::string expirationDate;
    // 
    std::string id;
    // 
    int64_t originalPrice;
    // 
    bool owned;
    // 
    bool revealed;
    // 
    int32_t skinId;
    // 
    std::string skinName;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer& v) {
    j["championId"] = v.championId;
    j["discountPrice"] = v.discountPrice;
    j["expirationDate"] = v.expirationDate;
    j["id"] = v.id;
    j["originalPrice"] = v.originalPrice;
    j["owned"] = v.owned;
    j["revealed"] = v.revealed;
    j["skinId"] = v.skinId;
    j["skinName"] = v.skinName;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.discountPrice = j.at("discountPrice").get<int64_t>;
    v.expirationDate = j.at("expirationDate").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.originalPrice = j.at("originalPrice").get<int64_t>;
    v.owned = j.at("owned").get<bool>;
    v.revealed = j.at("revealed").get<bool>;
    v.skinId = j.at("skinId").get<int32_t>;
    v.skinName = j.at("skinName").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersUIOffer_HPP
