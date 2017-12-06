#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersPurchaseItem_t {
    std::string inventoryType;
    int32_t itemId;
    int64_t pricePaid;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseItem_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["pricePaid"] = v.pricePaid;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseItem_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.pricePaid = j.at("pricePaid").get<int64_t>();
  }
}
