#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectTradeState.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectTradeContract_t {
    int64_t cellId;
    int64_t id;
    LolChampSelectChampSelectTradeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTradeContract_t& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTradeContract_t& v) {
    v.cellId = j.at("cellId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.state = j.at("state").get<LolChampSelectChampSelectTradeState_t>();
  }
}
