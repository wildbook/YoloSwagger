#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOfferRequest_t {
    std::string inventoryType;
    int32_t itemId;
    std::string offerId;
    int64_t price;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequest_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["offerId"] = v.offerId;
    j["price"] = v.price;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequest_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.offerId = j.at("offerId").get<std::string>();
    v.price = j.at("price").get<int64_t>();
  }
}
