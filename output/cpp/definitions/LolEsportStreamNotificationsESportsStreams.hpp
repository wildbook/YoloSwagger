#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    std::string teamAAcronym;
    std::string teamAGuid;
    int64_t teamAId;
    std::string teamALogoUrl;
    std::string teamAName;
    std::string teamBAcronym;
    std::string teamBGuid;
    int64_t teamBId;
    std::string teamBLogoUrl;
    std::string teamBName;
    std::string title;
    std::string tournamentDescription;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamAGuid"] = v.teamAGuid;
    j["teamAId"] = v.teamAId;
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["teamAName"] = v.teamAName;
    j["teamBAcronym"] = v.teamBAcronym;
    j["teamBGuid"] = v.teamBGuid;
    j["teamBId"] = v.teamBId;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamBName"] = v.teamBName;
    j["title"] = v.title;
    j["tournamentDescription"] = v.tournamentDescription;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>();
    v.teamAGuid = j.at("teamAGuid").get<std::string>();
    v.teamAId = j.at("teamAId").get<int64_t>();
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>();
    v.teamAName = j.at("teamAName").get<std::string>();
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>();
    v.teamBGuid = j.at("teamBGuid").get<std::string>();
    v.teamBId = j.at("teamBId").get<int64_t>();
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>();
    v.teamBName = j.at("teamBName").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
  }
}
