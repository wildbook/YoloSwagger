#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetBalance_t {
    int32_t_t amount;
    std::string_t currencyType;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetBalance_t& v) {
    j["amount"] = v.amount;
    j["currencyType"] = v.currencyType;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetBalance_t& v) {
    v.amount = j.at("amount").get<int32_t_t>();
    v.currencyType = j.at("currencyType").get<std::string_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetBalance_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
