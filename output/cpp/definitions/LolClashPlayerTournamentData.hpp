#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerTournamentData_t {
    LolClashPlayerState_t state;
    int64_t bracketId;
    std::string rosterId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerTournamentData_t& v) {
    j["state"] = v.state;
    j["bracketId"] = v.bracketId;
    j["rosterId"] = v.rosterId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerTournamentData_t& v) {
    v.state = j.at("state").get<LolClashPlayerState_t>();
    v.bracketId = j.at("bracketId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<std::string>();
  }
  inline std::string to_string(const LolClashPlayerTournamentData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
