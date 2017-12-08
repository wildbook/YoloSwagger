#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_teams_t {
    std::string name;
    std::string acronym;
    int64_t id;
    std::string logoUrl;
    std::string guid;
    std::string slug;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    j["name"] = v.name;
    j["acronym"] = v.acronym;
    j["id"] = v.id;
    j["logoUrl"] = v.logoUrl;
    j["guid"] = v.guid;
    j["slug"] = v.slug;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    v.name = j.at("name").get<std::string>();
    v.acronym = j.at("acronym").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.guid = j.at("guid").get<std::string>();
    v.slug = j.at("slug").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
