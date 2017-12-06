#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatchTeam_t {
    std::string logoUrl;
    std::string name;
    std::string acronym;
    std::string guid;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    j["logoUrl"] = v.logoUrl;
    j["name"] = v.name;
    j["acronym"] = v.acronym;
    j["guid"] = v.guid;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    v.logoUrl = j.at("logoUrl").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.acronym = j.at("acronym").get<std::string>();
    v.guid = j.at("guid").get<std::string>();
  }
}
