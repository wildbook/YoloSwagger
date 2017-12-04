#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_teams_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_teams_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_teams {
    // 
    std::string name;
    // 
    std::string acronym;
    // 
    int64_t id;
    // 
    std::string logoUrl;
    // 
    std::string guid;
    // 
    std::string slug;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_teams& v) {
    j["name"] = v.name;
    j["acronym"] = v.acronym;
    j["id"] = v.id;
    j["logoUrl"] = v.logoUrl;
    j["guid"] = v.guid;
    j["slug"] = v.slug;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_teams& v) {
    v.name = j.at("name").get<std::string>;
    v.acronym = j.at("acronym").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.logoUrl = j.at("logoUrl").get<std::string>;
    v.guid = j.at("guid").get<std::string>;
    v.slug = j.at("slug").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_teams_HPP
