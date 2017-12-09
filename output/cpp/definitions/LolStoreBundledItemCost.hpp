#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundledItemCost_t {
    std::string costType;
    std::string currency;
    int64_t cost;
    std::optional<float> discount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost_t& v) {
    j["costType"] = v.costType;
    j["currency"] = v.currency;
    j["cost"] = v.cost;
    if(v.discount)
      j["discount"] = *v.discount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost_t& v) {
    v.costType = j.at("costType").get<std::string>();
    v.currency = j.at("currency").get<std::string>();
    v.cost = j.at("cost").get<int64_t>();
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<float>();
  }
  inline std::string to_string(const LolStoreBundledItemCost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
