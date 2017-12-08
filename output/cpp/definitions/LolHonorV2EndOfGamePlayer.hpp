#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    bool_t botPlayer;
    int32_t_t profileIconId;
    uint64_t_t gameId;
    int32_t_t championId;
    std::string_t summonerName;
    bool_t isReportingDisabled;
    uint64_t_t userId;
    bool_t leaver;
    int32_t_t skinIndex;
    std::string_t skinName;
    int32_t_t teamId;
    int32_t_t wins;
    nlohmann::json_t stats;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["botPlayer"] = v.botPlayer;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["userId"] = v.userId;
    j["leaver"] = v.leaver;
    j["skinIndex"] = v.skinIndex;
    j["skinName"] = v.skinName;
    j["teamId"] = v.teamId;
    j["wins"] = v.wins;
    j["stats"] = v.stats;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.botPlayer = j.at("botPlayer").get<bool_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool_t>();
    v.userId = j.at("userId").get<uint64_t_t>();
    v.leaver = j.at("leaver").get<bool_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t_t>();
    v.skinName = j.at("skinName").get<std::string_t>();
    v.teamId = j.at("teamId").get<int32_t_t>();
    v.wins = j.at("wins").get<int32_t_t>();
    v.stats = j.at("stats").get<nlohmann::json_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
