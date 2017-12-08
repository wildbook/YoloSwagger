#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    int32_t_t itemId;
    int64_t_t discountPrice;
    bool_t owned;
    std::string_t name;
    std::string_t offerId;
    uint32_t_t spotIndex;
    std::string_t expirationDate;
    std::string_t inventoryType;
    bool_t revealed;
    int64_t_t originalPrice;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.itemId = j.at("itemId").get<int32_t_t>();
    v.discountPrice = j.at("discountPrice").get<int64_t_t>();
    v.owned = j.at("owned").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
    v.offerId = j.at("offerId").get<std::string_t>();
    v.spotIndex = j.at("spotIndex").get<uint32_t_t>();
    v.expirationDate = j.at("expirationDate").get<std::string_t>();
    v.inventoryType = j.at("inventoryType").get<std::string_t>();
    v.revealed = j.at("revealed").get<bool_t>();
    v.originalPrice = j.at("originalPrice").get<int64_t_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
