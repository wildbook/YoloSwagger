#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundledItemCost_t {
    std::string currency;
    std::optional<float> discount;
    int64_t cost;
    std::string costType;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost_t& v) {
    j["currency"] = v.currency;
    if(v.discount)
      j["discount"] = *v.discount;
    j["cost"] = v.cost;
    j["costType"] = v.costType;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost_t& v) {
    v.currency = j.at("currency").get<std::string>();
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<float>();
    v.cost = j.at("cost").get<int64_t>();
    v.costType = j.at("costType").get<std::string>();
  }
  inline std::string to_string(const LolStoreBundledItemCost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
