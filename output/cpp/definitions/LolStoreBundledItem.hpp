#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
namespace leagueapi {
  struct LolStoreBundledItem_t {
    std::string inventoryType;
    int32_t itemId;
    uint32_t quantity;
    std::vector<LolStoreBundledItemCost_t> discountPrices;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItem_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["quantity"] = v.quantity;
    j["discountPrices"] = v.discountPrices;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItem_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost_t>>();
  }
}
