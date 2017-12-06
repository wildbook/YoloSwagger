#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemCost.hpp"
namespace leagueapi {
  struct LolStoreSale_t {
    std::vector<LolStoreItemCost_t> prices;
    std::string startDate;
    std::string endDate;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSale_t& v) {
    j["prices"] = v.prices;
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSale_t& v) {
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost_t>>();
    v.startDate = j.at("startDate").get<std::string>();
    v.endDate = j.at("endDate").get<std::string>();
  }
}
