#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectTradeState.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectTradeContract_t {
    LolChampSelectLegacyChampSelectTradeState_t state;
    int64_t id;
    int64_t cellId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTradeContract_t& v) {
    j["state"] = v.state;
    j["id"] = v.id;
    j["cellId"] = v.cellId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTradeContract_t& v) {
    v.state = j.at("state").get<LolChampSelectLegacyChampSelectTradeState_t>();
    v.id = j.at("id").get<int64_t>();
    v.cellId = j.at("cellId").get<int64_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectTradeContract_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
