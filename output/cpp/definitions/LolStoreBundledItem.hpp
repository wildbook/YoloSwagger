#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
namespace leagueapi {
  struct LolStoreBundledItem_t {
    std::string inventoryType;
    uint32_t quantity;
    int32_t itemId;
    std::vector<LolStoreBundledItemCost_t> discountPrices;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItem_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["quantity"] = v.quantity;
    j["itemId"] = v.itemId;
    j["discountPrices"] = v.discountPrices;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItem_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost_t>>();
  }
  inline std::string to_string(const LolStoreBundledItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
