#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOfferRequest_t {
    int32_t itemId;
    std::string inventoryType;
    int64_t price;
    std::string offerId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequest_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["price"] = v.price;
    j["offerId"] = v.offerId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequest_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.price = j.at("price").get<int64_t>();
    v.offerId = j.at("offerId").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersOfferRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
