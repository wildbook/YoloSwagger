#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeague.hpp"
namespace leagueapi {
  struct LolLeaguesApexLeagues_t {
    std::vector<LolLeaguesLeague_t> masters;
    std::vector<LolLeaguesLeague_t> challengers;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesApexLeagues_t& v) {
    j["masters"] = v.masters;
    j["challengers"] = v.challengers;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesApexLeagues_t& v) {
    v.masters = j.at("masters").get<std::vector<LolLeaguesLeague_t>>();
    v.challengers = j.at("challengers").get<std::vector<LolLeaguesLeague_t>>();
  }
}
