#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    std::string teamBLogoUrl;
    std::string teamAAcronym;
    std::string tournamentDescription;
    std::string teamAName;
    std::string title;
    std::string teamBAcronym;
    std::string teamAGuid;
    int64_t teamBId;
    int64_t teamAId;
    std::string teamBGuid;
    std::string teamALogoUrl;
    std::string teamBName;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamAAcronym"] = v.teamAAcronym;
    j["tournamentDescription"] = v.tournamentDescription;
    j["teamAName"] = v.teamAName;
    j["title"] = v.title;
    j["teamBAcronym"] = v.teamBAcronym;
    j["teamAGuid"] = v.teamAGuid;
    j["teamBId"] = v.teamBId;
    j["teamAId"] = v.teamAId;
    j["teamBGuid"] = v.teamBGuid;
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["teamBName"] = v.teamBName;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>();
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
    v.teamAName = j.at("teamAName").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>();
    v.teamAGuid = j.at("teamAGuid").get<std::string>();
    v.teamBId = j.at("teamBId").get<int64_t>();
    v.teamAId = j.at("teamAId").get<int64_t>();
    v.teamBGuid = j.at("teamBGuid").get<std::string>();
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>();
    v.teamBName = j.at("teamBName").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsStreams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
