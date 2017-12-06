#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersPurchaseItem_t {
    int32_t itemId;
    std::string inventoryType;
    int64_t pricePaid;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseItem_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["pricePaid"] = v.pricePaid;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseItem_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.pricePaid = j.at("pricePaid").get<int64_t>();
  }
}
