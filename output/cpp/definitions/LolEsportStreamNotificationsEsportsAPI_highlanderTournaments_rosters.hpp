#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t {
    std::string id;
    int64_t team;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    j["id"] = v.id;
    j["team"] = v.team;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    v.id = j.at("id").get<std::string>();
    v.team = j.at("team").get<int64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
