#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
namespace leagueapi {
  struct LolStoreBundledItem_t {
    uint32_t quantity;
    std::vector<LolStoreBundledItemCost_t> discountPrices;
    std::string inventoryType;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItem_t& v) {
    j["quantity"] = v.quantity;
    j["discountPrices"] = v.discountPrices;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItem_t& v) {
    v.quantity = j.at("quantity").get<uint32_t>();
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost_t>>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
  inline std::string to_string(const LolStoreBundledItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
