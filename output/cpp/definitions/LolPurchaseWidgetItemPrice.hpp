#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetItemPrice_t {
    bool purchasable;
    int32_t price;
    std::string currencyType;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemPrice_t& v) {
    j["purchasable"] = v.purchasable;
    j["price"] = v.price;
    j["currencyType"] = v.currencyType;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemPrice_t& v) {
    v.purchasable = j.at("purchasable").get<bool>();
    v.price = j.at("price").get<int32_t>();
    v.currencyType = j.at("currencyType").get<std::string>();
  }
  inline std::string to_string(const LolPurchaseWidgetItemPrice_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
