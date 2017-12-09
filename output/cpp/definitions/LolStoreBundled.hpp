#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
#include "LolStoreBundledItem.hpp"
namespace leagueapi {
  struct LolStoreBundled_t {
    std::vector<LolStoreBundledItem_t> items;
    std::vector<LolStoreBundledItemCost_t> minimumPrices;
    bool flexible;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundled_t& v) {
    j["items"] = v.items;
    j["minimumPrices"] = v.minimumPrices;
    j["flexible"] = v.flexible;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundled_t& v) {
    v.items = j.at("items").get<std::vector<LolStoreBundledItem_t>>();
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost_t>>();
    v.flexible = j.at("flexible").get<bool>();
  }
  inline std::string to_string(const LolStoreBundled_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
