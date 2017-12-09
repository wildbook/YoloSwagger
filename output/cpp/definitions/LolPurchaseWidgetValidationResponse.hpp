#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetValidationResponseItem.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponse_t {
    bool valid;
    std::vector<LolPurchaseWidgetValidationResponseItem_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponse_t& v) {
    j["valid"] = v.valid;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponse_t& v) {
    v.valid = j.at("valid").get<bool>();
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem_t>>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
