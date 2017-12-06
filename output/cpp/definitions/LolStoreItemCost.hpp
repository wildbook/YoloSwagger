#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemCost_t {
    int64_t cost;
    std::string currency;
    std::optional<float> discount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemCost_t& v) {
    j["cost"] = v.cost;
    j["currency"] = v.currency;
    if(v.discount)
      j["discount"] = *v.discount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemCost_t& v) {
    v.cost = j.at("cost").get<int64_t>();
    v.currency = j.at("currency").get<std::string>();
    if(auto it = j.find("discount"); it != j.end() !it->is_null())
      v.discount = it->get<float>();
  }
}
