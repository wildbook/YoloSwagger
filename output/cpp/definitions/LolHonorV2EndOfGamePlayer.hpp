#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    int32_t skinIndex;
    int32_t teamId;
    std::string skinName;
    bool isReportingDisabled;
    int32_t profileIconId;
    nlohmann::json stats;
    uint64_t userId;
    bool botPlayer;
    uint64_t summonerId;
    int32_t wins;
    uint64_t gameId;
    int32_t championId;
    std::string summonerName;
    bool leaver;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["skinIndex"] = v.skinIndex;
    j["teamId"] = v.teamId;
    j["skinName"] = v.skinName;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["profileIconId"] = v.profileIconId;
    j["stats"] = v.stats;
    j["userId"] = v.userId;
    j["botPlayer"] = v.botPlayer;
    j["summonerId"] = v.summonerId;
    j["wins"] = v.wins;
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["leaver"] = v.leaver;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.userId = j.at("userId").get<uint64_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.leaver = j.at("leaver").get<bool>();
  }
  inline std::string to_string(const LolHonorV2EndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
