#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerTournamentData_t {
    int64_t bracketId;
    LolClashPlayerState_t state;
    std::string rosterId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerTournamentData_t& v) {
    j["bracketId"] = v.bracketId;
    j["state"] = v.state;
    j["rosterId"] = v.rosterId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerTournamentData_t& v) {
    v.bracketId = j.at("bracketId").get<int64_t>();
    v.state = j.at("state").get<LolClashPlayerState_t>();
    v.rosterId = j.at("rosterId").get<std::string>();
  }
}
