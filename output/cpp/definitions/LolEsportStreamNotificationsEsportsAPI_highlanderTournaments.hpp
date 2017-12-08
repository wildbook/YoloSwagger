#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t {
    std::string_t id;
    std::string_t title;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t> rosters;
    std::string_t description;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t> brackets;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    j["id"] = v.id;
    j["title"] = v.title;
    j["rosters"] = v.rosters;
    j["description"] = v.description;
    j["brackets"] = v.brackets;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    v.id = j.at("id").get<std::string_t>();
    v.title = j.at("title").get<std::string_t>();
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t>>();
    v.description = j.at("description").get<std::string_t>();
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t>>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
