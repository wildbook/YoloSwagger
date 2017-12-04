#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsESportsStreams_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsESportsStreams_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsESportsStreams {
    // 
    std::string teamAAcronym;
    // 
    std::string teamAGuid;
    // 
    int64_t teamAId;
    // 
    std::string teamALogoUrl;
    // 
    std::string teamAName;
    // 
    std::string teamBAcronym;
    // 
    std::string teamBGuid;
    // 
    int64_t teamBId;
    // 
    std::string teamBLogoUrl;
    // 
    std::string teamBName;
    // 
    std::string title;
    // 
    std::string tournamentDescription;
  };

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams& v) {
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

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams& v) {
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>;
    v.teamAGuid = j.at("teamAGuid").get<std::string>;
    v.teamAId = j.at("teamAId").get<int64_t>;
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>;
    v.teamAName = j.at("teamAName").get<std::string>;
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>;
    v.teamBGuid = j.at("teamBGuid").get<std::string>;
    v.teamBId = j.at("teamBId").get<int64_t>;
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>;
    v.teamBName = j.at("teamBName").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsESportsStreams_HPP
