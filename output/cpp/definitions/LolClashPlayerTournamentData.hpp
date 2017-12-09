#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerTournamentData_t {
    std::string rosterId;
    LolClashPlayerState_t state;
    int64_t bracketId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerTournamentData_t& v) {
    j["rosterId"] = v.rosterId;
    j["state"] = v.state;
    j["bracketId"] = v.bracketId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerTournamentData_t& v) {
    v.rosterId = j.at("rosterId").get<std::string>();
    v.state = j.at("state").get<LolClashPlayerState_t>();
    v.bracketId = j.at("bracketId").get<int64_t>();
  }
  inline std::string to_string(const LolClashPlayerTournamentData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
