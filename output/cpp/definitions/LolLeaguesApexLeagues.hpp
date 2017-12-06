#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeague.hpp"
namespace leagueapi {
  struct LolLeaguesApexLeagues_t {
    std::vector<LolLeaguesLeague_t> challengers;
    std::vector<LolLeaguesLeague_t> masters;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesApexLeagues_t& v) {
    j["challengers"] = v.challengers;
    j["masters"] = v.masters;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesApexLeagues_t& v) {
    v.challengers = j.at("challengers").get<std::vector<LolLeaguesLeague_t>>();
    v.masters = j.at("masters").get<std::vector<LolLeaguesLeague_t>>();
  }
}
