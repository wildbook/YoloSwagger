#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundledItemCost_t {
    int64_t cost;
    std::string costType;
    std::string currency;
    std::optional<float> discount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost_t& v) {
    j["cost"] = v.cost;
    j["costType"] = v.costType;
    j["currency"] = v.currency;
    if(v.discount)
      j["discount"] = *v.discount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost_t& v) {
    v.cost = j.at("cost").get<int64_t>();
    v.costType = j.at("costType").get<std::string>();
    v.currency = j.at("currency").get<std::string>();
    if(auto it = j.find("discount"); it != j.end() !it->is_null())
      v.discount = it->get<float>();
  }
}
