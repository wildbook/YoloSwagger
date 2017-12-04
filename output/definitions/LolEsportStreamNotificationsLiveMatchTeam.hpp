#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatchTeam_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatchTeam_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsLiveMatchTeam {
    // 
    std::string acronym;
    // 
    std::string guid;
    // 
    std::string logoUrl;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatchTeam& v) {
    j["acronym"] = v.acronym;
    j["guid"] = v.guid;
    j["logoUrl"] = v.logoUrl;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatchTeam& v) {
    v.acronym = j.at("acronym").get<std::string>;
    v.guid = j.at("guid").get<std::string>;
    v.logoUrl = j.at("logoUrl").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatchTeam_HPP
