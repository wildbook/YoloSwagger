#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerTournamentData_t {
    int64_t bracketId;
    std::string rosterId;
    LolClashPlayerState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerTournamentData_t& v) {
    j["bracketId"] = v.bracketId;
    j["rosterId"] = v.rosterId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerTournamentData_t& v) {
    v.bracketId = j.at("bracketId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<std::string>();
    v.state = j.at("state").get<LolClashPlayerState_t>();
  }
}
