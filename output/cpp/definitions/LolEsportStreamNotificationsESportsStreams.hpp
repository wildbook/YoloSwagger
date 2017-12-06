#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    std::string teamBGuid;
    std::string teamBAcronym;
    std::string tournamentDescription;
    std::string teamAAcronym;
    std::string teamALogoUrl;
    std::string teamAName;
    std::string teamBName;
    std::string teamAGuid;
    int64_t teamAId;
    std::string title;
    std::string teamBLogoUrl;
    int64_t teamBId;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamBGuid"] = v.teamBGuid;
    j["teamBAcronym"] = v.teamBAcronym;
    j["tournamentDescription"] = v.tournamentDescription;
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["teamAName"] = v.teamAName;
    j["teamBName"] = v.teamBName;
    j["teamAGuid"] = v.teamAGuid;
    j["teamAId"] = v.teamAId;
    j["title"] = v.title;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamBId"] = v.teamBId;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamBGuid = j.at("teamBGuid").get<std::string>();
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>();
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>();
    v.teamAName = j.at("teamAName").get<std::string>();
    v.teamBName = j.at("teamBName").get<std::string>();
    v.teamAGuid = j.at("teamAGuid").get<std::string>();
    v.teamAId = j.at("teamAId").get<int64_t>();
    v.title = j.at("title").get<std::string>();
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>();
    v.teamBId = j.at("teamBId").get<int64_t>();
  }
}
