#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_teams_t {
    std::string guid;
    std::string slug;
    int64_t id;
    std::string acronym;
    std::string logoUrl;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    j["guid"] = v.guid;
    j["slug"] = v.slug;
    j["id"] = v.id;
    j["acronym"] = v.acronym;
    j["logoUrl"] = v.logoUrl;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    v.guid = j.at("guid").get<std::string>();
    v.slug = j.at("slug").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.acronym = j.at("acronym").get<std::string>();
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
