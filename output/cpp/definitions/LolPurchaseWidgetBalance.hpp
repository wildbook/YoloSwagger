#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetBalance_t {
    std::string currencyType;
    int32_t amount;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetBalance_t& v) {
    j["currencyType"] = v.currencyType;
    j["amount"] = v.amount;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetBalance_t& v) {
    v.currencyType = j.at("currencyType").get<std::string>();
    v.amount = j.at("amount").get<int32_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetBalance_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
