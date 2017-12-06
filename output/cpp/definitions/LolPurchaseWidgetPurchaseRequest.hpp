#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseRequest_t {
    std::vector<LolPurchaseWidgetPurchaseItem_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseRequest_t& v) {
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseRequest_t& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem_t>>();
  }
}
