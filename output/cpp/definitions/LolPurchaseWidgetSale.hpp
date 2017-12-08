#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetSale_t {
    std::vector<LolPurchaseWidgetItemPrice_t> prices;
    std::string_t startDate;
    std::string_t endDate;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetSale_t& v) {
    j["prices"] = v.prices;
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetSale_t& v) {
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice_t>>();
    v.startDate = j.at("startDate").get<std::string_t>();
    v.endDate = j.at("endDate").get<std::string_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetSale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
