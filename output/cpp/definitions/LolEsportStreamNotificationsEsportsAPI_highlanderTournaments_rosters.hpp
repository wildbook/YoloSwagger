#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t {
    std::string id;
    std::string name;
    int64_t team;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["team"] = v.team;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    v.id = j.at("id").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.team = j.at("team").get<int64_t>();
  }
}
