#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    bool owned;
    int32_t itemId;
    std::string name;
    std::string expirationDate;
    std::string inventoryType;
    int64_t discountPrice;
    uint32_t spotIndex;
    bool revealed;
    std::string offerId;
    int64_t originalPrice;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
    j["owned"] = v.owned;
    j["itemId"] = v.itemId;
    j["name"] = v.name;
    j["expirationDate"] = v.expirationDate;
    j["inventoryType"] = v.inventoryType;
    j["discountPrice"] = v.discountPrice;
    j["spotIndex"] = v.spotIndex;
    j["revealed"] = v.revealed;
    j["offerId"] = v.offerId;
    j["originalPrice"] = v.originalPrice;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.spotIndex = j.at("spotIndex").get<uint32_t>();
    v.revealed = j.at("revealed").get<bool>();
    v.offerId = j.at("offerId").get<std::string>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
