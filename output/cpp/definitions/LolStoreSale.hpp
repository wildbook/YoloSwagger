#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemCost.hpp"
namespace leagueapi {
  struct LolStoreSale_t {
    std::string startDate;
    std::vector<LolStoreItemCost_t> prices;
    std::string endDate;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSale_t& v) {
    j["startDate"] = v.startDate;
    j["prices"] = v.prices;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSale_t& v) {
    v.startDate = j.at("startDate").get<std::string>();
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost_t>>();
    v.endDate = j.at("endDate").get<std::string>();
  }
  inline std::string to_string(const LolStoreSale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
