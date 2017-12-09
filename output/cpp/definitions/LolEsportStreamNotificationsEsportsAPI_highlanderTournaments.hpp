#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t {
    std::string title;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t> brackets;
    std::string id;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t> rosters;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    j["title"] = v.title;
    j["brackets"] = v.brackets;
    j["id"] = v.id;
    j["rosters"] = v.rosters;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    v.title = j.at("title").get<std::string>();
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t>>();
    v.id = j.at("id").get<std::string>();
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t>>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
