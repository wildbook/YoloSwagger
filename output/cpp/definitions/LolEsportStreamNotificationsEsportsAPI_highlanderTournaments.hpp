#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t {
    std::string description;
    std::string id;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t> rosters;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t> brackets;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["rosters"] = v.rosters;
    j["brackets"] = v.brackets;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_t>>();
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t>>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
