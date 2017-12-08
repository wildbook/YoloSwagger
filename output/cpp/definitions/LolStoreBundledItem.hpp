#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
namespace leagueapi {
  struct LolStoreBundledItem_t {
    int32_t itemId;
    std::vector<LolStoreBundledItemCost_t> discountPrices;
    uint32_t quantity;
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItem_t& v) {
    j["itemId"] = v.itemId;
    j["discountPrices"] = v.discountPrices;
    j["quantity"] = v.quantity;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItem_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost_t>>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
  }
  inline std::string to_string(const LolStoreBundledItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
