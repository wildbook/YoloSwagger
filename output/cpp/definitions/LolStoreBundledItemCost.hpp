#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundledItemCost_t {
    std::optional<float> discount;
    std::string currency;
    std::string costType;
    int64_t cost;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost_t& v) {
    if(v.discount)
      j["discount"] = *v.discount;
    j["currency"] = v.currency;
    j["costType"] = v.costType;
    j["cost"] = v.cost;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost_t& v) {
    if(auto it = j.find("discount"); it != j.end() !it->is_null())
      v.discount = it->get<float>();
    v.currency = j.at("currency").get<std::string>();
    v.costType = j.at("costType").get<std::string>();
    v.cost = j.at("cost").get<int64_t>();
  }
}
