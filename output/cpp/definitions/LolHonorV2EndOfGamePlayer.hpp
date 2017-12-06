#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    int32_t championId;
    int32_t skinIndex;
    int32_t wins;
    int32_t profileIconId;
    std::string skinName;
    nlohmann::json stats;
    uint64_t gameId;
    uint64_t userId;
    bool botPlayer;
    int32_t teamId;
    bool isReportingDisabled;
    bool leaver;
    std::string summonerName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["championId"] = v.championId;
    j["skinIndex"] = v.skinIndex;
    j["wins"] = v.wins;
    j["profileIconId"] = v.profileIconId;
    j["skinName"] = v.skinName;
    j["stats"] = v.stats;
    j["gameId"] = v.gameId;
    j["userId"] = v.userId;
    j["botPlayer"] = v.botPlayer;
    j["teamId"] = v.teamId;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["leaver"] = v.leaver;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.leaver = j.at("leaver").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
