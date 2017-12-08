#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetValidationResponseItem.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponse_t {
    std::vector<LolPurchaseWidgetValidationResponseItem_t> items;
    bool_t valid;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponse_t& v) {
    j["items"] = v.items;
    j["valid"] = v.valid;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponse_t& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem_t>>();
    v.valid = j.at("valid").get<bool_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
