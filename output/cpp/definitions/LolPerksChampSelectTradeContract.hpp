#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectTradeState.hpp"
namespace leagueapi {
  struct LolPerksChampSelectTradeContract_t {
    int64_t cellId;
    int64_t id;
    LolPerksChampSelectTradeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectTradeContract_t& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectTradeContract_t& v) {
    v.cellId = j.at("cellId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.state = j.at("state").get<LolPerksChampSelectTradeState_t>();
  }
}
