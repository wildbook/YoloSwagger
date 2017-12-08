#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersPurchaseItem_t {
    int64_t pricePaid;
    std::string inventoryType;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseItem_t& v) {
    j["pricePaid"] = v.pricePaid;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseItem_t& v) {
    v.pricePaid = j.at("pricePaid").get<int64_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersPurchaseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
