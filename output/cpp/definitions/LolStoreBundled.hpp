#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
#include "LolStoreBundledItem.hpp"
namespace leagueapi {
  struct LolStoreBundled_t {
    bool flexible;
    std::vector<LolStoreBundledItem_t> items;
    std::vector<LolStoreBundledItemCost_t> minimumPrices;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundled_t& v) {
    j["flexible"] = v.flexible;
    j["items"] = v.items;
    j["minimumPrices"] = v.minimumPrices;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundled_t& v) {
    v.flexible = j.at("flexible").get<bool>();
    v.items = j.at("items").get<std::vector<LolStoreBundledItem_t>>();
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost_t>>();
  }
}
