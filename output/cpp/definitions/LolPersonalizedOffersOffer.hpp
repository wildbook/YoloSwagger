#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    int64_t originalPrice;
    std::string offerId;
    std::string name;
    std::string expirationDate;
    uint32_t spotIndex;
    bool revealed;
    int32_t itemId;
    std::string inventoryType;
    int64_t discountPrice;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
    j["originalPrice"] = v.originalPrice;
    j["offerId"] = v.offerId;
    j["name"] = v.name;
    j["expirationDate"] = v.expirationDate;
    j["spotIndex"] = v.spotIndex;
    j["revealed"] = v.revealed;
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["discountPrice"] = v.discountPrice;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.offerId = j.at("offerId").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.spotIndex = j.at("spotIndex").get<uint32_t>();
    v.revealed = j.at("revealed").get<bool>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.owned = j.at("owned").get<bool>();
  }
}
