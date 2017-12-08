#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t {
    int64_t_t team;
    std::string_t id;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    j["team"] = v.team;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    v.team = j.at("team").get<int64_t_t>();
    v.id = j.at("id").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
