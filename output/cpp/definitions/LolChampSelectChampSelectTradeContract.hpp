#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectTradeState.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectTradeContract_t {
    LolChampSelectChampSelectTradeState_t state;
    int64_t cellId;
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTradeContract_t& v) {
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTradeContract_t& v) {
    v.state = j.at("state").get<LolChampSelectChampSelectTradeState_t>();
    v.cellId = j.at("cellId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolChampSelectChampSelectTradeContract_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
