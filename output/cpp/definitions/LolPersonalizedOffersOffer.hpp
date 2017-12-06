#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    int64_t discountPrice;
    std::string expirationDate;
    std::string inventoryType;
    int32_t itemId;
    std::string name;
    std::string offerId;
    int64_t originalPrice;
    bool owned;
    bool revealed;
    uint32_t spotIndex;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
    j["discountPrice"] = v.discountPrice;
    j["expirationDate"] = v.expirationDate;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["name"] = v.name;
    j["offerId"] = v.offerId;
    j["originalPrice"] = v.originalPrice;
    j["owned"] = v.owned;
    j["revealed"] = v.revealed;
    j["spotIndex"] = v.spotIndex;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.offerId = j.at("offerId").get<std::string>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.owned = j.at("owned").get<bool>();
    v.revealed = j.at("revealed").get<bool>();
    v.spotIndex = j.at("spotIndex").get<uint32_t>();
  }
}
