#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemCost_t {
    int64_t cost;
    std::optional<float> discount;
    std::string currency;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemCost_t& v) {
    j["cost"] = v.cost;
    if(v.discount)
      j["discount"] = *v.discount;
    j["currency"] = v.currency;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemCost_t& v) {
    v.cost = j.at("cost").get<int64_t>();
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<float>();
    v.currency = j.at("currency").get<std::string>();
  }
  inline std::string to_string(const LolStoreItemCost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
