#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetItemPrice_t {
    std::string currencyType;
    int32_t price;
    bool purchasable;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemPrice_t& v) {
    j["currencyType"] = v.currencyType;
    j["price"] = v.price;
    j["purchasable"] = v.purchasable;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemPrice_t& v) {
    v.currencyType = j.at("currencyType").get<std::string>();
    v.price = j.at("price").get<int32_t>();
    v.purchasable = j.at("purchasable").get<bool>();
  }
}
