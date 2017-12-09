#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    bool isReportingDisabled;
    int32_t profileIconId;
    uint64_t gameId;
    std::string skinName;
    nlohmann::json stats;
    uint64_t userId;
    int32_t wins;
    bool botPlayer;
    std::string summonerName;
    int32_t skinIndex;
    bool leaver;
    uint64_t summonerId;
    int32_t teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["skinName"] = v.skinName;
    j["stats"] = v.stats;
    j["userId"] = v.userId;
    j["wins"] = v.wins;
    j["botPlayer"] = v.botPlayer;
    j["summonerName"] = v.summonerName;
    j["skinIndex"] = v.skinIndex;
    j["leaver"] = v.leaver;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.userId = j.at("userId").get<uint64_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
