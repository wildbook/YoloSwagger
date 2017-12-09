#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatchTeam_t {
    std::string name;
    std::string guid;
    std::string logoUrl;
    std::string acronym;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    j["name"] = v.name;
    j["guid"] = v.guid;
    j["logoUrl"] = v.logoUrl;
    j["acronym"] = v.acronym;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    v.name = j.at("name").get<std::string>();
    v.guid = j.at("guid").get<std::string>();
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.acronym = j.at("acronym").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
