#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsESportsStreams_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsESportsStreams_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsESportsStreams {
    // 
    int64_t teamAId;
    // 
    std::string teamBLogoUrl;
    // 
    std::string teamBName;
    // 
    std::string teamBGuid;
    // 
    int64_t teamBId;
    // 
    std::string teamAGuid;
    // 
    std::string teamAName;
    // 
    std::string teamALogoUrl;
    // 
    std::string tournamentDescription;
    // 
    std::string title;
    // 
    std::string teamAAcronym;
    // 
    std::string teamBAcronym;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsStreams& v) {
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

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsStreams& v) {
    v.teamAId = j.at("teamAId").get<int64_t>;
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>;
    v.teamBName = j.at("teamBName").get<std::string>;
    v.teamBGuid = j.at("teamBGuid").get<std::string>;
    v.teamBId = j.at("teamBId").get<int64_t>;
    v.teamAGuid = j.at("teamAGuid").get<std::string>;
    v.teamAName = j.at("teamAName").get<std::string>;
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>;
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>;
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsESportsStreams_HPP
