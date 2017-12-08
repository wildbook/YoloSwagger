#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemCost_t {
    std::string currency;
    int64_t cost;
    std::optional<float> discount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemCost_t& v) {
    j["currency"] = v.currency;
    j["cost"] = v.cost;
    if(v.discount)
      j["discount"] = *v.discount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemCost_t& v) {
    v.currency = j.at("currency").get<std::string>();
    v.cost = j.at("cost").get<int64_t>();
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<float>();
  }
  inline std::string to_string(const LolStoreItemCost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
