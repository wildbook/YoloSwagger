#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    std::string teamBAcronym;
    std::string teamAAcronym;
    std::string teamAGuid;
    std::string title;
    std::string teamBLogoUrl;
    int64_t teamAId;
    std::string teamBGuid;
    std::string teamBName;
    std::string teamAName;
    int64_t teamBId;
    std::string teamALogoUrl;
    std::string tournamentDescription;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamBAcronym"] = v.teamBAcronym;
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamAGuid"] = v.teamAGuid;
    j["title"] = v.title;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamAId"] = v.teamAId;
    j["teamBGuid"] = v.teamBGuid;
    j["teamBName"] = v.teamBName;
    j["teamAName"] = v.teamAName;
    j["teamBId"] = v.teamBId;
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["tournamentDescription"] = v.tournamentDescription;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>();
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>();
    v.teamAGuid = j.at("teamAGuid").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>();
    v.teamAId = j.at("teamAId").get<int64_t>();
    v.teamBGuid = j.at("teamBGuid").get<std::string>();
    v.teamBName = j.at("teamBName").get<std::string>();
    v.teamAName = j.at("teamAName").get<std::string>();
    v.teamBId = j.at("teamBId").get<int64_t>();
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsStreams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
