#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams_t {
    std::string teamALogoUrl;
    std::string teamBAcronym;
    int64_t teamBId;
    std::string title;
    std::string tournamentDescription;
    int64_t teamAId;
    std::string teamBLogoUrl;
    std::string teamBName;
    std::string teamAAcronym;
    std::string teamAGuid;
    std::string teamAName;
    std::string teamBGuid;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams_t& v) {
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["teamBAcronym"] = v.teamBAcronym;
    j["teamBId"] = v.teamBId;
    j["title"] = v.title;
    j["tournamentDescription"] = v.tournamentDescription;
    j["teamAId"] = v.teamAId;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["teamBName"] = v.teamBName;
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamAGuid"] = v.teamAGuid;
    j["teamAName"] = v.teamAName;
    j["teamBGuid"] = v.teamBGuid;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams_t& v) {
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>();
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>();
    v.teamBId = j.at("teamBId").get<int64_t>();
    v.title = j.at("title").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
    v.teamAId = j.at("teamAId").get<int64_t>();
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>();
    v.teamBName = j.at("teamBName").get<std::string>();
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>();
    v.teamAGuid = j.at("teamAGuid").get<std::string>();
    v.teamAName = j.at("teamAName").get<std::string>();
    v.teamBGuid = j.at("teamBGuid").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsStreams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
