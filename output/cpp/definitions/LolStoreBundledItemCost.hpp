#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundledItemCost_t {
    std::string currency;
    std::optional<float> discount;
    std::string costType;
    int64_t cost;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost_t& v) {
    j["currency"] = v.currency;
    if(v.discount)
      j["discount"] = *v.discount;
    j["costType"] = v.costType;
    j["cost"] = v.cost;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost_t& v) {
    v.currency = j.at("currency").get<std::string>();
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<float>();
    v.costType = j.at("costType").get<std::string>();
    v.cost = j.at("cost").get<int64_t>();
  }
  inline std::string to_string(const LolStoreBundledItemCost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
