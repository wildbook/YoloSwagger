#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    int64_t_t teamAId;
    std::string_t teamBLogoUrl;
    std::string_t teamBName;
    std::string_t teamBGuid;
    int64_t_t teamBId;
    std::string_t teamAGuid;
    std::string_t teamAName;
    std::string_t teamALogoUrl;
    std::string_t tournamentDescription;
    std::string_t title;
    std::string_t teamAAcronym;
    std::string_t teamBAcronym;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamAId"] = v.teamAId;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamBName"] = v.teamBName;
    j["teamBGuid"] = v.teamBGuid;
    j["teamBId"] = v.teamBId;
    j["teamAGuid"] = v.teamAGuid;
    j["teamAName"] = v.teamAName;
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["tournamentDescription"] = v.tournamentDescription;
    j["title"] = v.title;
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamBAcronym"] = v.teamBAcronym;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamAId = j.at("teamAId").get<int64_t_t>();
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string_t>();
    v.teamBName = j.at("teamBName").get<std::string_t>();
    v.teamBGuid = j.at("teamBGuid").get<std::string_t>();
    v.teamBId = j.at("teamBId").get<int64_t_t>();
    v.teamAGuid = j.at("teamAGuid").get<std::string_t>();
    v.teamAName = j.at("teamAName").get<std::string_t>();
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string_t>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string_t>();
    v.title = j.at("title").get<std::string_t>();
    v.teamAAcronym = j.at("teamAAcronym").get<std::string_t>();
    v.teamBAcronym = j.at("teamBAcronym").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsStreams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
