#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatchTeam_t {
    std::string_t acronym;
    std::string_t guid;
    std::string_t name;
    std::string_t logoUrl;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    j["acronym"] = v.acronym;
    j["guid"] = v.guid;
    j["name"] = v.name;
    j["logoUrl"] = v.logoUrl;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    v.acronym = j.at("acronym").get<std::string_t>();
    v.guid = j.at("guid").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.logoUrl = j.at("logoUrl").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatchTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
