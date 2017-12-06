#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SummonerOrTeamAvailabilty_t {
    std::vector<std::string> availableForWatching;
  };

  inline void to_json(nlohmann::json& j, const SummonerOrTeamAvailabilty_t& v) {
    j["availableForWatching"] = v.availableForWatching;
  }

  inline void from_json(const nlohmann::json& j, SummonerOrTeamAvailabilty_t& v) {
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>();
  }
}
