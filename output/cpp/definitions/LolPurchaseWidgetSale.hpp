#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetSale_t {
    std::string startDate;
    std::vector<LolPurchaseWidgetItemPrice_t> prices;
    std::string endDate;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetSale_t& v) {
    j["startDate"] = v.startDate;
    j["prices"] = v.prices;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetSale_t& v) {
    v.startDate = j.at("startDate").get<std::string>();
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice_t>>();
    v.endDate = j.at("endDate").get<std::string>();
  }
  inline std::string to_string(const LolPurchaseWidgetSale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
