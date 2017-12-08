#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetValidationRequestItem.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationRequest_t {
    std::vector<LolPurchaseWidgetValidationRequestItem_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationRequest_t& v) {
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationRequest_t& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationRequestItem_t>>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
