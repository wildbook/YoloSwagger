#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOfferRequest_t {
    int32_t_t itemId;
    std::string_t inventoryType;
    int64_t_t price;
    std::string_t offerId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequest_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["price"] = v.price;
    j["offerId"] = v.offerId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequest_t& v) {
    v.itemId = j.at("itemId").get<int32_t_t>();
    v.inventoryType = j.at("inventoryType").get<std::string_t>();
    v.price = j.at("price").get<int64_t_t>();
    v.offerId = j.at("offerId").get<std::string_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersOfferRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
