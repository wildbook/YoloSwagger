#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatchTeam_t {
    std::string guid;
    std::string name;
    std::string logoUrl;
    std::string acronym;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    j["guid"] = v.guid;
    j["name"] = v.name;
    j["logoUrl"] = v.logoUrl;
    j["acronym"] = v.acronym;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    v.guid = j.at("guid").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.acronym = j.at("acronym").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
