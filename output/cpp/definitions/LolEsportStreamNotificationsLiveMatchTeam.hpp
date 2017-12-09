#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatchTeam_t {
    std::string acronym;
    std::string guid;
    std::string logoUrl;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    j["acronym"] = v.acronym;
    j["guid"] = v.guid;
    j["logoUrl"] = v.logoUrl;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    v.acronym = j.at("acronym").get<std::string>();
    v.guid = j.at("guid").get<std::string>();
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
