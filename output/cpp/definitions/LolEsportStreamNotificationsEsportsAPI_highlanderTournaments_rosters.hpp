#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t {
    std::string name;
    int64_t team;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    j["name"] = v.name;
    j["team"] = v.team;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    v.name = j.at("name").get<std::string>();
    v.team = j.at("team").get<int64_t>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
