#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemCost.hpp"
namespace leagueapi {
  struct LolStoreSale_t {
    std::string endDate;
    std::vector<LolStoreItemCost_t> prices;
    std::string startDate;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSale_t& v) {
    j["endDate"] = v.endDate;
    j["prices"] = v.prices;
    j["startDate"] = v.startDate;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSale_t& v) {
    v.endDate = j.at("endDate").get<std::string>();
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost_t>>();
    v.startDate = j.at("startDate").get<std::string>();
  }
  inline std::string to_string(const LolStoreSale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
