#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetItemPrice_t {
    int32_t price;
    std::string currencyType;
    bool purchasable;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemPrice_t& v) {
    j["price"] = v.price;
    j["currencyType"] = v.currencyType;
    j["purchasable"] = v.purchasable;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemPrice_t& v) {
    v.price = j.at("price").get<int32_t>();
    v.currencyType = j.at("currencyType").get<std::string>();
    v.purchasable = j.at("purchasable").get<bool>();
  }
}
