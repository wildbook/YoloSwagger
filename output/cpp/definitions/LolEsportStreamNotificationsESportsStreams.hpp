#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    std::string teamAName;
    std::string teamBGuid;
    std::string teamBLogoUrl;
    int64_t teamBId;
    std::string teamAAcronym;
    int64_t teamAId;
    std::string tournamentDescription;
    std::string teamBAcronym;
    std::string teamBName;
    std::string teamAGuid;
    std::string title;
    std::string teamALogoUrl;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamAName"] = v.teamAName;
    j["teamBGuid"] = v.teamBGuid;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamBId"] = v.teamBId;
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamAId"] = v.teamAId;
    j["tournamentDescription"] = v.tournamentDescription;
    j["teamBAcronym"] = v.teamBAcronym;
    j["teamBName"] = v.teamBName;
    j["teamAGuid"] = v.teamAGuid;
    j["title"] = v.title;
    j["teamALogoUrl"] = v.teamALogoUrl;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamAName = j.at("teamAName").get<std::string>();
    v.teamBGuid = j.at("teamBGuid").get<std::string>();
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>();
    v.teamBId = j.at("teamBId").get<int64_t>();
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>();
    v.teamAId = j.at("teamAId").get<int64_t>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>();
    v.teamBName = j.at("teamBName").get<std::string>();
    v.teamAGuid = j.at("teamAGuid").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsStreams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
