#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundledItemCost_t {
    int64_t cost;
    std::string costType;
    std::optional<float> discount;
    std::string currency;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost_t& v) {
    j["cost"] = v.cost;
    j["costType"] = v.costType;
    if(v.discount)
      j["discount"] = *v.discount;
    j["currency"] = v.currency;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost_t& v) {
    v.cost = j.at("cost").get<int64_t>();
    v.costType = j.at("costType").get<std::string>();
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<float>();
    v.currency = j.at("currency").get<std::string>();
  }
  inline std::string to_string(const LolStoreBundledItemCost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
