#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_teams_t {
    std::string acronym;
    std::string guid;
    int64_t id;
    std::string logoUrl;
    std::string name;
    std::string slug;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    j["acronym"] = v.acronym;
    j["guid"] = v.guid;
    j["id"] = v.id;
    j["logoUrl"] = v.logoUrl;
    j["name"] = v.name;
    j["slug"] = v.slug;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_teams_t& v) {
    v.acronym = j.at("acronym").get<std::string>();
    v.guid = j.at("guid").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.slug = j.at("slug").get<std::string>();
  }
}
