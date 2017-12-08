#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
#include "LolStoreBundledItem.hpp"
namespace leagueapi {
  struct LolStoreBundled_t {
    bool flexible;
    std::vector<LolStoreBundledItemCost_t> minimumPrices;
    std::vector<LolStoreBundledItem_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundled_t& v) {
    j["flexible"] = v.flexible;
    j["minimumPrices"] = v.minimumPrices;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundled_t& v) {
    v.flexible = j.at("flexible").get<bool>();
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost_t>>();
    v.items = j.at("items").get<std::vector<LolStoreBundledItem_t>>();
  }
  inline std::string to_string(const LolStoreBundled_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
