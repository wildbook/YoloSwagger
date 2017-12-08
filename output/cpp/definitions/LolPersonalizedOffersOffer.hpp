#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    uint32_t spotIndex;
    int64_t originalPrice;
    bool revealed;
    int64_t discountPrice;
    std::string inventoryType;
    int32_t itemId;
    std::string name;
    bool owned;
    std::string offerId;
    std::string expirationDate;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
    j["spotIndex"] = v.spotIndex;
    j["originalPrice"] = v.originalPrice;
    j["revealed"] = v.revealed;
    j["discountPrice"] = v.discountPrice;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["name"] = v.name;
    j["owned"] = v.owned;
    j["offerId"] = v.offerId;
    j["expirationDate"] = v.expirationDate;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.spotIndex = j.at("spotIndex").get<uint32_t>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.revealed = j.at("revealed").get<bool>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.offerId = j.at("offerId").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
