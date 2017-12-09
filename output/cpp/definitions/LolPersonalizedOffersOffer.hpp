#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    bool revealed;
    std::string inventoryType;
    std::string name;
    uint32_t spotIndex;
    std::string offerId;
    bool owned;
    int64_t discountPrice;
    int64_t originalPrice;
    std::string expirationDate;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
    j["revealed"] = v.revealed;
    j["inventoryType"] = v.inventoryType;
    j["name"] = v.name;
    j["spotIndex"] = v.spotIndex;
    j["offerId"] = v.offerId;
    j["owned"] = v.owned;
    j["discountPrice"] = v.discountPrice;
    j["originalPrice"] = v.originalPrice;
    j["expirationDate"] = v.expirationDate;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.revealed = j.at("revealed").get<bool>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.spotIndex = j.at("spotIndex").get<uint32_t>();
    v.offerId = j.at("offerId").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
