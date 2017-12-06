#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    bool botPlayer;
    int32_t championId;
    uint64_t gameId;
    bool isReportingDisabled;
    bool leaver;
    int32_t profileIconId;
    int32_t skinIndex;
    std::string skinName;
    nlohmann::json stats;
    uint64_t summonerId;
    std::string summonerName;
    int32_t teamId;
    uint64_t userId;
    int32_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["botPlayer"] = v.botPlayer;
    j["championId"] = v.championId;
    j["gameId"] = v.gameId;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["leaver"] = v.leaver;
    j["profileIconId"] = v.profileIconId;
    j["skinIndex"] = v.skinIndex;
    j["skinName"] = v.skinName;
    j["stats"] = v.stats;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
    j["userId"] = v.userId;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.leaver = j.at("leaver").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.wins = j.at("wins").get<int32_t>();
  }
}
