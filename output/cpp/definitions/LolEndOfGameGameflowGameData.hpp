#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowGameData_t {
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowGameData_t& v) {
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowGameData_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
  }
}
