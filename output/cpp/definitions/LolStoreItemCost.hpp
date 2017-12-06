#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemCost_t {
    std::string currency;
    std::optional<float> discount;
    int64_t cost;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemCost_t& v) {
    j["currency"] = v.currency;
    if(v.discount)
      j["discount"] = *v.discount;
    j["cost"] = v.cost;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemCost_t& v) {
    v.currency = j.at("currency").get<std::string>();
    if(auto it = j.find("discount"); it != j.end() !it->is_null())
      v.discount = it->get<float>();
    v.cost = j.at("cost").get<int64_t>();
  }
}
