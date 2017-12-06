#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyQueue.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameData_t {
    LolChampSelectLegacyQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameData_t& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolChampSelectLegacyQueue_t>();
  }
}
